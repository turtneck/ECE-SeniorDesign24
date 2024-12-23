import tkintermapview
import asyncio
import tkinter as tk
from tkinter import messagebox
import tkinter.ttk as ttk
import asyncio
import time
from bleak import BleakClient, BleakError, BleakScanner
import bleak

import sys,os
#   attaches /Main/Py_Modules
#   if you raise this a folder, delete a '..'
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..', 'Py_Modules')))
from Path_Planning import generate_corners
from helper_functions import *
prRed("hi")

    

write_uuid = '0000ffe0-0000-1000-8000-00805f9b34fb'
read_uuid = '0000ffe0-0000-1000-8000-00805f9b34fb'


def build_gui():
    """Build a simple GUI."""
    # For the sake of simplicity, we use some global variables:
    global main_window, device_list, device_data, message_variable, input_buffer, is_connected
    default_gps = [(40.35193576273826, -79.92251632083196), (40.35216725384582, -79.92235178305927),
                   (40.357392805988894, -79.93423733144638)]
    main_window = tk.Tk()
    main_window.title('Tkinter/bleak asyncio Demo')

    main_window.title("GPS & Bluetooth Controller")
    main_window.geometry("900x900")
    main_window.configure(bg="#2c3e50")  # Background color

    # Title Label
    title_label = tk.Label(main_window, text="Wall-e Control", font=("Arial", 28, "bold"), fg="white", bg="#2c3e50")
    title_label.pack(pady=10)

    # Start/Stop Frame
    control_frame = ttk.Frame(main_window)
    control_frame.pack(pady=10)

    ##########################
    # Pressing the x-Icon on the Window calls stop_loop()
    main_window.protocol("WM_DELETE_WINDOW", BLE.stop_loop)

    message_variable = tk.StringVar()
    input_buffer = tk.StringVar()
    ####################################################

    main_window.start_button = ttk.Button(control_frame, text="Start", style="TButton", command= lambda : asyncio.create_task(BLE.start_task()))
    main_window.start_button.grid(row=0, column=0, padx=20, pady=10, sticky="nsew", ipadx=20)

    main_window.stop_button = ttk.Button(control_frame, text="Stop", style="TButton", command= lambda : asyncio.create_task(BLE.write("STOP\t")))
    main_window.stop_button.grid(row=0, column=2, padx=20, pady=10, sticky="nsew", ipadx=20)

    main_window.pause_button = ttk.Button(control_frame, text="Pause", style="TButton", command= lambda : asyncio.create_task(BLE.write("PAUS\t")))
    main_window.pause_button.grid(row=0, column=1, padx=20, pady=10, sticky="nsew", ipadx=20)

    # Bluetooth Frame
    bluetooth_frame = ttk.Frame(main_window
)
    bluetooth_frame.pack(pady=10)

    main_window.bt_button = ttk.Button(bluetooth_frame, text="Connect Bluetooth", command=lambda : asyncio.create_task(BLE.connect()))
    main_window.bt_button.grid(row=0, column=0, padx=10)

    main_window.status_label = tk.Label(bluetooth_frame, textvariable=message_variable, font=("Arial", 12),
                                 fg="red", bg="white")
    main_window.status_label.grid(row=0, column=1, padx=10)

    # Map Frame
    map_frame = ttk.Frame(main_window)
    map_frame.pack(pady=10)

    main_window.map_widget = tkintermapview.TkinterMapView(map_frame, width=700, height=400, corner_radius=10)
    main_window.map_widget.pack()
    main_window.map_widget.set_position(37.7749, -122.4194)
    main_window.map_widget.set_zoom(10)

    # Add initial markers
    main_window.markers = [
        main_window.map_widget.set_marker(37.7749, -122.4194, text="Start"),
        main_window.map_widget.set_marker(37.8044, -122.2711, text="Corner 1"),
        main_window.map_widget.set_marker(37.6879, -122.4702, text="Corner 2")
    ]

    # GPS Input Frame
    gps_input_frame = ttk.Frame(main_window)
    gps_input_frame.pack(pady=20)

    main_window.gps_fields = []
    for i in range(3):
        gps_frame = ttk.Frame(gps_input_frame)
        gps_frame.grid(row=i, column=0, padx=10, pady=5, sticky="w")

        lat_label = ttk.Label(gps_frame, text=f"Latitude {i + 1}:", font=("Arial", 12))
        lat_label.grid(row=0, column=0, padx=5)
        lat_entry = ttk.Entry(gps_frame, width=10)
        lat_entry.insert(0,default_gps[i][0])
        lat_entry.grid(row=0, column=1, padx=5)

        lon_label = ttk.Label(gps_frame, text=f"Longitude {i + 1}:", font=("Arial", 12))
        lon_label.grid(row=0, column=2, padx=5)
        lon_entry = ttk.Entry(gps_frame, width=10)
        lon_entry.insert(0, default_gps[i][1])
        lon_entry.grid(row=0, column=3, padx=5)

        main_window.gps_fields.append((lat_entry, lon_entry))

    main_window.set_button = ttk.Button(gps_frame, text=f"Set Coords",
                                        command=gps_update)
    main_window.set_button.grid(row=2, column=4, padx=5)

    buffer_input_frame = ttk.Frame(main_window)
    buffer_input_frame.pack(pady=20)
    main_window.input_label = tk.Label(buffer_input_frame, textvariable=input_buffer, font=("Arial", 12),
                                        fg="red", bg="white")

    main_window.input_label.grid(row=0, column=1, padx=20)

    ESTOP_frame = ttk.Frame(main_window)
    ESTOP_frame.pack(pady=20)
    main_window.estop_button = ttk.Button(ESTOP_frame, text="ESTOP", command= lambda : asyncio.create_task(BLE.write("ESTO\t")))
    main_window.estop_button.grid(row=0,column=1, padx=20)

     ###################


    # Don't do: main_window.mainloop()!
    # We are using the asyncio event loop in 'show' to call
    # main_window.update() regularly.



