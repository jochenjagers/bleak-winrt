// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210722.2

#pragma once
#ifndef WINRT_Windows_Foundation_Numerics_2_H
#define WINRT_Windows_Foundation_Numerics_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
    struct Rational
    {
        uint32_t Numerator;
        uint32_t Denominator;
    };
    inline bool operator==(Rational const& left, Rational const& right) noexcept
    {
        return left.Numerator == right.Numerator && left.Denominator == right.Denominator;
    }
    inline bool operator!=(Rational const& left, Rational const& right) noexcept
    {
        return !(left == right);
    }
}
#endif
