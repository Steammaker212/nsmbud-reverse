// tsuru_controllers.cpp -- Tsuru's small level controllers (sprites 770-775): Wind Generator,
// Layer Changer, Power-up Switcher, Sound Player, Solid and Liquid Overlay.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/windgenerator.cpp,
// layerchanger.cpp, powerupswitcher.cpp, soundplayer.cpp, solid.cpp and liquidoverlay.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Differences:
//   - Wind Generator: Tsuru builds on the game's own wind actor for its strength and also
//     pushes a list of enemies (through ActorMgr's list, not mapped here). This one pushes the
//     players only, by its own strength setting.
//   - Power-up Switcher: the power-up is given with the game's own grant (0x607A27A8: queues
//     the mode, player +0x2C7C, and starts the change), Tsuru's givePowerup.
//   - Sound Player: the sound is the Deluxe sound archive item n (labels from GetItemLabel),
//     not Tsuru's Wii U sound ID.
//   - Liquid Overlay: location mode only (Tsuru's zone-wide mode is marked broken there).
//
// Events are 1-based in the editor (0 = none), as in Tsuru.

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "collision/collider.h"
#include "level/eventmgr.h"
#include "level/level.h"
#include "modbase/game/player/player.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

namespace {

// PlayerMgr::instance +0x30: the four players (game/player.h).
StageActor* player(u32 i)
{
    return PlayerMgr::instance ? ((StageActor**)((u8*)PlayerMgr::instance + 0x30))[i] : nullptr;
}

bool eventOn(u32 id) { return id && EventMgr::instance->isActive(id - 1); }

} // namespace

// 0x607A27A8(player, mode): the game's power-up grant (modes 0 small .. 8 P-Acorn).
namespace ModBase { namespace controllers { int givePowerup(void* player, u32 mode); } }

// ---- Wind Generator (770) ------------------------------------------------------------------
//   nybble 1      direction: 0 right, 1 left, 2 up, 3 down
//   nybble 2      strength 0-15 (0.1 units a frame each, +0.1)
//   nybbles 3-4   event that turns it on (0: always on)
class WindGenerator : public StageActor
{
public:
    WindGenerator(const ActorBuildInfo* b) : StageActor(b) { }
    static Actor* build(const ActorBuildInfo* b) { return new WindGenerator(b); }

    u32 onExecute() override
    {
        if (eventId1 && !eventOn(eventId1))
            return 1;
        f32 push = ((eventId2 & 0xF) + 1) * 0.1f;
        for (u32 i = 0; i < 4; i++)
            if (StageActor* p = player(i))
                switch (eventId2 >> 4 & 0xF) {
                    case 0: p->position.x += push; break;
                    case 1: p->position.x -= push; break;
                    case 2: p->position.y += push; break;
                    case 3: p->position.y -= push; break;
                }
        return 1;
    }
};
const Profile windGeneratorProfile(&WindGenerator::build, ProfileId::WindGenerator, "WindGenerator", nullptr, 0);

// ---- Layer Changer (771) -------------------------------------------------------------------
//   nybbles 3-4   event
//   nybble 5      layer: 0 layer 1, 1 layer 2, 2 layer 0
class LayerChanger : public StageActor
{
public:
    LayerChanger(const ActorBuildInfo* b) : StageActor(b), done(false) { }
    static Actor* build(const ActorBuildInfo* b) { return new LayerChanger(b); }

    u32 onExecute() override
    {
        if (!eventOn(eventId1)) {
            done = false;
        } else if (!done) {
            for (u32 i = 0; i < 4; i++)
                if (StageActor* p = player(i))
                    p->_56 = settings1 >> 28 & 0xF;     // StageActor +0x56: the layer
            done = true;
        }
        return 1;
    }
    bool done;
};
const Profile layerChangerProfile(&LayerChanger::build, ProfileId::LayerChanger, "LayerChanger", nullptr, 0);

// ---- Power-up Switcher (772) ---------------------------------------------------------------
//   nybble 1      event (1-based)
//   nybble 2      power-up: 0 small, 1 Super, 2 Fire, 3 Mini, 4 Propeller, 5 Penguin, 6 Ice,
//                 7 Acorn, 8 P-Acorn
class PowerupSwitcher : public StageActor
{
public:
    PowerupSwitcher(const ActorBuildInfo* b) : StageActor(b) { }
    static Actor* build(const ActorBuildInfo* b) { return new PowerupSwitcher(b); }

    u32 onExecute() override
    {
        if (eventOn(eventId2 >> 4 & 0xF)) {
            for (u32 i = 0; i < 4; i++)
                if (StageActor* p = player(i))
                    ModBase::controllers::givePowerup(p, eventId2 & 0xF);
            isDeleted = true;
        }
        return 1;
    }
};
const Profile powerupSwitcherProfile(&PowerupSwitcher::build, ProfileId::PowerupSwitcher, "PowerupSwitcher", nullptr, 0);

// ---- Sound Player (773) --------------------------------------------------------------------
//   nybble 4      event (1-based); the sound plays each time it turns on
//   nybbles 1-3   sound: the Deluxe sound archive item number
class SoundPlayer : public StageActor
{
public:
    SoundPlayer(const ActorBuildInfo* b) : StageActor(b), played(false) { }
    static Actor* build(const ActorBuildInfo* b) { return new SoundPlayer(b); }

    u32 onExecute() override
    {
        if (!eventOn(eventId1 & 0xF)) {
            played = false;
        } else if (!played) {
            played = true;
            u32 n = (u32)eventId2 << 4 | (eventId1 >> 4 & 0xF);
            if (SoundSystem::instance)
                if (const char* label = SoundSystem::instance->GetItemLabel(0x01000000 | n))
                    PlaySound(label, Vec2(position.x, position.y));
        }
        return 1;
    }
    bool played;
};
const Profile soundPlayerProfile(&SoundPlayer::build, ProfileId::SoundPlayer, "SoundPlayer", nullptr, 0);

