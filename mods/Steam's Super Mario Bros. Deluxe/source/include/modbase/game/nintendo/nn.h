// modbase/game/nintendo/nn.h -- generated: C++ declarations for symbols/nintendo/nn.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class Nvn
{
public:
    s32 resolveDeviceFunctions(void*);  // 0x00836678 [hook]
};

namespace nn {
namespace atk {
class FsSoundArchive
{
public:
    FsSoundArchive();  // 0x0099bb78 C1/C2
};
}
}

namespace nn {
namespace atk {
class MemorySoundArchive
{
public:
    MemorySoundArchive();  // 0x008a8348 C1/C2
};
}
}

namespace nn {
namespace atk {
namespace detail {
class ExternalSoundPlayer
{
public:
    ExternalSoundPlayer();  // 0x008b0720 C1/C2
    s32 SetPlayableSoundCount(s32);  // 0x008b0a04 [hook]
};
}
}
}

namespace nn {
namespace atk {
namespace detail {
class SoundArchiveFile
{
public:
    class StringBlockBody
    {
    public:
        s32 GetString(s32) const;  // 0x008b1648 [hook]
    };
    class InfoBlockBody
    {
    public:
        s32 GetItemStringId(u32) const;  // 0x008b1aa0 [hook]
    };
};
}
}
}

namespace nn {
namespace atk {
namespace detail {
class SoundArchiveFileReader
{
public:
    s32 GetItemId(void*) const;  // 0x008b21b0 [hook]
    s32 GetItemLabel(u32) const;  // 0x008b21cc [hook]
};
}
}
}

namespace nn {
namespace g3d {
class AnimObj
{
public:
    ~AnimObj();  // D1/D2 0x0086ac5c
};
}
}

namespace nn {
namespace g3d {
class ResVertexShapeAnim
{
public:
    void* Initialize(void*) const;  // 0x00872508 [hook]
};
}
}

namespace nn {
namespace g3d {
class ShapeAnimObj
{
public:
    ~ShapeAnimObj();  // D0 0x0087479c
    s32 Bind(s32);  // 0x00873f04 [hook]
    void* ClearResult();  // 0x00874358 [hook]
    s32 Bind_874398(void*);  // 0x00874398 [hook]
    void* BindFast(s32);  // 0x008743a8 [hook]
    void* Calculate();  // 0x00874540 [hook]
    s32 ApplyTo(s32) const;  // 0x00874654 [hook]
};
}
}

namespace nn {
namespace g3d {
class SkeletalAnimObj
{
public:
    ~SkeletalAnimObj();  // D0 0x00879fb0
    s32 Bind(s32);  // 0x00878460 [hook]
    s32 Bind_87849C(s32);  // 0x0087849c [hook]
    s32 BindFast(s32);  // 0x008784dc [hook]
    s32 ClearResult();  // 0x00878588 [hook]
    void* Calculate();  // 0x00878630 [hook]
    s32 ApplyTo(s32) const;  // 0x00878698 [hook]
};
}
}

namespace nn {
namespace init {
void* InitializeAllocator(void*, u32);  // 0x008350c4 [hook]
}
}

namespace nn {
namespace oe {
s32 Initialize_thunk(void*);  // 0x008ebb54
}
}

namespace nn {
namespace os {
class Mutex
{
public:
    ~Mutex();  // D1/D2 0x0083c2ec
};
}
}

namespace nn {
namespace os {
s32 YieldThread_thunk(void*);  // 0x009085f4
}
}

namespace nn {
namespace ui2d {
class Layout
{
public:
    Layout();  // 0x00855c14 C1/C2
};
}
}