def gps_update():
    for i, (lat_entry, lon_entry) in enumerate(main_window.gps_fields):
        try:
            lat = lat_entry.get()
            lon = lon_entry.get()

            if (lat == "" or lon == ""):
                messagebox.showwarning("Error", "Some fields are empty")
                return

            lat = float(lat)
            lon = float(lon)

            if not (-90 <= lat <= 90) or not (-180 <= lon <= 180):
                messagebox.showerror("Invalid latitude or longitude",message="Entries for Marker" +  str(i + 1) +  "are not valid points, please try again.")
                return

            if len(lat_entry.get().split('.')[-1]) < 4 or len(lon_entry.get().split('.')[-1]) < 4:
                messagebox.showerror("Not Enough Precision","Coordinates for Marker" + str(i + 1) + " must have at least 4 decimal places.")
                return
            lat_entry.config(foreground="green")
            lon_entry.config(foreground="green")

            # Update the corresponding marker position on the map
            marker = main_window.markers[i]
            marker.set_position(lat, lon)


        except ValueError as e:
            # Show error message if the input is invalid
            messagebox.showerror("Error", str(e))


class BLE():
    def __init__(self):
        self.client = None
        is_connected=False
    async def write(self,message):
        if self.client == None:
            messagebox.showerror("Bluetooth Not Connected", "Cannot write to bluetooth")
            return False
        buffer = bytes(message, "utf-8")
        try :
            await self.client.write_gatt_char('0000ffe1-0000-1000-8000-00805f9b34fb', buffer, response=False)
        except (BleakError, asyncio.TimeoutError):
            message_variable.set(f'Writing not successful')
            return False
        message_variable.set(f'Message Sent')
        return True

    async def notify_read(self):
        await self.client.start_notify('0000ffe1-0000-1000-8000-00805f9b34fb', self.read_callback)


    async def start_task(self):
        # add logic for if gps coorindates are not set then it will not go
        message = ""
        gps_points = []
        if(self.client == None):
            messagebox.showerror("Error", "Bluetooth is not connected")
            return
        for i, (lat_entry, lon_entry) in enumerate(main_window.gps_fields):
            try:
                lat = float(lat_entry.get())
                lon = float(lon_entry.get())
                gps_points.append((lat,lon))
            except(ValueError):
                messagebox.showerror("Error", "GPS POINTS NOT SET")
                return
        corners = generate_corners(gps_points[0],gps_points[1],gps_points[2])
        await self.write("C1:" + str(corners[0][0]) + "," +  str(corners[0][1]) + "\n")
        await self.write("C2:" + str(corners[1][0]) + "," + str(corners[1][1]) + "\n")
        await self.write("C3:" + str(corners[2][0]) + "," + str(corners[2][1]) + "\n")
        message_variable.set("Running Bot")

    async def connect(self):
        """Connect to or disconnect from selected/connected device."""
        if not(self.client is None) and self.client.is_connected:
            message_variable.set('Trying to disconnect...')
            disconnect.set()
            return
        # Pick the BLE device from the scan result:
        device = await BleakScanner.find_device_by_name("lgilfillan")
        if device == None:
            message_variable.set('Could Not Connect...')
            return
        name = device.name if device.name is not None else device.address

        # try:
        message_variable.set(f'Trying to connect to {name}')
        self.client = BleakClient(device)
        try :
            await self.client.connect()
            message_variable.set(f'Device {name} is connected!')
            is_connected = True
        except (BleakError, asyncio.TimeoutError):
            message_variable.set(f'Connecting to {name}\nnot successful')
            is_connected = False

        try :
            await self.notify_read()
        except (BleakError, asyncio.TimeoutError):
            message_variable.set(f'Failed to establish 2 way connection')
            is_connected = False

        while not disconnect.is_set():
            await asyncio.sleep(0.1)
        is_connected = False
        return


    async def detailed_scanner(self):
        for service in self.client.services:
            print()
            print(f'\t\tDescription: {service.description}')
            print(f'\t\tService: {service}')

            print('\t\tCharacteristics:')
            for c in service.characteristics:
                print()
                print(f'\t\t\tUUID: {c.uuid}'),
                print(f'\t\t\tDescription: {c.description}')
                print(f'\t\t\tHandle: {c.handle}'),
                print(f'\t\t\tProperties: {c.properties}')
                print('\t\tDescriptors:')
                for descrip in c.descriptors:
                    print(descrip)

    async def read_callback(self, sender : bleak.BleakGATTCharacteristic, data : bytearray):
        data = data.decode('utf-8')
        pts = data[:8]
        input_buffer.set(time.ctime(time.time()) + data)
        pickup = messagebox.askyesno("Message Recieved",message=data)
        if pickup == True:
            await self.write("OKAY\t")
        else :
            await self.write("NKAY\t")

    def disconnect_callback(self,client):
        """Handle disconnection.

        This callback is called when the device is disconnected.
        """
        message_variable.set(f'Device {client.address} has/was\ndisconnected')


    async def show(self):
       while not stop.is_set():
            main_window.update()
            self.bt_alive()
            await asyncio.sleep(0.1)


    def bt_alive(self):
        if(not(self.client is None) and self.client.is_connected):
            try:
                if(self.client.is_connected):
                    message_variable.set(f'Connection Alive')
                else:
                    message_variable.set(f'Disconnected....')
            except(BleakError, asyncio.TimeoutError):
                pass



    def stop_loop(self):
        """Set stop event."""
        stop.set()


async def main():
    """Start the GUI."""
    global stop, disconnect, BLE
    BLE = BLE()
    stop = asyncio.Event()
    disconnect = asyncio.Event()
    build_gui()
    await BLE.show()
    main_window.destroy()


asyncio.run(main())