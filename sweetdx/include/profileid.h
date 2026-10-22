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
    PlayerIceBall = 474,        // Ice ball thrown by a player
    PlayerFireBall,             // 476 -- the slot the Hammer reuses
    PlantFireBall,
    YoshiFlame,

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

    // ---- custom profiles start here ------------------------------------
    Num = 914
};

}; // namespace ProfileId
