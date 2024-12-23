import asyncio
import numpy as np
from bleak import BleakScanner, BleakClient

write_uuid = '0000ffe1-0000-1000-8000-00805f9b34fb'
read_uuid = '0000ffe1-0000-1000-8000-00805f9b34fb'
Service_UUID =  '0000FFE0-0000-1000-8000-00805F9B34FB'
Characteristic_UUID = '0000FFE1-0000-1000-8000-00805F9B34F'
class BLE():
    async def init_bluetooth(self):
        self.device = await BleakScanner.find_device_by_name("lgilfillan")
        self.client = BleakClient(self.device)
        async with BleakClient(self.device) as client :
            if await client.connect():
                print("sucessful connection")
                return client.is_connected
            else:
                return False

    async def detailed_scanner(self):
        async with BleakClient(self.device) as client:
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


    async def write_bluetooth(self, message):
        print("writing")
        buffer = bytes(message, "utf-8")
        try:
            print("actually writing")
            await self.client.write_gatt_char(write_uuid, buffer, response=True)
        except(AttributeError):
            pass
    async def is_alive(self):

        if self.client.is_connected:
            print("is alive")
        else:
            print("is dead")



if __name__ == '__main__':
    BLE = BLE()
    connect = asyncio.run(BLE.init_bluetooth())
    asyncio.run(BLE.detailed_scanner())