// ---- Solid (774) ---------------------------------------------------------------------------
// An invisible solid box. Its corners, in units from the sprite, each 1-16 with a sign:
//   nybble 1 / 2  top-left x (2: 0 +, else -)     nybble 3 / 4  top-left y
//   nybble 5 / 6  bottom-right x                  nybble 7 / 8  bottom-right y
//   nybble 9      rotation, 11.25 degrees each
class Solid : public StageActor
{
public:
    Solid(const ActorBuildInfo* b) : StageActor(b) { }
    static Actor* build(const ActorBuildInfo* b) { return new Solid(b); }

    static f32 corner(u32 v, u32 sign) { return (f32)(v + 1) * (sign == 0 ? 1.0f : -1.0f); }

    u32 onCreate() override
    {
        info = {
            {0.0f, 0.0f}, 0.0f, 0.0f,
            {corner(eventId2 >> 4 & 0xF, eventId2 & 0xF), corner(eventId1 >> 4 & 0xF, eventId1 & 0xF)},
            {corner(settings1 >> 28 & 0xF, settings1 >> 24 & 0xF), corner(settings1 >> 20 & 0xF, settings1 >> 16 & 0xF)},
            tsuru::deg2idx((f32)(settings1 >> 12 & 0xF) * 11.25f)
        };
        collider.init(this, info);
        collider.setType(ColliderBase::TypeSolid);
        ColliderMgr::instance->add(&collider);
        return 1;
    }
    u32 onExecute() override
    {
        collider.execute();
        return 1;
    }

    ShapedCollider::Info info;
    RectCollider collider;
};
const Profile solidProfile(&Solid::build, ProfileId::Solid, "Solid", nullptr, 0);

// ---- Liquid Overlay (775) ------------------------------------------------------------------
// Inside an area location, the players are pushed (a current) or hurt every 4 seconds.
//   nybble 5      location ID
//   nybble 6      0 ice, 1 electric, 2 poison, 3 fire (hurts), 4 current left, 5 current right
class LiquidOverlay : public StageActor
{
public:
    LiquidOverlay(const ActorBuildInfo* b) : StageActor(b), found(false), timers() { }
    static Actor* build(const ActorBuildInfo* b) { return new LiquidOverlay(b); }

    u32 onCreate() override
    {
        Level::Area* area = Level::instance ? Level::instance->getArea(LevelInfo::instance->area) : nullptr;
        found = area && area->getLocation(&rect, settings1 >> 28 & 0xF);
        if (!found)
            ModBase::log("LiquidOverlay: location ", (u32)(settings1 >> 28 & 0xF), " not found");
        return 1;
    }

    u32 onExecute() override
    {
        if (!found)
            return 1;
        u32 kind = settings1 >> 24 & 0xF;
        for (u32 i = 0; i < 4; i++) {
            StageActor* p = player(i);
            if (!p)
                continue;
            bool inside = p->position.x >= rect.left && p->position.x <= rect.right
                       && p->position.y >= rect.bottom && p->position.y <= rect.top;
            if (!inside) {
                timers[i] = 0;
            } else if (kind == 4) {
                p->position.x -= 1.0f;
            } else if (kind == 5) {
                p->position.x += 1.0f;
            } else if (timers[i]++ >= 240) {
                timers[i] = 0;
                static const tsuru::DamageType cTypes[4] = {
                    tsuru::DamageType::Ice, tsuru::DamageType::Spark, tsuru::DamageType::Poison, tsuru::DamageType::Fire
                };
                tsuru::damagePlayer(p, this, cTypes[kind > 3 ? 0 : kind]);
            }
        }
        return 1;
    }

    bool found;
    Rect rect;
    u32 timers[4];
};
const Profile liquidOverlayProfile(&LiquidOverlay::build, ProfileId::LiquidOverlay, "LiquidOverlay", nullptr, 0);

// ---- Physics Modifier (778) ----------------------------------------------------------------
// Low gravity for every player while its event is on (Tsuru's AreaTask LowGravity flag).
//   nybbles 3-4   event (1-based; 0: always on)
//   nybble 5      gravity left: 0 = half (Tsuru's low gravity), else n/16
// Tsuru swaps the player's gravity tables (PlayerGravityData). On Deluxe the fall thresholds are
// compiled into the player's code (0x607716F8 and the state code around 0x60771490: tables at
// 0x60B0AE14 normal, 0x60B0B0DC mini), so instead the gravity the player just used (+0x64) is
// partly handed back to its vertical speed (+0x7C) each frame: every form and state falls at the
// same fraction, and jumps go higher, as with Tsuru's.
class PhysicsModifier : public StageActor
{
public:
    PhysicsModifier(const ActorBuildInfo* b) : StageActor(b) { }
    static Actor* build(const ActorBuildInfo* b) { return new PhysicsModifier(b); }

    u32 onExecute() override
    {
        if (eventId1 && !eventOn(eventId1))
            return 1;
        u32 n = settings1 >> 28 & 0xF;
        f32 keep = n ? n / 16.0f : 0.5f;
        for (u32 i = 0; i < 4; i++)
            if (StageActor* p = player(i)) {
                f32 gravity = *(f32*)((u8*)p + 0x64);
                if (gravity < 0.0f)
                    p->speed.y -= gravity * (1.0f - keep);
            }
        return 1;
    }
};
const Profile physicsModifierProfile(&PhysicsModifier::build, ProfileId::PhysicsModifier, "PhysicsModifier", nullptr, 0);
