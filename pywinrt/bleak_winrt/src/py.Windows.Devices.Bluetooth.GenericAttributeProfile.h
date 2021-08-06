// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-alpha.2

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Bluetooth.h")
#include "py.Windows.Devices.Bluetooth.h"
#endif

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h>

namespace py::proj::Windows::Devices::Bluetooth::GenericAttributeProfile
{}

namespace py::impl::Windows::Devices::Bluetooth::GenericAttributeProfile
{}

namespace py::wrapper::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    using GattCharacteristic = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>;
    using GattCharacteristicUuids = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids>;
    using GattCharacteristicsResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>;
    using GattClientNotificationResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>;
    using GattDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>;
    using GattDescriptorUuids = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>;
    using GattDescriptorsResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>;
    using GattDeviceService = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>;
    using GattDeviceServicesResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>;
    using GattLocalCharacteristic = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>;
    using GattLocalCharacteristicParameters = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>;
    using GattLocalCharacteristicResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>;
    using GattLocalDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>;
    using GattLocalDescriptorParameters = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>;
    using GattLocalDescriptorResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>;
    using GattLocalService = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>;
    using GattPresentationFormat = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>;
    using GattPresentationFormatTypes = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes>;
    using GattProtocolError = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError>;
    using GattReadClientCharacteristicConfigurationDescriptorResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>;
    using GattReadRequest = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>;
    using GattReadRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>;
    using GattReadResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>;
    using GattReliableWriteTransaction = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>;
    using GattRequestStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>;
    using GattServiceProvider = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>;
    using GattServiceProviderAdvertisementStatusChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>;
    using GattServiceProviderAdvertisingParameters = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>;
    using GattServiceProviderResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>;
    using GattServiceUuids = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>;
    using GattSession = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>;
    using GattSessionStatusChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>;
    using GattSubscribedClient = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>;
    using GattValueChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>;
    using GattWriteRequest = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>;
    using GattWriteRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>;
    using GattWriteResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
