#pragma once

// Actor profile ids for NSMBU Deluxe v1.0.0.
//
// The retail game has 914 profiles (0..913). Anything at 914 or above is a
// CUSTOM profile added by mod code, which is what the Profile reimplementation
// in profile.h arranges.
namespace ProfileId
{

enum ProfileIdType
{
    // ---- generic flag actors ------------------------------------------
    FlagSwitchTag = 0,
    FlagSwitchAND,
    FlagSwitchOR,
    FlagSwitchRandom,

    // ---- power-up projectiles -----------------------------------------
    // Verified against doc/profiles.csv: 474 Ice ball, 475 "Ice ice ball for
    // packon" (Piranha Plant), 476 Player fireball, 477 Fireball Packon,
    // 478 Yoshi's Flame.
    PlayerIceBall = 474,        // Ice ball thrown by a player
    PlantIceBall,               // 475  Piranha Plant's ice ball
    PlayerFireBall,             // 476  the slot the Hammer reuses
    PlantFireBall,              // 477
    YoshiFlame,                 // 478

    // ---- enemies -------------------------------------------------------
    Goomba = 467,
    KoopaTroopa = 512,
    BobOmb = 521,

    // ---- Cheep Cheep family (exactly 530..547) ------------------------
    //
    // Verified against doc/profiles.csv and the Cheep Cheep ctor table.
    // NOTE: 887 is NOT part of this family -- it is the Toad explainer NPC
    //       (説明キノピオ). An earlier revision of this project wrongly
    //       grouped 887 here; see docs/CODEX_REFERENCE.md.
    Pukupuku = 530,             // プクプク          plain Cheep Cheep
    PukupukuGroup,              // 531               group spawner
    PukupukuMiddle,             // 532  中           middle-size
    PukupukuGroupMiddle,        // 533               group, middle
    PukupukuSearch,             // 534  サーチ       search variant
    PukupukuSearchMiddle,       // 535               search, middle
    PukupukuNige,               // 536  にげ         fleeing
    PukupukuNigeMiddle,         // 537               fleeing, middle
    PukupukuMecha,              // 538  メカ         mechanical
    PukupukuToge,               // 539  トゲプク     spiny Cheep Cheep
    PukupukuJumping,            // 540  飛び         jumping
    PukupukuJumpingMecha,       // 541  飛びメカ     flying mechanical
    PukupukuSpawnA,             // 542               spawning variants
    PukupukuSpawnB,             // 543
    PukupukuSpawnC,             // 544
    PukupukuSpawnD,             // 545
    PukupukuSpawnE,             // 546
    PukupukuFormation,          // 547               formation leader

    // ---- named single enemies -----------------------------------------
    Mechakoopa = 528,
    SumoBrosLightning = 669,

    // ---- the Hammer projectile (base-game profile, reused by Approach B) --
    Hammer = 759,

    // ---- Toad explainer NPC (NOT a Cheep Cheep) ------------------------
    ExplanationKinopio = 887,

    // ---- custom profiles start at 914 -----------------------------------
    //
    // These are additions, not retail ids. The first two are confirmed working
    // in-game (the Fake Star Coin replaces a star coin and collects correctly;
    // Mr. Sun behaves as the Angry Sun enemy). The rest follow the same pattern
    // and are kept so existing sources compile against this tree.
    FakeStarCoin = 914,
    MrSun,              // 915  Angry Sun / Mad Moon
    MrMoon,             // 916
    ActorSpawner,       // 917
    ModelTest,          // 918
    LightActor,         // 919
    BombBros,           // 920
    EffectSpawner,      // 921
    MagicLift,          // 922
    KoopaShellBros,     // 923

    Num                 // 924 -- one past the last valid custom id
};

}; // namespace ProfileId
