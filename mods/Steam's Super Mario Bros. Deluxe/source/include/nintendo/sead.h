#pragma once

#include "nintendo/sead/safestring.h"
#include "nintendo/sead/idisposer.h"
#include "nintendo/sead/random.h"


// TODO: Move to seperate files.

namespace sead {

class RuntimeTypeInfo
{
public:
    class Interface;
};

struct ListNode
{
    ListNode* previous;
    ListNode* next;


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    void* insertFront(void*);  // 0x008de528 [hook]
    void* erase();  // 0x008de544 [hook]
};

struct Color4f
{
    f32 r;
    f32 g;
    f32 b;
    f32 a;


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    void* setLerp(void*, void*, f32);  // 0x0090b0e4 [hook]
};

}


#define SEAD_RTTI_BASE(CLASS)                                                                       \
    public:                                                                                         \
        virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*) const;    \
        virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const;    

#define SEAD_RTTI_OVERRIDE(CLASS, BASE)                                                             \
    public:                                                                                         \
        bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*) const override;   \
        const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const override;

