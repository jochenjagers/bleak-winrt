// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-alpha.2

#include "pch.h"
#include "py.Windows.Devices.Bluetooth.Background.h"

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>::python_type;

namespace py::cpp::Windows::Devices::Bluetooth::Background
{
    // ----- BluetoothLEAdvertisementPublisherTriggerDetails class --------------------
    constexpr const char* const _type_name_BluetoothLEAdvertisementPublisherTriggerDetails = "BluetoothLEAdvertisementPublisherTriggerDetails";

    static PyObject* _new_BluetoothLEAdvertisementPublisherTriggerDetails(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_BluetoothLEAdvertisementPublisherTriggerDetails);
        return nullptr;
    }

    static void _dealloc_BluetoothLEAdvertisementPublisherTriggerDetails(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* BluetoothLEAdvertisementPublisherTriggerDetails_get_Error(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Error());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BluetoothLEAdvertisementPublisherTriggerDetails_get_Status(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Status());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_BluetoothLEAdvertisementPublisherTriggerDetails(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_BluetoothLEAdvertisementPublisherTriggerDetails[] = {
        { "_from", (PyCFunction)_from_BluetoothLEAdvertisementPublisherTriggerDetails, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_BluetoothLEAdvertisementPublisherTriggerDetails[] = {
        { const_cast<char*>("error"), (getter)BluetoothLEAdvertisementPublisherTriggerDetails_get_Error, nullptr, nullptr, nullptr },
        { const_cast<char*>("status"), (getter)BluetoothLEAdvertisementPublisherTriggerDetails_get_Status, nullptr, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_BluetoothLEAdvertisementPublisherTriggerDetails[] = 
    {
        { Py_tp_new, _new_BluetoothLEAdvertisementPublisherTriggerDetails },
        { Py_tp_dealloc, _dealloc_BluetoothLEAdvertisementPublisherTriggerDetails },
        { Py_tp_methods, _methods_BluetoothLEAdvertisementPublisherTriggerDetails },
        { Py_tp_getset, _getset_BluetoothLEAdvertisementPublisherTriggerDetails },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_BluetoothLEAdvertisementPublisherTriggerDetails =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.BluetoothLEAdvertisementPublisherTriggerDetails",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_BluetoothLEAdvertisementPublisherTriggerDetails
    };

    // ----- BluetoothLEAdvertisementWatcherTriggerDetails class --------------------
    constexpr const char* const _type_name_BluetoothLEAdvertisementWatcherTriggerDetails = "BluetoothLEAdvertisementWatcherTriggerDetails";

    static PyObject* _new_BluetoothLEAdvertisementWatcherTriggerDetails(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_BluetoothLEAdvertisementWatcherTriggerDetails);
        return nullptr;
    }

    static void _dealloc_BluetoothLEAdvertisementWatcherTriggerDetails(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* BluetoothLEAdvertisementWatcherTriggerDetails_get_Advertisements(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Advertisements());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BluetoothLEAdvertisementWatcherTriggerDetails_get_Error(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Error());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BluetoothLEAdvertisementWatcherTriggerDetails_get_SignalStrengthFilter(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SignalStrengthFilter());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_BluetoothLEAdvertisementWatcherTriggerDetails(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_BluetoothLEAdvertisementWatcherTriggerDetails[] = {
        { "_from", (PyCFunction)_from_BluetoothLEAdvertisementWatcherTriggerDetails, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_BluetoothLEAdvertisementWatcherTriggerDetails[] = {
        { const_cast<char*>("advertisements"), (getter)BluetoothLEAdvertisementWatcherTriggerDetails_get_Advertisements, nullptr, nullptr, nullptr },
        { const_cast<char*>("error"), (getter)BluetoothLEAdvertisementWatcherTriggerDetails_get_Error, nullptr, nullptr, nullptr },
        { const_cast<char*>("signal_strength_filter"), (getter)BluetoothLEAdvertisementWatcherTriggerDetails_get_SignalStrengthFilter, nullptr, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_BluetoothLEAdvertisementWatcherTriggerDetails[] = 
    {
        { Py_tp_new, _new_BluetoothLEAdvertisementWatcherTriggerDetails },
        { Py_tp_dealloc, _dealloc_BluetoothLEAdvertisementWatcherTriggerDetails },
        { Py_tp_methods, _methods_BluetoothLEAdvertisementWatcherTriggerDetails },
        { Py_tp_getset, _getset_BluetoothLEAdvertisementWatcherTriggerDetails },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_BluetoothLEAdvertisementWatcherTriggerDetails =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.BluetoothLEAdvertisementWatcherTriggerDetails",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_BluetoothLEAdvertisementWatcherTriggerDetails
    };

    // ----- GattCharacteristicNotificationTriggerDetails class --------------------
    constexpr const char* const _type_name_GattCharacteristicNotificationTriggerDetails = "GattCharacteristicNotificationTriggerDetails";

    static PyObject* _new_GattCharacteristicNotificationTriggerDetails(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_GattCharacteristicNotificationTriggerDetails);
        return nullptr;
    }

    static void _dealloc_GattCharacteristicNotificationTriggerDetails(py::wrapper::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* GattCharacteristicNotificationTriggerDetails_get_Characteristic(py::wrapper::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Characteristic());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GattCharacteristicNotificationTriggerDetails_get_Value(py::wrapper::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Value());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GattCharacteristicNotificationTriggerDetails_get_Error(py::wrapper::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Error());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GattCharacteristicNotificationTriggerDetails_get_EventTriggeringMode(py::wrapper::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.EventTriggeringMode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GattCharacteristicNotificationTriggerDetails_get_ValueChangedEvents(py::wrapper::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ValueChangedEvents());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_GattCharacteristicNotificationTriggerDetails(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_GattCharacteristicNotificationTriggerDetails[] = {
        { "_from", (PyCFunction)_from_GattCharacteristicNotificationTriggerDetails, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_GattCharacteristicNotificationTriggerDetails[] = {
        { const_cast<char*>("characteristic"), (getter)GattCharacteristicNotificationTriggerDetails_get_Characteristic, nullptr, nullptr, nullptr },
        { const_cast<char*>("value"), (getter)GattCharacteristicNotificationTriggerDetails_get_Value, nullptr, nullptr, nullptr },
        { const_cast<char*>("error"), (getter)GattCharacteristicNotificationTriggerDetails_get_Error, nullptr, nullptr, nullptr },
        { const_cast<char*>("event_triggering_mode"), (getter)GattCharacteristicNotificationTriggerDetails_get_EventTriggeringMode, nullptr, nullptr, nullptr },
        { const_cast<char*>("value_changed_events"), (getter)GattCharacteristicNotificationTriggerDetails_get_ValueChangedEvents, nullptr, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_GattCharacteristicNotificationTriggerDetails[] = 
    {
        { Py_tp_new, _new_GattCharacteristicNotificationTriggerDetails },
        { Py_tp_dealloc, _dealloc_GattCharacteristicNotificationTriggerDetails },
        { Py_tp_methods, _methods_GattCharacteristicNotificationTriggerDetails },
        { Py_tp_getset, _getset_GattCharacteristicNotificationTriggerDetails },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_GattCharacteristicNotificationTriggerDetails =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.GattCharacteristicNotificationTriggerDetails",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_GattCharacteristicNotificationTriggerDetails
    };

    // ----- GattServiceProviderConnection class --------------------
    constexpr const char* const _type_name_GattServiceProviderConnection = "GattServiceProviderConnection";

    static PyObject* _new_GattServiceProviderConnection(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_GattServiceProviderConnection);
        return nullptr;
    }

    static void _dealloc_GattServiceProviderConnection(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* GattServiceProviderConnection_Start(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.Start();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* GattServiceProviderConnection_get_Service(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Service());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GattServiceProviderConnection_get_TriggerId(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.TriggerId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GattServiceProviderConnection_get_AllServices(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection::AllServices());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_GattServiceProviderConnection(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_GattServiceProviderConnection[] = {
        { "start", (PyCFunction)GattServiceProviderConnection_Start, METH_VARARGS, nullptr },
        { "get_all_services", (PyCFunction)GattServiceProviderConnection_get_AllServices, METH_NOARGS | METH_STATIC, nullptr },
        { "_from", (PyCFunction)_from_GattServiceProviderConnection, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_GattServiceProviderConnection[] = {
        { const_cast<char*>("service"), (getter)GattServiceProviderConnection_get_Service, nullptr, nullptr, nullptr },
        { const_cast<char*>("trigger_id"), (getter)GattServiceProviderConnection_get_TriggerId, nullptr, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_GattServiceProviderConnection[] = 
    {
        { Py_tp_new, _new_GattServiceProviderConnection },
        { Py_tp_dealloc, _dealloc_GattServiceProviderConnection },
        { Py_tp_methods, _methods_GattServiceProviderConnection },
        { Py_tp_getset, _getset_GattServiceProviderConnection },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_GattServiceProviderConnection =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.GattServiceProviderConnection",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_GattServiceProviderConnection
    };

    // ----- GattServiceProviderTriggerDetails class --------------------
    constexpr const char* const _type_name_GattServiceProviderTriggerDetails = "GattServiceProviderTriggerDetails";

    static PyObject* _new_GattServiceProviderTriggerDetails(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_GattServiceProviderTriggerDetails);
        return nullptr;
    }

    static void _dealloc_GattServiceProviderTriggerDetails(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* GattServiceProviderTriggerDetails_get_Connection(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Connection());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_GattServiceProviderTriggerDetails(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_GattServiceProviderTriggerDetails[] = {
        { "_from", (PyCFunction)_from_GattServiceProviderTriggerDetails, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_GattServiceProviderTriggerDetails[] = {
        { const_cast<char*>("connection"), (getter)GattServiceProviderTriggerDetails_get_Connection, nullptr, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_GattServiceProviderTriggerDetails[] = 
    {
        { Py_tp_new, _new_GattServiceProviderTriggerDetails },
        { Py_tp_dealloc, _dealloc_GattServiceProviderTriggerDetails },
        { Py_tp_methods, _methods_GattServiceProviderTriggerDetails },
        { Py_tp_getset, _getset_GattServiceProviderTriggerDetails },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_GattServiceProviderTriggerDetails =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.GattServiceProviderTriggerDetails",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_GattServiceProviderTriggerDetails
    };

    // ----- RfcommConnectionTriggerDetails class --------------------
    constexpr const char* const _type_name_RfcommConnectionTriggerDetails = "RfcommConnectionTriggerDetails";

    static PyObject* _new_RfcommConnectionTriggerDetails(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_RfcommConnectionTriggerDetails);
        return nullptr;
    }

    static void _dealloc_RfcommConnectionTriggerDetails(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* RfcommConnectionTriggerDetails_get_Incoming(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Incoming());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommConnectionTriggerDetails_get_RemoteDevice(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RemoteDevice());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommConnectionTriggerDetails_get_Socket(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Socket());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_RfcommConnectionTriggerDetails(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RfcommConnectionTriggerDetails[] = {
        { "_from", (PyCFunction)_from_RfcommConnectionTriggerDetails, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_RfcommConnectionTriggerDetails[] = {
        { const_cast<char*>("incoming"), (getter)RfcommConnectionTriggerDetails_get_Incoming, nullptr, nullptr, nullptr },
        { const_cast<char*>("remote_device"), (getter)RfcommConnectionTriggerDetails_get_RemoteDevice, nullptr, nullptr, nullptr },
        { const_cast<char*>("socket"), (getter)RfcommConnectionTriggerDetails_get_Socket, nullptr, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_RfcommConnectionTriggerDetails[] = 
    {
        { Py_tp_new, _new_RfcommConnectionTriggerDetails },
        { Py_tp_dealloc, _dealloc_RfcommConnectionTriggerDetails },
        { Py_tp_methods, _methods_RfcommConnectionTriggerDetails },
        { Py_tp_getset, _getset_RfcommConnectionTriggerDetails },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_RfcommConnectionTriggerDetails =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.RfcommConnectionTriggerDetails",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RfcommConnectionTriggerDetails
    };

    // ----- RfcommInboundConnectionInformation class --------------------
    constexpr const char* const _type_name_RfcommInboundConnectionInformation = "RfcommInboundConnectionInformation";

    static PyObject* _new_RfcommInboundConnectionInformation(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_RfcommInboundConnectionInformation);
        return nullptr;
    }

    static void _dealloc_RfcommInboundConnectionInformation(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* RfcommInboundConnectionInformation_get_ServiceCapabilities(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ServiceCapabilities());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int RfcommInboundConnectionInformation_put_ServiceCapabilities(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothServiceCapabilities>(arg);

            self->obj.ServiceCapabilities(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* RfcommInboundConnectionInformation_get_SdpRecord(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SdpRecord());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int RfcommInboundConnectionInformation_put_SdpRecord(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(arg);

            self->obj.SdpRecord(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* RfcommInboundConnectionInformation_get_LocalServiceId(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.LocalServiceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int RfcommInboundConnectionInformation_put_LocalServiceId(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(arg);

            self->obj.LocalServiceId(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_RfcommInboundConnectionInformation(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RfcommInboundConnectionInformation[] = {
        { "_from", (PyCFunction)_from_RfcommInboundConnectionInformation, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_RfcommInboundConnectionInformation[] = {
        { const_cast<char*>("service_capabilities"), (getter)RfcommInboundConnectionInformation_get_ServiceCapabilities, (setter)RfcommInboundConnectionInformation_put_ServiceCapabilities, nullptr, nullptr },
        { const_cast<char*>("sdp_record"), (getter)RfcommInboundConnectionInformation_get_SdpRecord, (setter)RfcommInboundConnectionInformation_put_SdpRecord, nullptr, nullptr },
        { const_cast<char*>("local_service_id"), (getter)RfcommInboundConnectionInformation_get_LocalServiceId, (setter)RfcommInboundConnectionInformation_put_LocalServiceId, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_RfcommInboundConnectionInformation[] = 
    {
        { Py_tp_new, _new_RfcommInboundConnectionInformation },
        { Py_tp_dealloc, _dealloc_RfcommInboundConnectionInformation },
        { Py_tp_methods, _methods_RfcommInboundConnectionInformation },
        { Py_tp_getset, _getset_RfcommInboundConnectionInformation },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_RfcommInboundConnectionInformation =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.RfcommInboundConnectionInformation",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RfcommInboundConnectionInformation
    };

    // ----- RfcommOutboundConnectionInformation class --------------------
    constexpr const char* const _type_name_RfcommOutboundConnectionInformation = "RfcommOutboundConnectionInformation";

    static PyObject* _new_RfcommOutboundConnectionInformation(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_RfcommOutboundConnectionInformation);
        return nullptr;
    }

    static void _dealloc_RfcommOutboundConnectionInformation(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* RfcommOutboundConnectionInformation_get_RemoteServiceId(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RemoteServiceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int RfcommOutboundConnectionInformation_put_RemoteServiceId(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(arg);

            self->obj.RemoteServiceId(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_RfcommOutboundConnectionInformation(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RfcommOutboundConnectionInformation[] = {
        { "_from", (PyCFunction)_from_RfcommOutboundConnectionInformation, METH_O | METH_STATIC, nullptr },
        { nullptr }
    };

    static PyGetSetDef _getset_RfcommOutboundConnectionInformation[] = {
        { const_cast<char*>("remote_service_id"), (getter)RfcommOutboundConnectionInformation_get_RemoteServiceId, (setter)RfcommOutboundConnectionInformation_put_RemoteServiceId, nullptr, nullptr },
        { nullptr }
    };

    static PyType_Slot _type_slots_RfcommOutboundConnectionInformation[] = 
    {
        { Py_tp_new, _new_RfcommOutboundConnectionInformation },
        { Py_tp_dealloc, _dealloc_RfcommOutboundConnectionInformation },
        { Py_tp_methods, _methods_RfcommOutboundConnectionInformation },
        { Py_tp_getset, _getset_RfcommOutboundConnectionInformation },
        { 0, nullptr },
    };

    static PyType_Spec _type_spec_RfcommOutboundConnectionInformation =
    {
        "_bleak_winrt_Windows_Devices_Bluetooth_Background.RfcommOutboundConnectionInformation",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RfcommOutboundConnectionInformation
    };

    // ----- Windows.Devices.Bluetooth.Background Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::winrt_base>::python_type) };

            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>::python_type = py::register_python_type(module, _type_name_BluetoothLEAdvertisementPublisherTriggerDetails, &_type_spec_BluetoothLEAdvertisementPublisherTriggerDetails, bases.get());
            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>::python_type = py::register_python_type(module, _type_name_BluetoothLEAdvertisementWatcherTriggerDetails, &_type_spec_BluetoothLEAdvertisementWatcherTriggerDetails, bases.get());
            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>::python_type = py::register_python_type(module, _type_name_GattCharacteristicNotificationTriggerDetails, &_type_spec_GattCharacteristicNotificationTriggerDetails, bases.get());
            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>::python_type = py::register_python_type(module, _type_name_GattServiceProviderConnection, &_type_spec_GattServiceProviderConnection, bases.get());
            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>::python_type = py::register_python_type(module, _type_name_GattServiceProviderTriggerDetails, &_type_spec_GattServiceProviderTriggerDetails, bases.get());
            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>::python_type = py::register_python_type(module, _type_name_RfcommConnectionTriggerDetails, &_type_spec_RfcommConnectionTriggerDetails, bases.get());
            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>::python_type = py::register_python_type(module, _type_name_RfcommInboundConnectionInformation, &_type_spec_RfcommInboundConnectionInformation, bases.get());
            py::winrt_type<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>::python_type = py::register_python_type(module, _type_name_RfcommOutboundConnectionInformation, &_type_spec_RfcommOutboundConnectionInformation, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {
        {Py_mod_exec, module_exec},
        {0, nullptr}
    };

    PyDoc_STRVAR(module_doc, "Windows.Devices.Bluetooth.Background");

    static PyModuleDef module_def = {
        PyModuleDef_HEAD_INIT,
        "_bleak_winrt_Windows_Devices_Bluetooth_Background",
        module_doc,
        0,
        nullptr,
        module_slots,
        nullptr,
        nullptr,
        nullptr
    };
} // py::cpp::Windows::Devices::Bluetooth::Background

PyMODINIT_FUNC
PyInit__bleak_winrt_Windows_Devices_Bluetooth_Background (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Devices::Bluetooth::Background::module_def);
}
