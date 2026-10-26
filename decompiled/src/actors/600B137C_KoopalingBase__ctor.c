/* KoopalingBase__ctor
 * address: 0x600B137C   size: 404   group: actors
 * sym: KoopalingBase::KoopalingBase(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall KoopalingBase__ctor(BossBase *a1, ActorBuildInfo *a2)
{
  BossBase__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60BC91CC;
  a1[1]._._._._._.vtable = 0;
  memset(&FIELD_U32(a1 + (1) * 7092, 0xC), 0, 72);
  *(_DWORD *)&a1[1]._._._._.playerId = 1;
  a1[1]._._._._.field_58 = 0;
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._._._.field_5C);
  a1[1]._._._._.aCollider.field_D8 = 0;
  a1[1]._._._._.aCollider.field_DC = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._._.aCollider.field_E0);
  a1[1]._._._._.aCollider.field_E0 = (int)off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._._.field_204);
  LODWORD(a1[1]._._._._.field_204) = off_60BC1450;
  memset(&a1[1]._._._._.field_26C, 0, 48);
  *(_DWORD *)&a1[1]._._._.collisionMgr[20] = 1065353216;
  a1[1]._._._.collisionMgr[24] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[28] = -1;
  *(_DWORD *)&a1[1]._._._.collisionMgr[32] = -1;
  *(_DWORD *)&a1[1]._._._.collisionMgr[60] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[56] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[52] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[48] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[44] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[40] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[36] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._.collisionMgr[64]);
  *(_DWORD *)&a1[1]._._._.collisionMgr[64] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._.collisionMgr[168]);
  *(_DWORD *)&a1[1]._._._.collisionMgr[168] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._._.collisionMgr[272]);
  *(_DWORD *)&a1[1]._._._.collisionMgr[272] = off_60BC1450;
  *(_DWORD *)&a1[1]._._._.collisionMgr[376] = 0;
  a1[1]._._._._._.field_2C = 0;
  *(Vec3 *)&a1[1]._._._._._.field_40 = FIELD_U32(a1, 0x6C);
  FIELD_U32(a1 + (1) * 7092, 0x18C) = 0;
  a1[1]._._._._.aCollider.field_D4 = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[16] = 5;
  FIELD_U32(a1, 0x1A10) = 2;
  return a1;
}
