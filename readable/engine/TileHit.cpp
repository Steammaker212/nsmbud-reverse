// TileHit.cpp -- how a block drawn as a tile gets hit, bumped or broken.
//
// Hand-written renderings of the Deluxe functions at the addresses given.
// Evidence: data/findings/ledger.csv F0218-F0221. Not compiled. Written to
// let a mod (the Blue Shell, mods/shell_suit) break tile blocks; the last
// open question is noted at the end.
//
// Deluxe (Switch) v1.0.0.

// ---- the record a collision sensor submits -----------------------------------

struct TileHit                      // built on the stack in 0x6016107C / 0x6016118C
{
    f32           x, y;             // +0x00 sensor point (world; tile row = -y)
    u32           layer;            // +0x08
    u8            dir;              // +0x0C sensor direction (2 = head hits from below)
    u8            flag;             // +0x0D
    s8            playerNo;         // +0x0E from the manager's vtable+0x24
    u8            ownerKind;        // +0x0F actor+0x215 (1 player, 3 enemy ...)
    CollisionMgr* mgr;              // +0x10
};

// ---- 0x6016107C / 0x6016118C: sensor callbacks ---------------------------------
//
// mgr+0x9E0+8*dir holds that direction's sensor flags; mgr+0x894 is the owner.
//   0x20            -> a hit from below (only called with dir 2)
//   0x40 0x80 0x100 -> the other directions
// Each builds a TileHit at the sensor point and calls the processor below.

// ---- 0x605B9130: the processor --------------------------------------------------

bool BlockHitMgr::process(const TileHit* hit, bool* out)        // this = 0x60CB061C
{
    u16 tile = TileMgr::instance->getTile(hit->x, -hit->y);    // 0x60715E94
    int kind = tile == 50 ? 2                                   // brick
             : tile == 48 ? 1                                   // ?-block
             : tile == 49 ? 0
             : ((u16)(tile - 3) < 8 || (tile | 0x10) == 0x1D) ? 3 : 0;   // item bricks

    if (hit->mgr->sensorFlags(hit->dir) & 0x80)                // deferred variant
        return deferred_605B9974(hit), false;

    Player* by = hit->playerNo >= 0 ? PlayerMgr::get(hit->playerNo) : nullptr;

    if (kind == 2) {                                            // a plain brick breaks
        TileMgr::instance->setTile(hit->x, -hit->y, 0, 0);
        breakBlock_605B8E44(hit);                               // profile 288 + SE_OBJ_BLOCK_BREAK
        return false;
    }
    // ?-blocks and item bricks: spawn the contents and leave a used block ...
}

// ---- 0x605B8E44: the break ------------------------------------------------------
//
// Creates profile 288 ("Broken block") at the tile with settings built from the
// record (player, direction, contents), credits the player's score, and plays
// SE_OBJ_BLOCK_BREAK. BlockBase::vf178 calls it too, so a block actor breaks the
// same way. 0x605B9AD4 spawns the flying fragments.

// ---- Open -----------------------------------------------------------------------
//
// The flags a collision manager starts with come from code right after
// CollisionMgr_init (a Koopa shell's side manager gets 0x10000800 on dirs 0/1),
// and none of those set 0x20-0x100. Which code turns block hits on for a kicked
// shell -- and so which flag word and direction a shell-dashing player needs --
// is not found yet. Calling process() with a hand-built record would work in
// principle (the player's manager is at player+0x530, F0221) but the direction
// numbering for "left/right wall" must be confirmed first.
