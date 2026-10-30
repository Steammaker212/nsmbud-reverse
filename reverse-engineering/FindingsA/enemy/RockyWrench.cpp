// RockyWrench.cpp -- the Rocky Wrench (マンホールプー, "manhole Pu"), profile 617.
//
// Hand-written, behaviour-equivalent renderings of the Deluxe functions at the
// addresses given. Evidence: data/findings/ledger.csv F0208-F0209. Not
// compiled. This replaces the Rocky Wrench reading of readable/enemy/
// Choropoo.cpp, which is Monty Mole (profile 611).
//
// Deluxe (Switch) v1.0.0.
//
//   actor          profile  sprite  factory      size    archive
//   Rocky Wrench     617      536   0x60342FF0  0x3260   choropoo
//   spanner          618      537   0x60148FAC  0x2ED0   choropoo
//   manhole (lid)    619       --   0x6034291C  0x17F0   choropoo
//   Monty Mole       611       51   0x6027B310  0x2470   choropoo   (other class)
//
// Sprite ids from codedx doc/spriteToProfileId.txt; all five share the
// "choropoo" archive (sInit_ProfileArchiveLists 0x60018FD0), which is why that
// archive holds the spanner, manhole and goggles.

// ---- 0x60342FF0: build --------------------------------------------------------

Actor* RockyWrench_build(const ActorBuildInfo* info)
{
    RockyWrench* self = new (0x3260) RockyWrench(info);     // Enemy::Enemy, vtable 0x60BEDBBC
    // +0x18A8 ShapedCollider (the lid the player can stand on)
    // +0x1B74 hole position, +0x1B80 hand position (Vec3s)
    // +0x1B98 = 2, +0x1BBC.. cleared, +0x1BC0 = -1
    // +0x1BD8 CollisionMgr, +0x30C0 EatData, +0x30E4 ChibiYoshiEatData
    // +0x3108 second ActiveCollider, +0x3238 ActorScaler
    return self;
}

// ---- 0x60344864: onCreate (vtable slot 5) ----------------------------------------

bool RockyWrench::onCreate()
{
    init_60344BDC();
    mScale = { 1.0f, 1.0f, 1.0f };
    mDirection = directionToPlayerX(mPosition);
    mRotation.y = Enemy_CommonRotations[mDirection];
    mStandalone = (mSettings1 >> 5) & 1;                    // +0x1BBC: no manhole
    mPosition.y += 13.0f;
    mPosition.z = -2560.0f;                                 // behind the floor, in the hole
    mHolePos = mPosition;                                   // +0x1B74
    mLidOffset = 0.0f;                                      // +0x1BA8
    mSpeed = {};
    mGravity = -0.1875f;                                    // +0x64
    mMaxSpeed.y = -4.0f;                                    // +0x88
    mEatData.type = EatType::Drink;                         // +0x30D0 = 3; actor+0x26C -> +0x30C0
    mFreeze.setFlags({ 0, 1, 1 });
    mCollider.init(&cColliderInfo_60BEDE2C);                // body
    mCollider2.init(&cColliderInfo_60AFFC08);               // +0x3108
    if (mStandalone)
        mBg.init(&cBgInfo_60AFFC34);                        // ground sensors only when standalone
    mBg2.init(nullptr, &cBgInfo_60AFFC40);                  // +0x1BD8
    mLid.init(&cShapedInfo_60C948C0);                       // +0x18A8, callback 0x60344D18
    mLidState = 2;                                          // +0x1B98
    updateLid_60344DF4();
    _1BB0 = 1;
    changeState(&StateID_60C9474C);                         // vtable +0xC0
    return true;
}

// ---- 0x60345084: onExecute (vtable slot 8) ---------------------------------------

bool RockyWrench::onExecute()
{
    if (mTimer)                                             // +0x1BC0
        mTimer--;
    mHitThisFrame = mHitNextFrame;                          // +0x1BC4 / +0x1BC5
    mHitNextFrame = false;
    mStateMgr.execute();                                    // +0x17C4
    if (mStandalone)
        return executeStandalone_6000100C();
    // The lid platform rises and falls with the Rocky Wrench.
    mLid.offsetY = mLidOffset;                              // +0x1954 / +0x1958 <- +0x1BA8
    mLid.execute();
    f32 y = mLidOffset + mLidExtra;                         // +0x1BA8 + +0x1BAC
    mColliderOffsetY = y;                                   // +0x134
    mCollider2.offsetY = y;                                 // +0x3180
    mScaler.execute();
    updateLid_60344DF4();
    cullCheck(0);
    return true;
}

// ---- 0x60345EA4: throw the spanner -------------------------------------------------

void RockyWrench::throwSpanner()
{
    ActorBuildInfo info = {};
    info.settings1 = (mDirection & 1) ^ 0x11;
    info.profile = Profile::get(618);
    info.position = mHandPos;                               // +0x1B80
    u32 id = 0;
    if (Actor* s = ActorMgr::create(&info, 0))
        if (s->isA(Spanner::typeInfo)) {
            if (!s->mOwnerId)                               // spanner +0x2E60
                s->mOwnerId = mId;
            id = s->mId;
        }
    mSpannerId = id;                                        // +0x1BCC
}

// ---- 0x603468F8: knocked out of the manhole -----------------------------------------

void RockyWrench::defeat()
{
    _1BBC = 0;
    mPosition.y += mLidOffset;
    playAnim_60345A00(7);
    mSpeed = { mSpeedFX, 4.0f, 0.0f };                      // speed.x from +0x17D8
    ActorBuildInfo info = {};
    info.profile = Profile::get(619);                       // the lid flies off
    info.position = { mHandPos.x, mHandPos.y, 5000.0f };
    Actor* lid = ActorMgr::create(&info, 0);
    mLidId = lid ? lid->mId : 0;                            // +0x1BD0
    f32 vx = mSpeed.x > 0 ? 2.0f : mSpeed.x < 0 ? -2.0f : 0.0f;
    f32 vy = mSpeed.x == 0 ? 0.5f : 1.5f;
    launch_60346400(vx, vy, 2.0f);
    ColliderMgr::instance->remove(&mLid);
    Enemy::beginState_DieFall();
    _17A8 = 2;
}
