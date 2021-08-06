# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-alpha.2

import typing, bleak_winrt
import enum

_ns_module = bleak_winrt._import_ns_module("Windows.Devices.Bluetooth.Background")

try:
    import bleak_winrt.windows.devices.bluetooth
except:
    pass

try:
    import bleak_winrt.windows.devices.bluetooth.advertisement
except:
    pass

try:
    import bleak_winrt.windows.devices.bluetooth.genericattributeprofile
except:
    pass

try:
    import bleak_winrt.windows.devices.bluetooth.rfcomm
except:
    pass

try:
    import bleak_winrt.windows.foundation.collections
except:
    pass

try:
    import bleak_winrt.windows.networking.sockets
except:
    pass

try:
    import bleak_winrt.windows.storage.streams
except:
    pass

class BluetoothEventTriggeringMode(enum.IntEnum):
    SERIAL = 0
    BATCH = 1
    KEEP_LATEST = 2

BluetoothLEAdvertisementPublisherTriggerDetails = _ns_module.BluetoothLEAdvertisementPublisherTriggerDetails
BluetoothLEAdvertisementWatcherTriggerDetails = _ns_module.BluetoothLEAdvertisementWatcherTriggerDetails
GattCharacteristicNotificationTriggerDetails = _ns_module.GattCharacteristicNotificationTriggerDetails
GattServiceProviderConnection = _ns_module.GattServiceProviderConnection
GattServiceProviderTriggerDetails = _ns_module.GattServiceProviderTriggerDetails
RfcommConnectionTriggerDetails = _ns_module.RfcommConnectionTriggerDetails
RfcommInboundConnectionInformation = _ns_module.RfcommInboundConnectionInformation
RfcommOutboundConnectionInformation = _ns_module.RfcommOutboundConnectionInformation
