import asyncio
import numpy as np
from bleak import BleakScanner, BleakClient

write_uuid = '0000ffe1-0000-1000-8000-00805f9b34fb'
read_uuid = '0000ffe1-0000-1000-8000-00805f9b34fb'
Service_UUID =  '0000FFE0-0000-1000-8000-00805F9B34FB'
Characteristic_UUID = '0000FFE1-0000-1000-8000-00805F9B34F'

async def detailed_scanner(client):
    for service in client.services:
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
...

async def read_bluetooth(self):
    data = ""
    if await self.client.is_connect():
        data = await client.read_gatt_char(read_uuid).decode('utf8')
    return data



async def write_bluetooth(self,message):
    buffer = bytes(message, "utf-8")
    if self.client.is_connected:
        try:
            await self.client.read_gatt_char(write_uuid, buffer, response=True)
        except(AttributeError):
            pass

async def init_bluetooth(self):

    device = await BleakScanner.find_device_by_name("lgilfillan")
    self.client = BleakClient(device)
    try :
        async with BleakClient(device) as client :
            if await client.connect():
                return client.is_connected
            else:
                return False
    except(AttributeError):
            return False








