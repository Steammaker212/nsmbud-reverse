// Pukupuku.cpp -- readable reconstruction of the Cheep Cheep (profiles 530-538).
//
// Hand-written, behaviour-equivalent renderings of the game functions at the
// addresses given, using framework/game/include/game/pukupuku.h. Evidence:
// data/findings/ledger.csv F0034-F0042. Documents the game; not compiled.
//
// Deluxe (Switch) v1.0.0.

#include "game/pukupuku.h"

// 0x60370B50 (Actor_gurupupukupuku_mid_build): the one build function for 530-538.
Actor* Pukupuku::build(const ActorBuildInfo* buildInfo)
{
    return new Pukupuku(buildInfo);                     // operator new(0x2F30)
}

// 0x60371098
Pukupuku::Pukupuku(const ActorBuildInfo* buildInfo) : Enemy(buildInfo)   // sub_603728E8
{
    u32 id = buildInfo->profile ? buildInfo->profile->id : 0;

    isBig   = id == 532 || id == 533 || id == 535 || id == 537 || id == 538;
    isMecha = id == 538;
    _2EBC   = 0;
    facing  = 0;
    // effect: EffectWrapper constructed in place.

    u32 type = buildInfo->settings1 & 0xF;
    switch (id) {
    case 530: case 531: case 532: case 533:             // plain and group
        mode = (type <= 10 && ((1u << type) & 0x609)) ? (PukupukuMode)type : PukupukuMode::Normal;
        break;
    case 538:                                           // Mecha: the raw nybble
        mode = (PukupukuMode)type;
        break;
    case 534: case 535:
        mode = PukupukuMode::Search;
        break;
    case 536: case 537:
        mode = PukupukuMode::Flee;
        break;
    default:
        mode = PukupukuMode::Normal;
        break;
    }
}

// 0x6037131C (vtable +0x14)
u32 Pukupuku::onCreate()
{
    createModel();                                      // loc_60371580, below

    _1F4 = (settings1 & 0x10000000) ? cTable_60371564[0] : cTable_60371564[1];
    _1F8 = 64.0f;                                       // 0x42800000 (high half 17024)
    _1FC = _200 = 32.0f;

    aCollider.init(this, colliderInfo(), &_2DEC);       // sub_60373ABC
    if (isBig) {
        aCollider.info.distToEdge = Vec2(10.0f, 10.0f); // +0x138/+0x13C
    }
    ActiveColliderMgr::instance->add(&aCollider);

    const CollisionMgr::Sensor* sensors = isBig ? cBigSensors /* 0x60B004AC */ : bodySensors();
    collisionMgr.init(this, &sensors[0], &sensors[1], &sensors[2]);
    if (isBig) {
        _2DF4 = 2;
        scale = Vec3(1.5f, 1.5f, 1.5f);
    }

    // Facing. "left" is settings1 bit 31 (editor nybble 5 = 8).
    bool left = settings1 >> 31;
    u32 m = (u32)mode;
    if (settings1 & 0x100000) {                         // bit 20: just use the left bit
        direction = left;
    } else if (m <= 10 && ((1u << m) & 0x103)) {        // Normal, Search, Flee
        direction = left ? 1 : directionToPlayerH(position);
    } else if (m <= 10 && ((1u << m) & 0x600)) {        // 45° up / down: always left
        direction = 1;
    } else if (mode == PukupukuMode::TurnAround) {
        direction = left;
    }                                                   // anything else keeps its direction
    facing = direction;
    speed.x = baseSpeedX();                             // sub_603737E4

    if (mode == PukupukuMode::Normal || mode == PukupukuMode::Up45 || mode == PukupukuMode::Down45)
        changeState(&StateID_Swim);                     // 0x60C960D8
    else if (mode == PukupukuMode::Search || mode == PukupukuMode::Flee) {
        searchTimer = 0;
        changeState(&StateID_Search);                   // 0x60C960FC
    } else if (mode == PukupukuMode::TurnAround)
        changeState(&StateID_TurnAround);               // 0x60C96224
    return 1;
}

// loc_60371580 (inside onCreate; never made into a function)
void Pukupuku::createModel()
{
    // Archive names come from a table built at boot (0x60C96180):
    // "pukupuku" and "pukupuku_mecha".
    // Which entry the Mecha uses, and that the model names equal the archive
    // names, is inferred from the two getModel branches, not read directly.
    const char* archiveName = isMecha ? "pukupuku_mecha" : "pukupuku";
    ResArchive* archive = ResArchiveMgr::instance->get(archiveName);
    model = ModelWrapper::create(archive, archiveName /* model name */);   // two branches, one per model
    TextureAnimation::play(model, archive, "pukupuku");    // 0x604510E4
    model->playSkeletal("swim", true);                      // sub_6040F4B8
}

// 0x60372E6C (vtable +0x20)
u32 Pukupuku::onExecute()
{
    bool active = isActive();                           // vtable +0x274
    if (active) {
        position.x += linkOffsetX;                      // linked movement controller
        position.y += linkOffsetY;
        if (followsWaterLevel())                        // vtable +0x270
            position.y += waterSurfaceY - prevWaterSurfaceY;
    }

    if (handleSpecialStates(active))                    // sub_6037325C (also restarts "swim")
        return 1;

    model->updateAnimations();

    if (active) {
        // countdown timers at +0x2DC0 and +0x2DF0
        stateMgr.execute();                             // the current virtual state
        handleSpeed();                                  // CollisionActor::handleSpeed

        // Water: never closer than 16 units below the surface.
        prevWaterSurfaceY = waterSurfaceY;
        liquidResult = checkLiquidCollisions(&waterSurfaceY, &position, layer);  // 0x60151ED8
        if (liquidResult == 1)
            inWater = true;
        if (position.y >= waterSurfaceY - 16.0f)
            position.y = waterSurfaceY - 16.0f;

        // +0x2E08..: a spin (rotation.z += up to 0x2000000/frame) when a
        // global flag (+1361 of the object at 0x60C9CF0C) is set; unknown trigger.
    } else {
        stateMgr.execute();
    }

    if (currentState() == &Enemy::StateID_Frozen)
        scaler.reset();
    scaler.execute();                                   // ActorScaler at +0x2D88
    sub_602A33AC(this);

    if (active && !_2DF0) {                             // every 64 frames: tile interaction
        sub_6071689C(TileMgr::instance, _2DF4, 1, 0);
        _2DF0 = 64;
    }
    sub_60373544(this, active);
    if (shouldCullCheck(active))                        // vtable +0x27C
        cullCheck(0);
    return 1;
}

// 0x603719D8 (StateID_Swim execute, vtable +0x284)
void Pukupuku::executeState_Swim()
{
    nullsub_1226();
    if (mode != PukupukuMode::Normal)
        return;
    // Formation member (settings1 bits 28-29 == 11): take position.y from the
    // parent's table of heights (parent +0x17D8), slot = settings1 bits 24-27.
    if ((settings1 & 0x30000000) == 0x30000000 && parent && parent->isStageActor())
        position.y = ((f32*)parent)[1526 + ((settings1 >> 24) & 0xF)];
}
