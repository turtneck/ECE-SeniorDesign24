# Written by Lauren Gilfillan
# Convert GPS coordinates to Rectangle Path Plan for Robot

import math,platform
import numpy as np

try: from helper_functions import haversine_distance, gps_to_xy, interpolate_points
except Exception as e:
    from Py_Modules.helper_functions import haversine_distance, gps_to_xy, interpolate_points
    #raise RuntimeError("Import Error:\n") from e


#Max seeing distance of the bot in height and width in meters
RANGE_WIDTH = 5.0
RANGE_HEIGHT= 5.0 


#RUNS ON UI#
def generate_corners(p1, p2, p3, step=5):
       # Convert GPS to Cartesian coordinates relative to p1
    origin = (0, 0)
    x2, y2 = gps_to_xy(*p1, *p2)  # Cartesian from p1 to p2
    x3, y3 = gps_to_xy(*p1, *p3)  # Cartesian from p1 to p3

    x4, y4 = x2 + x3, y2 + y3

    corners = [origin, (x2, y2), (x3, y3), (x4, y4)]

    corners = sort_corners(corners)

    return corners

#Runs on Jetson#
def generate_path(p1, p2, p3,p4, step=5):
       # Convert GPS to Cartesian coordinates relative to p1
   
    corners = [p1,p2,p3,p4]

    path = []
    for i in range(len(corners)):
        start = corners[i]
        end = corners[(i + 1) % len(corners)]
        temp =  interpolate_points(start, end, step)
        path += temp
    path.append((0,0))

    return path
