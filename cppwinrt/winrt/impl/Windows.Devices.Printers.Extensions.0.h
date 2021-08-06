// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Windows_Devices_Printers_Extensions_0_H
#define WINRT_Windows_Devices_Printers_Extensions_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions
{
    enum class Print3DWorkflowDetail : int32_t
    {
        Unknown = 0,
        ModelExceedsPrintBed = 1,
        UploadFailed = 2,
        InvalidMaterialSelection = 3,
        InvalidModel = 4,
        ModelNotManifold = 5,
        InvalidPrintTicket = 6,
    };
    enum class Print3DWorkflowStatus : int32_t
    {
        Abandoned = 0,
        Canceled = 1,
        Failed = 2,
        Slicing = 3,
        Submitted = 4,
    };
    struct IPrint3DWorkflow;
    struct IPrint3DWorkflow2;
    struct IPrint3DWorkflowPrintRequestedEventArgs;
    struct IPrint3DWorkflowPrinterChangedEventArgs;
    struct Print3DWorkflow;
    struct Print3DWorkflowPrintRequestedEventArgs;
    struct Print3DWorkflowPrinterChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow> = L"Windows.Devices.Printers.Extensions.Print3DWorkflow";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrintRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrinterChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowDetail> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowDetail";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowStatus> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrintRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrinterChangedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ 0xC56F74BD,0x3669,0x4A66,{ 0xAB,0x42,0xC8,0x15,0x19,0x30,0xCD,0x34 } }; // C56F74BD-3669-4A66-AB42-C8151930CD34
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ 0xA2A6C54F,0x8AC1,0x4918,{ 0x97,0x41,0xE3,0x4F,0x30,0x04,0x23,0x9E } }; // A2A6C54F-8AC1-4918-9741-E34F3004239E
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ 0x19F8C858,0x5AC8,0x4B55,{ 0x8A,0x5F,0xE6,0x15,0x67,0xDA,0xFB,0x4D } }; // 19F8C858-5AC8-4B55-8A5F-E61567DAFB4D
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ 0x45226402,0x95FC,0x4847,{ 0x93,0xB3,0x13,0x4D,0xBF,0x5C,0x60,0xF7 } }; // 45226402-95FC-4847-93B3-134DBF5C60F7
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs; };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceID(void**) noexcept = 0;
            virtual int32_t __stdcall GetPrintModelPackage(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPrintReady(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPrintReady(bool) noexcept = 0;
            virtual int32_t __stdcall add_PrintRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrinterChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrinterChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetExtendedStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetSourceChanged(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewDeviceId(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceID() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) GetPrintModelPackage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPrintReady() const;
        WINRT_IMPL_AUTO(void) IsPrintReady(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) PrintRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        using PrintRequested_revoker = impl::event_revoker<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow, &impl::abi_t<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>::remove_PrintRequested>;
        [[nodiscard]] PrintRequested_revoker PrintRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) PrintRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2
    {
        WINRT_IMPL_AUTO(winrt::event_token) PrinterChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        using PrinterChanged_revoker = impl::event_revoker<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2, &impl::abi_t<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>::remove_PrinterChanged>;
        [[nodiscard]] PrinterChanged_revoker PrinterChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) PrinterChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowStatus) Status() const;
        WINRT_IMPL_AUTO(void) SetExtendedStatus(winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const& value) const;
        WINRT_IMPL_AUTO(void) SetSource(winrt::Windows::Foundation::IInspectable const& source) const;
        WINRT_IMPL_AUTO(void) SetSourceChanged(bool value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NewDeviceId() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs<D>;
    };
}
#endif
