#pragma once

#include "core/types.h"

namespace sead {

class Heap;

class IDisposer
{
public:
    IDisposer();
    virtual ~IDisposer();

private:
    Heap* containingHeap;
    u32 _8;
    u32 _C;


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    IDisposer(void*, u32);  // 0x008f5bac C1/C2
};

}
