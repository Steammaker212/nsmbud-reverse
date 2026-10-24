/* sub_6063DE54
 * address: 0x6063DE54   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall sub_6063DE54(MultiStateActor *a1, ActorBuildInfo *a2)
{
  int v3; // r0
  int v4; // r1

  MultiStateActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C13108;
  memset(&a1[1]._._._.id, 0, 172);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._.aCollider.node4);
  a1[1]._._.aCollider.node4.owner = (ActiveCollider *)off_60BEE598;
  memset(&a1[1]._._.field_260, 0, 128);
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.field_280);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[24]);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[56]);
  memset(&a1[1]._.collisionMgr[88], 0, 96);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[88]);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[120]);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[152]);
  a1[1]._._.field_27C = 0.0;
  a1[1]._._.field_278 = 0;
  a1[1]._._.field_274 = 0;
  a1[1]._._.field_270 = 0;
  a1[1]._._.field_26C = 0;
  FIELD_F32(a1 + (1) * 6104, 0x268) = 0.0;
  a1[1]._._.field_260.y = 0.0;
  a1[1]._._.field_260.x = 0.0;
  v3 = a1[1]._._.field_224;
  v4 = a1[1]._._.field_220;
  *(_DWORD *)&a1[1]._.collisionMgr[20] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[16] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[116] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[112] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[52] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[48] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[148] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[144] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[84] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[80] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[180] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[176] = v4;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._.aCollider.node4,
    3,
    (int)&a1[1]._._.field_260,
    (int)&a1[1]._._.field_280,
    (int)&a1[1]._.collisionMgr[88]);
  *(_DWORD *)&a1[1]._.collisionMgr[184] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[200] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[216] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[232] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[248] = 0;
  a1[1]._.collisionMgr[264] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[188] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[204] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[220] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[236] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[252] = 0;
  a1[1]._.collisionMgr[265] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[192] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[208] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[224] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[240] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[256] = 0;
  a1[1]._.collisionMgr[266] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[196] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[212] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[228] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[244] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[260] = 0;
  a1[1]._.collisionMgr[267] = 0;
  return a1;
}
