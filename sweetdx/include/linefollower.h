#pragma once

#include "states.h"
#include "util/vec2.h"

// Moves something along a rail/line in the level. 0x90 bytes.
class LineFollower
{
public:
    void init(const Vec2& position, u8 layer,
              bool noReverseOnStop, bool reversedDirection);
    void start(bool unk);

    inline void execute() { states.execute(); }

    StateWrapper<LineFollower> states;  // +0x00
    Vec2 _24[7];                        // +0x24
    Vec2 speed;                         // +0x5C
    Vec2 position;                      // +0x64
    Vec2 lastPosition;                  // +0x6C
    Vec2 blockPosition;                 // +0x74
    Vec2 _7C;                           // +0x7C
    u32  rotation;                      // +0x84
    f32  lineSpeed;                     // +0x88
    bool noReverseOnStop;               // +0x8C
    u8   layer;                         // +0x8D
    bool reversedDirection;             // +0x8E
    u8   _8F;                           // +0x8F
};
