// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210722.2

#pragma once
#ifndef WINRT_Windows_Security_Authorization_AppCapabilityAccess_1_H
#define WINRT_Windows_Security_Authorization_AppCapabilityAccess_1_H
#include "winrt/impl/Windows.Security.Authorization.AppCapabilityAccess.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authorization::AppCapabilityAccess
{
    struct __declspec(empty_bases) IAppCapability :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapability>
    {
        IAppCapability(std::nullptr_t = nullptr) noexcept {}
        IAppCapability(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppCapabilityAccessChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapabilityAccessChangedEventArgs>
    {
        IAppCapabilityAccessChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppCapabilityAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppCapabilityStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapabilityStatics>
    {
        IAppCapabilityStatics(std::nullptr_t = nullptr) noexcept {}
        IAppCapabilityStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
