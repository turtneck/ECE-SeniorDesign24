import tkinter as tk
from tkinter import ttk, messagebox
from tkintermapview import TkinterMapView

import Bluetooth_Connection
import asyncio

class App(tk.Tk):
    def __init__(self):
        super().__init__()

        self.title("GPS & Bluetooth Controller")
        self.geometry("900x900")
        self.configure(bg="#2c3e50")  # Background color

        # Bluetooth connection status
        self.connected = False
        self.BLE = Bluetooth_Connection.BLE()
        self.past_message = ""

        # Title Label
        title_label = tk.Label(self, text="Wall-e Control", font=("Arial", 28, "bold"), fg="white", bg="#2c3e50")
        title_label.pack(pady=10)

        # Start/Stop Frame
        control_frame = ttk.Frame(self)
        control_frame.pack(pady=10)

        self.start_button = ttk.Button(control_frame, text="Start", style="TButton", command=self.start)
        self.start_button.grid(row=0, column=0, padx=20, pady=10, sticky="nsew", ipadx=20)

        self.stop_button = ttk.Button(control_frame, text="Stop", style="TButton", command=self.stop)
        self.stop_button.grid(row=0, column=2, padx=20, pady=10, sticky="nsew", ipadx=20)

        self.pause_button = ttk.Button(control_frame, text="Pause", style="TButton", command=self.pause)
        self.pause_button.grid(row=0, column=1, padx=20, pady=10, sticky="nsew", ipadx=20)

        # Bluetooth Frame
        bluetooth_frame = ttk.Frame(self)
        bluetooth_frame.pack(pady=10)

        self.bt_button = ttk.Button(bluetooth_frame, text="Connect Bluetooth", command=self.connect_bluetooth)
        self.bt_button.grid(row=0, column=0, padx=10)

        self.status_label = tk.Label(bluetooth_frame, text="Bluetooth: Not Connected", font=("Arial", 12),
                                     fg="red", bg="white")
        self.status_label.grid(row=0, column=1, padx=10)

        # Map Frame
        map_frame = ttk.Frame(self)
        map_frame.pack(pady=10)

        self.map_widget = TkinterMapView(map_frame, width=700, height=400, corner_radius=10)
        self.map_widget.pack()
        self.map_widget.set_position(37.7749, -122.4194)  # Default to San Francisco
        self.map_widget.set_zoom(10)

        # Add initial markers
        self.markers = [
            self.map_widget.set_marker(37.7749, -122.4194, text="Start"),
            self.map_widget.set_marker(37.8044, -122.2711, text="Corner 1"),
            self.map_widget.set_marker(37.6879, -122.4702, text="Corner 2")
        ]

        # GPS Input Frame
        gps_input_frame = ttk.Frame(self)
        gps_input_frame.pack(pady=20)

        self.gps_fields = []
        for i in range(3):
            gps_frame = ttk.Frame(gps_input_frame)
            gps_frame.grid(row=i, column=0, padx=10, pady=5, sticky="w")

            lat_label = ttk.Label(gps_frame, text=f"Latitude {i + 1}:", font=("Arial", 12))
            lat_label.grid(row=0, column=0, padx=5)
            lat_entry = ttk.Entry(gps_frame, width=10)
            lat_entry.grid(row=0, column=1, padx=5)

            lon_label = ttk.Label(gps_frame, text=f"Longitude {i + 1}:", font=("Arial", 12))
            lon_label.grid(row=0, column=2, padx=5)
            lon_entry = ttk.Entry(gps_frame, width=10)
            lon_entry.grid(row=0, column=3, padx=5)

            self.set_button = ttk.Button(gps_frame, text=f"Set {i + 1}",
                                    command=lambda e=(lat_entry, lon_entry), idx=i: self.set_marker(e, idx))
            self.set_button.grid(row=0, column=4, padx=5)

            self.gps_fields.append((lat_entry, lon_entry))

    def start(self):
        print("start entered")
        if(self.status_label.cget("text") == "Bluetooth: Not Connected"):
            messagebox.showerror("Error", "Bluetooth is not connected")
        else:
            message = "PATH \t".join(str(self.gps_fields)) + "\n"
            asyncio.run(self.BLE.write_bluetooth(self.BLE,message))

    # def on_set(self):
    #     if

    def stop(self):
        if (self.status_label.cget("text") == "Bluetooth: Not Connected"):
            messagebox.showerror("Error", "Bluetooth is not connected")
        else:
            message= "STOP \t \n"
            asyncio.run(BLE.write_bluetooth(self.BLE,message))


    def pause(self):
        if (self.status_label.cget("text") == "Bluetooth: Not Connected"):
            messagebox.showerror("Error", "Bluetooth is not connected")
        else:
            message = "PAUS \t \n"
            asyncio.run(self.BLE.write_bluetooth(message))
    def set_marker(self, entries, idx):
        try:
            lat = float(entries[0].get())
            lon = float(entries[1].get())
            self.markers[idx].set_position(lat, lon)
        except ValueError:
            messagebox.showerror("Error", "Invalid GPS coordinates")

    def connect_bluetooth(self):
        sucess = asyncio.run(self.BLE.init_bluetooth())
        if(not(sucess)):
            messagebox.showerror("Error", "BLUETOOTH CONNECTION FAILED")
        else :
            self.status_label.configure(text = "Bluetooth Connected", fg="blue")


    def continous_read_bluetooth(self):
        if (self.status_label.cget("text") == "Bluetooth: Not Connected"):
            pass
        else:
            messsage = asyncio.run(self.BLE.read_bluetooth())
            if (not(messsage == self.past_message or messsage == "")):
                response = messagebox.askyesno("Trash Detected on the Tarmac", "Do you want wall-e to pick it up?")
                if(response == 'yes') :
                    asyncio.run(self.BLE.write_bluetooth("OKAY\t"))
                elif (response == 'no') :
                    asyncio.run(self.BLE.write_bluetooth("NKAY\t"))
                self.past_message = messsage

        self.after(500, self.continous_read_bluetooth)




if __name__ == "__main__":
    # Apply modern ttk styling
    style = ttk.Style()
    style.configure("TButton", font=("Arial", 16), padding=10)

    app = App()
    # app.continous_read_bluetooth()
    app.mainloop()