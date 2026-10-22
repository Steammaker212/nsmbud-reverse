#pragma once

#include "types.h"

// The subset of Nintendo's SEAD library that actors actually touch.
namespace sead
{

class IDisposer
{
public:
    IDisposer();
    virtual ~IDisposer();

    void* _4;
    void* _8;
    u8    _C;
};

// A non-owning string view. Same 8-byte shape as SafeString.
class SafeString
{
public:
    SafeString();
    SafeString(const char* s);

    const char* cstr() const { return mStr; }

    const char* mStr;
    u32         mLength;
};

template <typename T>
class SafeStringBase : public SafeString
{
};

} // namespace sead
