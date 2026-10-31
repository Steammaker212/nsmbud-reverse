// modbase/tumble_death.h -- the death the Scuttlebug showed: the enemy pops up, tumbles and
// shrinks away, then ends in the cloud.
//
//   ModBase::TumbleDeath tumble;           // a member of the enemy
//   tumble.sound = "SE_EMY_PAKKUN_DOWN";   // optional, for a retail enemy's own
//
//   tumble.begin(this);                    // from any kill, even a collision callback
//
//   u32 Foo::onExecute()
//   {
//       if (tumble.execute(this)) {        // true while dying: skip the enemy's own movement
//           tsuru::placeModel(model, this);
//           return 1;
//       }
//       ...
//   }
//
// It needs no state of its own, so it works for enemies with no state machine, and from
// Enemy's own death states (a POW): call Enemy::beginState_DieFumi for the score, then begin.
// The actor's scale drives the shrink, so the model must be placed with it.

#pragma once

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"

namespace ModBase {

constexpr u32 cTumbleFrames  = 30;
constexpr f32 cTumblePop     = 3.0f;    // speed.y when it dies
constexpr f32 cTumbleGravity = -0.2f;
constexpr f32 cTumbleFall    = -4.0f;
constexpr f32 cTumbleSpin    = 12.0f;   // degrees a frame
constexpr s32 cTumbleCloud   = 0x15B;   // Tsuru RP_Jugemu_CloudDisapp (effectid.h)

struct TumbleDeath
{
    bool active = false;
    u32 timer = 0;
    f32 cloudScale = 1.0f;
    Vec3 fullScale;
    const char* sound = "SE_EMY_DOWN";

    void begin(Enemy* enemy, f32 cloud = 1.0f)
    {
        if (active)
            return;
        active = true;
        timer = cTumbleFrames;
        cloudScale = cloud;
        fullScale = enemy->scale;
        tsuru::playSound(sound, enemy->position);

        enemy->removeActiveColliders();
        ModBase::yoshi::makeInedible(enemy);

        enemy->speed.x = 0.0f;
        enemy->speed.y = cTumblePop;
        enemy->maxSpeed.x = 0.0f;
        enemy->maxSpeed.y = cTumbleFall;
        tsuru::gravity(enemy) = cTumbleGravity;
    }

    bool execute(Enemy* enemy)
    {
        if (!active)
            return false;

        enemy->rotation.x += tsuru::deg2idx(cTumbleSpin);
        f32 size = (f32)timer / cTumbleFrames;
        enemy->scale = Vec3(fullScale.x * size, fullScale.y * size, fullScale.z * size);
        enemy->handleGravity();
        enemy->handleSpeed();

        if (timer == 0) {
            Vec3 effectPos(enemy->position.x, enemy->position.y, 4500.0f);
            Vec3 effectScale(cloudScale, cloudScale, cloudScale);
            Effect::spawn(cTumbleCloud, &effectPos, nullptr, &effectScale);
            enemy->isDeleted = true;
        } else {
            timer--;
        }
        return true;
    }
};

} // namespace ModBase
