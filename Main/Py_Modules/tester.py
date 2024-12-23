import matplotlib.pyplot as plt

# First pair of x and y coordinates
x1 = [29,26,21,18,14, 8, 4, 2, 4, 6, 8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46]
y1 = [20,20,20,20,20,20,20,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47]


# Second pair of x and y coordinates
x2 = [27.14,22.59,16.50,13.32,9.14,3.90,1.32,1.45,1.65,2.95,4.63,5.97,7.35,8.87,10.43,11.92,13.45,15.16,17.04,17.35,18.95,20.87,24.91,27.21,29.19,31.23,33.20,35.60,37.94,39.93]
y2 = [22.46,23.78,23.85,23.38,22.64,21.19,20.35,47.02,47.14,47.29,47.45,47.68,47.95,48.23,48.54,48.90,49.28,49.63,49.95,50.83,51.32,51.71,51.11,51.23,51.51,51.75,52.03,52.01,52.01,52.25]

# Plot the first pair
plt.plot(x1, y1, label='real', marker='o',linestyle='None')

# Plot the second pair
plt.plot(x2, y2, label='calc', marker='s',linestyle='None')

# Draw lines connecting corresponding points
for i in range(len(x1)):
    plt.plot([x1[i], x2[i]], [y1[i], y2[i]], color='gray', linestyle='--', alpha=0.7)

# Add labels and title
# plt.xlabel('X-axis')
# plt.ylabel('Y-axis')
plt.title('Stereo Camera - Relative Position')

# Add a legend
plt.legend()

# Show the graph
plt.grid(True)
plt.show()
