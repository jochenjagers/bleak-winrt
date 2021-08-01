// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210722.2

#pragma once
#ifndef WINRT_Windows_Storage_Provider_1_H
#define WINRT_Windows_Storage_Provider_1_H
#include "winrt/impl/Windows.Storage.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    struct __declspec(empty_bases) ICachedFileUpdaterStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterStatics>
    {
        ICachedFileUpdaterStatics(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterUI :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI>
    {
        ICachedFileUpdaterUI(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterUI(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterUI2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI2>,
        impl::require<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2, winrt::Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        ICachedFileUpdaterUI2(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterUI2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequest :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest>
    {
        IFileUpdateRequest(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequest2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest2>,
        impl::require<winrt::Windows::Storage::Provider::IFileUpdateRequest2, winrt::Windows::Storage::Provider::IFileUpdateRequest>
    {
        IFileUpdateRequest2(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequest2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequestDeferral :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestDeferral>
    {
        IFileUpdateRequestDeferral(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestedEventArgs>
    {
        IFileUpdateRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
