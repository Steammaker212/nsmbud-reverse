// EnemyDamage.cpp -- readable reconstruction of how an enemy decides what a hit does.
//
// Hand-written, behaviour-equivalent renderings of the Deluxe dispatchers at
// the addresses given, using framework/game/include/game/enemy.h. Each one
// matches red-pro2's Enemy::*DamageCheck case for case and mask bit for mask
// bit. Evidence: data/findings/ledger.csv F0056-F0060. Not compiled.
//
// Deluxe (Switch) v1.0.0.

#include "game/enemy.h"

static inline bool canBeHurtBy(ActiveCollider* self, Attack a)
{
    return self->info.vsDamage & (1u << (u32)a);            // collider +0x94
}

// 0x602A26B0 (Enemy::vfEC): the other actor is a player.
bool Enemy::playerDamageCheck(ActiveCollider* self, ActiveCollider* other)
{
    Attack a = (Attack)other->info.attack;                  // +0x8C

    if (a == Attack::Star) {
        if (!canBeHurtBy(self, Attack::Star)) return false;
        if (hitCallback_Star(self, other)) return true;     // +0x114
    }
    if (a == Attack::HipAttack) {
        if (!canBeHurtBy(self, Attack::HipAttack)) return false;
        Player* p = other->owner->asPlayer();               // RTTI cast
        if (sub_6075F914(p))                                // unknown player predicate
            return false;
        if (hitCallback_HipAttk(self, other)) return true;  // +0x124
    }
    if (a == Attack::Slip) {
        if (!canBeHurtBy(self, Attack::Slip)) return false;
        if (hitCallback_Slip(self, other)) return true;     // +0x118
    }
    if (a == Attack::PenguinSlip) {
        if (!canBeHurtBy(self, Attack::PenguinSlip)) return false;
        if (_1804 & 0x200) return false;                    // Enemy +0x1804
        if (hitCallback_PenguinSlide(self, other)) return true;   // +0x12C
    }
    if (a == Attack::SpinFall) {
        if (!canBeHurtBy(self, Attack::SpinFall)) return false;
        if (hitCallback_Spin(self, other)) return true;     // +0x11C
    }
    if (a == Attack::Cannon) {
        if (!canBeHurtBy(self, Attack::Cannon)) return false;
        if (hitCallback_Cannon(self, other)) return true;   // +0x130
    }
    if (a == Attack::NetPunch && canBeHurtBy(self, Attack::NetPunch))
        if (hitCallback_WireNet(self, other)) return true;  // +0x120; falls through on false
    if (a == Attack::Unk25 && canBeHurtBy(self, Attack::Unk25))
        return hitCallback_AttackUnk25(self, other);        // +0x134
    return false;
}

// 0x602A29AC (Enemy::vfF8): the other actor is Yoshi.
bool Enemy::yoshiDamageCheck(ActiveCollider* self, ActiveCollider* other)
{
    Attack a = (Attack)other->info.attack;
    if (a == Attack::Star) {
        if (!canBeHurtBy(self, Attack::Star)) return false;
        if (hitCallback_Star(self, other)) return true;     // +0x114
    } else if (a == Attack::Slip && canBeHurtBy(self, Attack::Slip)) {
        return hitCallback_Slip(self, other);               // +0x118
    }
    if (!canBeHurtBy(self, Attack::HipAttack))
        return false;
    return hitCallback_YoshiHipAttk(self, other);           // +0x128
}

// 0x602A2AB0 (Enemy::vfFC): the other actor is a baby Yoshi.
bool Enemy::chibiYoshiDamageCheck(ActiveCollider* self, ActiveCollider* other)
{
    Attack a = (Attack)other->info.attack;
    if (a == Attack::Star) {
        if (!canBeHurtBy(self, Attack::Star)) return false;
        if (hitCallback_ChibiYoshiStar(self, other)) return true;   // +0x154
    }
    if (canBeHurtBy(self, Attack::Unk24))
        if (hitCallback_ChibiYoshiUnk(self, other)) return true;    // +0x14C
    if (a == Attack::ChibiYoshiLight && canBeHurtBy(self, Attack::ChibiYoshiLight))
        return hitCallback_ChibiYoshiLight(self, other);            // +0x150
    return false;
}

// 0x602A2B8C (Enemy::vf100): projectiles and explosions (other actor generic).
bool Enemy::etcDamageCheck(ActiveCollider* self, ActiveCollider* other)
{
    Attack a = (Attack)other->info.attack;
    if (a == Attack::Shell && hitCallback_Shell(self, other))       // +0x138, no mask
        return true;
    if (a == Attack::FireBall) {
        if (!canBeHurtBy(self, Attack::FireBall)) return false;
        if (hitCallback_Fire(self, other)) return true;             // +0x13C
    }
    if (a == Attack::YoshiFire) {
        if (!canBeHurtBy(self, Attack::YoshiFire)) return false;
        if (hitCallback_YoshiFire(self, other)) return true;        // +0x148
    }
    if (a == Attack::Explode && hitCallback_Fire(self, other))      // +0x13C, no mask
        return true;
    if (a == Attack::IceBall) {
        if (!canBeHurtBy(self, Attack::IceBall)) return false;
        if (hitCallback_Ice(self, other)) return true;              // +0x140
    }
    if (a == Attack::YoshiIce && canBeHurtBy(self, Attack::YoshiIce))
        if (hitCallback_Ice(self, other)) return true;              // +0x140
    if (a == Attack::YoshiBullet && canBeHurtBy(self, Attack::YoshiBullet))
        return hitCallback_YoshiBullet(self, other);                // +0x144
    return false;
}
