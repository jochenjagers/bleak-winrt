// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210722.2

#pragma once
#ifndef WINRT_Windows_Storage_Provider_H
#define WINRT_Windows_Storage_Provider_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210722.2"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210722.2"
#include "winrt/Windows.Storage.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>::SetUpdateInformation(winrt::Windows::Storage::IStorageFile const& file, param::hstring const& contentId, winrt::Windows::Storage::Provider::ReadActivationMode const& readMode, winrt::Windows::Storage::Provider::WriteActivationMode const& writeMode, winrt::Windows::Storage::Provider::CachedFileOptions const& options) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics)->SetUpdateInformation(*(void**)(&file), *(void**)(&contentId), static_cast<int32_t>(readMode), static_cast<int32_t>(writeMode), static_cast<uint32_t>(options)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->put_Title(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::CachedFileTarget) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UpdateTarget() const
    {
        winrt::Windows::Storage::Provider::CachedFileTarget value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UpdateTarget(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Storage::Provider::CachedFileUpdaterUI, winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->add_FileUpdateRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested_revoker consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Storage::Provider::CachedFileUpdaterUI, winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FileUpdateRequested_revoker>(this, FileUpdateRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_FileUpdateRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Storage::Provider::CachedFileUpdaterUI, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->add_UIRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested_revoker consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Storage::Provider::CachedFileUpdaterUI, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, UIRequested_revoker>(this, UIRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_UIRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::UIStatus) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIStatus() const
    {
        winrt::Windows::Storage::Provider::UIStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UIStatus(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::FileUpdateRequest) consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::UpdateRequest() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2)->get_UpdateRequest(&value));
        return winrt::Windows::Storage::Provider::FileUpdateRequest{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::FileUpdateRequestDeferral) consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2)->GetDeferral(&value));
        return winrt::Windows::Storage::Provider::FileUpdateRequestDeferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::ContentId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest)->get_ContentId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::StorageFile) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest)->get_File(&value));
        return winrt::Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::FileUpdateStatus) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status() const
    {
        winrt::Windows::Storage::Provider::FileUpdateStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status(winrt::Windows::Storage::Provider::FileUpdateStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest)->put_Status(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::FileUpdateRequestDeferral) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest)->GetDeferral(&value));
        return winrt::Windows::Storage::Provider::FileUpdateRequestDeferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::UpdateLocalFile(winrt::Windows::Storage::IStorageFile const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest)->UpdateLocalFile(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest2)->get_UserInputNeededMessage(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequest2)->put_UserInputNeededMessage(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral)->Complete());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::FileUpdateRequest) consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs)->get_Request(&value));
        return winrt::Windows::Storage::Provider::FileUpdateRequest{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics> : produce_base<D, winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        int32_t __stdcall SetUpdateInformation(void* file, void* contentId, int32_t readMode, int32_t writeMode, uint32_t options) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUpdateInformation(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contentId), *reinterpret_cast<winrt::Windows::Storage::Provider::ReadActivationMode const*>(&readMode), *reinterpret_cast<winrt::Windows::Storage::Provider::WriteActivationMode const*>(&writeMode), *reinterpret_cast<winrt::Windows::Storage::Provider::CachedFileOptions const*>(&options));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> : produce_base<D, winrt::Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateTarget(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::CachedFileTarget>(this->shim().UpdateTarget());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_FileUpdateRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FileUpdateRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Storage::Provider::CachedFileUpdaterUI, winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FileUpdateRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileUpdateRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_UIRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UIRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Storage::Provider::CachedFileUpdaterUI, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UIRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UIRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_UIStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::UIStatus>(this->shim().UIStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2> : produce_base<D, winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        int32_t __stdcall get_UpdateRequest(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::FileUpdateRequest>(this->shim().UpdateRequest());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Storage::Provider::IFileUpdateRequest> : produce_base<D, winrt::Windows::Storage::Provider::IFileUpdateRequest>
    {
        int32_t __stdcall get_ContentId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::FileUpdateStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Status(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<winrt::Windows::Storage::Provider::FileUpdateStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateLocalFile(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateLocalFile(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Storage::Provider::IFileUpdateRequest2> : produce_base<D, winrt::Windows::Storage::Provider::IFileUpdateRequest2>
    {
        int32_t __stdcall get_UserInputNeededMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserInputNeededMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UserInputNeededMessage(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserInputNeededMessage(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral> : produce_base<D, winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : produce_base<D, winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::FileUpdateRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    constexpr auto operator|(CachedFileOptions const left, CachedFileOptions const right) noexcept
    {
        return static_cast<CachedFileOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(CachedFileOptions& left, CachedFileOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(CachedFileOptions const left, CachedFileOptions const right) noexcept
    {
        return static_cast<CachedFileOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(CachedFileOptions& left, CachedFileOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(CachedFileOptions const value) noexcept
    {
        return static_cast<CachedFileOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(CachedFileOptions const left, CachedFileOptions const right) noexcept
    {
        return static_cast<CachedFileOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(CachedFileOptions& left, CachedFileOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto CachedFileUpdater::SetUpdateInformation(winrt::Windows::Storage::IStorageFile const& file, param::hstring const& contentId, winrt::Windows::Storage::Provider::ReadActivationMode const& readMode, winrt::Windows::Storage::Provider::WriteActivationMode const& writeMode, winrt::Windows::Storage::Provider::CachedFileOptions const& options)
    {
        impl::call_factory<CachedFileUpdater, ICachedFileUpdaterStatics>([&](ICachedFileUpdaterStatics const& f) { return f.SetUpdateInformation(file, contentId, readMode, writeMode, options); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdater> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdaterUI> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> : winrt::impl::hash_base {};
#endif
}
#endif
