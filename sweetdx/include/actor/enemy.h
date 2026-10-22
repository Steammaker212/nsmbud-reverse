#pragma once

#include "multistateactor.h"

class EnemyFreezeMgr;

// An enemy. freezeMgr sits at +0x1808 (confirmed).
//
// A note on the size: one reference records sizeof(Enemy) == 0x189A, which is
// not a multiple of 4. With 4-byte alignment our layout rounds to 0x189C. The
// two agree on where a derived class starts (0x189C is past the end either way),
// so members we add at 0x189C and beyond are correct regardless.
class Enemy : public MultiStateActor
{
public:
    Enemy(const ActorBuildInfo* buildInfo);
    virtual ~Enemy();

    virtual void freeze();

    u8 _17D8[0x1808 - 0x17D8];   // +0x17D8..0x1808  unmapped
    EnemyFreezeMgr* freezeMgr;   // +0x1808  confirmed
    u8 _180C[0x189A - 0x180C];   // +0x180C..0x189A  unmapped tail
};
