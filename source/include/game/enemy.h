// game/enemy.h -- how every enemy reacts to every attack.
//
// The Enemy virtuals that decide what a hit does, mapped one for one onto the
// Wii U decomp (NSMBU-Headers enemy/Enemy.h; red-pro2 src/enemy/Enemy.cpp).
// Each dispatcher in Deluxe matches its Wii U counterpart case for case and
// mask bit for mask bit. Evidence: reverse-engineering/FindingsB/ledger.csv F0056-F0060.
//
// How a hit flows: the enemy's collider callback looks at the other actor's
// kind (Actor +0x215: player, Yoshi, enemy, generic) and calls one of the
// dispatchers below. A dispatcher reads the attacker's attack type (collider
// +0x8C), checks the enemy's damage mask (its own collider +0x94: bit N =
// "can be hurt by attack N"), then calls one hitCallback. A hitCallback that
// returns true consumed the hit.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"

// ActorCollisionCheck::Attack (same numbers on Wii U and Deluxe, F0009).
enum class Attack : u32
{
    None = 0, FireBall = 1, IceBall = 2, Star = 3, IceBreak = 4, Slip = 5,
    KoopaFire = 6, HipAttack = 7, NetPunch = 8, Shell = 9, PenguinSlip = 10,
    Spin = 11, SpinFall = 13, Explode = 14, YoshiEat = 15, YoshiMouth = 16,
    Cannon = 17, SpinLiftUp = 18, YoshiBullet = 19, YoshiFire = 20, YoshiIce = 21,
    Intermittent = 22, ChibiYoshiAwa = 23, Unk24 = 24, Unk25 = 25,
    ChibiYoshiLight = 26, Unk27 = 27,
};

// Byte offsets into an Enemy's vtable. Signature of every hitCallback and
// dispatcher: bool (Enemy* this, ActiveCollider* self, ActiveCollider* other).
namespace EnemyVt {

// Dispatchers (who calls which hitCallback, and under which mask bit).
constexpr u32 enemyDamageCheck      = 0xE8;     // other actor is an enemy: Shell
constexpr u32 playerDamageCheck     = 0xEC;     // other actor is a player
constexpr u32 enemyPreDamageCheck   = 0xF0;     // (bool* dead, self, other)
constexpr u32 hitYoshiEat           = 0xF4;
constexpr u32 yoshiDamageCheck      = 0xF8;
constexpr u32 chibiYoshiDamageCheck = 0xFC;
constexpr u32 etcDamageCheck        = 0x100;    // projectiles and explosions
constexpr u32 vsEnemyHitCheck       = 0x104;    // touched, no attack: turn around etc.
constexpr u32 vsPlayerHitCheck      = 0x108;    // touched by a player: stomp or hurt them
constexpr u32 vsYoshiHitCheck       = 0x10C;
constexpr u32 vsChibiYoshiHitCheck  = 0x110;

// Reactions. Comment: attack -> mask bit checked first (none = always).
constexpr u32 hitStar          = 0x114;  // Star 3 -> bit 3          (player, Yoshi)
constexpr u32 hitSlip          = 0x118;  // Slip 5 -> bit 5          (player, Yoshi)
constexpr u32 hitSpin          = 0x11C;  // SpinFall 13 -> bit 13
constexpr u32 hitWireNet       = 0x120;  // NetPunch 8 -> bit 8
constexpr u32 hitHipAttack     = 0x124;  // HipAttack 7 -> bit 7 (rejected if sub_6075F914(player))
constexpr u32 hitYoshiHipAttack= 0x128;  // Yoshi ground pound -> bit 7
constexpr u32 hitPenguinSlide  = 0x12C;  // PenguinSlip 10 -> bit 10 (ignored if Enemy+0x1804 & 0x200)
constexpr u32 hitCannon        = 0x130;  // Cannon 17 -> bit 17
constexpr u32 hitAttackUnk25   = 0x134;  // 25 -> bit 25 (Wii U: "player slip 2")
constexpr u32 hitShell         = 0x138;  // Shell 9 -> none          (enemy, generic)
constexpr u32 hitFire          = 0x13C;  // FireBall 1 -> bit 1; Explode 14 -> none
constexpr u32 hitIce           = 0x140;  // IceBall 2 -> bit 2; YoshiIce 21 -> bit 21
constexpr u32 hitYoshiBullet   = 0x144;  // YoshiBullet 19 -> bit 19
constexpr u32 hitYoshiFire     = 0x148;  // YoshiFire 20 -> bit 20
constexpr u32 hitChibiYoshiUnk = 0x14C;  // 24 -> bit 24             (baby Yoshi)
constexpr u32 hitChibiYoshiLight = 0x150;// ChibiYoshiLight 26 -> bit 26
constexpr u32 hitChibiYoshiStar  = 0x154;// Star 3 from a baby Yoshi -> bit 3

} // namespace EnemyVt

// The enemy's own collider (StageActor::aCollider at +0xBC) holds the mask:
//   +0xBC + 0x94 = +0x150   vs_damage: bit N set = attack N can hurt it
// Change it per enemy to make an attack count or not, before any rule runs.
constexpr u32 cEnemyVsDamageOffset = 0xBC + 0x94;
