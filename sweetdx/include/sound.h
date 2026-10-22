#pragma once

#include "types.h"
#include "util/vec2.h"

//
// The game's audio front end. Sound items are addressed either by numeric id or
// by name ("SE_..." labels).
//
class SoundSystem
{
public:
    static SoundSystem* instance;

    const char* GetItemLabel(u32 id);
    u32         GetItemId(const char* label);

    void* soundArchive;
};


// A sound emitter attached to an object in the world.
class SoundActor
{
public:
    u32 _7C;
    u32 _80;
    u32 _84;
    u32 _88;
};


class BasicSoundActor : public SoundActor
{
public:
    void playSound(const char* label, Vec2* screenPos, u32 unk);
};

// Two global emitters the game keeps alive for UI and ambient sound.
extern BasicSoundActor* GlobalBasicSoundActorA;
extern BasicSoundActor* GlobalBasicSoundActorB;


// Converts a world position to the screen coordinate the audio system needs.
void mapPositionToScreen(Vec2& out, const Vec2& position);

// Play a positional sound by label (e.g. "SE_OBJ_GET_COIN").
inline void PlaySound(const char* label, const Vec2& position)
{
    Vec2 screenPos;
    mapPositionToScreen(screenPos, position);
    GlobalBasicSoundActorA->playSound(label, &screenPos, 0);
}
