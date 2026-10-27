// modbase/game/nintendo/sead.h -- generated: C++ declarations for symbols/nintendo/sead.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class BufferedSafeStringBase_char
{
public:
    s32 vf8(void*);  // 0x008fdb60 [hook]
};

namespace sead {
class Base64
{
public:
    void* encode(void*, u32, s32);  // 0x0090f764 [hook]
};
}

namespace sead {
class BufferedSafeStringBase
{
public:
    s32 assureTerminationImpl() const;  // 0x008fdd9c [hook]
};
}

namespace sead {
class CalculateTask
{
public:
    CalculateTask(void*, s32);  // 0x008ebb5c C1/C2
    ~CalculateTask();  // D1/D2 0x008ebcb0, D0 0x008ebd00
    void* getCorrespondingMethodTreeMgrTypeInfo() const;  // 0x008ebd54 [hook]
    static void calc();  // 0x008ebdc8 [hook]
    s32 attachCalcImpl();  // 0x008ebdcc [hook]
    static void attachDrawImpl();  // 0x008ebe58 [hook]
    s32 detachCalcImpl();  // 0x008ebe5c [hook]
    static void detachDrawImpl();  // 0x008ebe64 [hook]
    s32 pauseCalc(s32);  // 0x008ebe68 [hook]
    static void pauseDraw();  // 0x008ebee0 [hook]
    s32 pauseCalcRec(s32);  // 0x008ebee4 [hook]
    static void pauseDrawRec();  // 0x008ebf5c [hook]
    s32 pauseCalcChild(s32);  // 0x008ebf60 [hook]
    static void pauseDrawChild();  // 0x008ebfd8 [hook]
    s32 getMethodTreeNode(u32);  // 0x008ebfdc [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x008ebff0 [hook]
    void* getRuntimeTypeInfo() const;  // 0x008ec0f0 [hook]
};
}

namespace sead {
class ControllerMgr
{
public:
    ControllerMgr(void*);  // 0x00909668 C1/C2
    ~ControllerMgr();  // D1/D2 0x0090989c, D0 0x009098d4
    void* calc();  // 0x00909820 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x00909918 [hook]
    void* getRuntimeTypeInfo() const;  // 0x00909a8c [hook]
};
}

namespace sead {
class CriticalSection
{
public:
    CriticalSection();  // 0x00907eb4 C1/C2
    ~CriticalSection();  // D1/D2 0x00907f28, D0 0x00907f58
    s32 lock();  // 0x00907f8c [hook]
    s32 unlock();  // 0x00907f9c [hook]
};
}

namespace sead {
class Decompressor
{
public:
    ~Decompressor();  // D1/D2 0x00421008, D0 0x00421174
};
}

namespace sead {
class ExpHeap
{
public:
    s32 create(s32, void*, s32, s32, s32);  // 0x008f5d44 [hook]
    s32 tryCreate(s32, void*, s32, s32, s32);  // 0x008f5d68 [hook]
};
}

namespace sead {
class FaderTaskBase
{
public:
    FaderTaskBase(void*, void*);  // 0x008ec224 C1/C2
};
}

namespace sead {
class FileDeviceMgr
{
public:
    FileDeviceMgr();  // 0x008e82dc C1/C2
    s32 createInstance();  // 0x008e8264 [hook]
};
}

namespace sead {
class Framework
{
public:
    void* initialize();  // 0x008ed684 [hook]
};
}

namespace sead {
class GameFramework
{
public:
    s32 initialize();  // 0x008eddec [hook]
};
}

namespace sead {
class GameFrameworkNx
{
public:
    s32 initialize();  // 0x008ea004 [hook]
};
}

namespace sead {
class Heap
{
public:
    Heap(s32, void*, s32, s32, s32, s32);  // 0x008f9594 C1/C2
    s32 appendDisposer(s32);  // 0x008f9998 [hook]
    s32 removeDisposer(s32);  // 0x008f99f0 [hook]
};
}

namespace sead {
class HeapMgr
{
public:
    static HeapMgr* sInstance;  // 0x00ccee90  (hammer_costume: the heap operator new(size, 0) uses)
    void* findContainHeap(s32) const;  // 0x008fa8c4 [hook]
    s32 getCurrentHeap() const;  // 0x008fac18 [hook]
    s32 setCurrentHeap(s32);  // 0x008fac4c [hook]
};
}

namespace sead {
class MethodTreeNode
{
public:
    s32 pushBackChild(void*);  // 0x008ee230 [hook]
    s32 lock();  // 0x008ee29c [hook]
    s32 attachMutexRec(s32) const;  // 0x008ee2ac [hook]
    s32 unlock();  // 0x008ee2f0 [hook]
    s32 detachAll();  // 0x008ee36c [hook]
};
}

namespace sead {
class NinJoyNpadDevice
{
public:
    NinJoyNpadDevice(s32, s32);  // 0x008e0cb8 C1/C2
    ~NinJoyNpadDevice();  // D1/D2 0x008e0ee0, D0 0x008e0f90
    u32 calc(void*);  // 0x008e100c [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x008e133c [hook]
    void* getRuntimeTypeInfo() const;  // 0x008e143c [hook]
};
}

namespace sead {
class NullFaderTask
{
public:
    NullFaderTask(s32);  // 0x008ec1e8 C1/C2
};
}

namespace sead {
class PtrArrayImpl
{
public:
    s32 allocBuffer(s32, s32, s32);  // 0x008deb28 [hook]
};
}

namespace sead {
class ResourceMgr
{
public:
    ResourceMgr();  // 0x00902484 C1/C2
    s32 OpenFileRelated(void*);  // 0x00902828 [hook]
    void* createInstance();  // 0x0090240c [hook]
};
}

namespace sead {
class SomeString
{
public:
    void* sprtintf(void*, s32, s32);  // 0x0001819c [hook]
};
}

namespace sead {
class TaskBase
{
public:
    TaskBase(void*, s32);  // 0x008ef360 C1/C2
    ~TaskBase();  // D1/D2 0x008ef434, D0 0x008ef4c8
    s32 onDestroy();  // 0x001ffbbc
    static void pauseCalcChild();  // 0x00423508 [hook]
    static void pauseDrawChild();  // 0x0042350c [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x008ed02c [hook]
    void* getRuntimeTypeInfo() const;  // 0x008ed0b0 [hook]
    static void prepare();  // 0x008ef58c [hook]
    s32 enterCommon();  // 0x008ef590 [hook]
    static void enter();  // 0x008ef5f4 [hook]
    static void exit();  // 0x008ef5f8 [hook]
    static void onEvent();  // 0x008ef5fc [hook]
    s32 doneDestroy();  // 0x008ef74c [hook]
    s32 getMethodTreeMgr() const;  // 0x008ef768 [hook]
    s32 attachMethodWithCheck();  // 0x008ef778 [hook]
};
}

namespace sead {
class TaskMgr
{
public:
    s32 destroyTaskSync(s32);  // 0x008efd84 [hook]
};
}

namespace sead {
class Thread
{
public:
    Thread(void*, void*, s32, s32, s32, u32, s32);  // 0x00908108 C1/C2
};
}

namespace sead {
class ThreadMgr
{
public:
    s32 createInstance();  // 0x00908780 [hook]
    s32 initialize(void*);  // 0x00908b14
};
}

namespace sead {
class ThreadUtil
{
public:
    s32 ConvertPrioritySeadToPlatform();  // 0x00908c28 [hook]
};
}

namespace sead {
class TreeNode
{
public:
    TreeNode();  // 0x008def80 C1/C2
    s32 detachAll();  // 0x008df2e0 [hook]
};
}
