/* sub_6068D194
 * address: 0x6068D194   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_6068D194(StateActor *a1, ActorBuildInfo *a2)
{
  sub_606CA0DC(a1, a2);
  FIELD_U32(a1, 0x0) = (int)StoneEye_vtable;
  BYTE2(a1[1]._._._.field_3C) = 0;
  LOWORD(a1[1]._._._.field_3C) = 0;
  a1[1]._._._.parent = 0;
  a1[1]._._._.field_34 = 0;
  a1[1]._._._.field_4C = 0;
  a1[1]._._._.field_48 = 0;
  a1[1]._._._.field_44 = 0;
  a1[1]._._._.field_40 = 0;
  a1[1]._._.direction = -1023410176;
  *(_DWORD *)&a1[1]._._.playerId = 0;
  a1[1]._._.field_58 = 1065353216;
  a1[1]._._.field_5C = 1065353216;
  a1[1]._._.position.z = 0.0;
  a1[1]._._.position.y = 0.0;
  a1[1]._._.position.x = 0.0;
  a1[1]._._.xAcceleration = 0.0;
  a1[1]._._.field_64 = 0.0;
  a1[1]._._.field_60 = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._.speed);
  LODWORD(a1[1]._._.speed.x) = off_60BC1450;
  ShapedCollider_ctor((ShapedCollider *)&a1[1]._._.aCollider.node3);
  a1[1]._._.field_27C = 0.0;
  a1[1]._._.field_280 = (int)&sead__SafeStringBase__vtable;
  a1[1]._.field_284 = (int)&byte_60B3BA34;
  a1[1]._.collisionMgr[16] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[12] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[8] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4] = 0;
  *(_DWORD *)a1[1]._.collisionMgr = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[20] = off_60C17640;
  memset(&a1[1]._.collisionMgr[24], 0, 36);
  *(_DWORD *)&a1[1]._.collisionMgr[60] = 1036831949;
  *(_WORD *)&a1[1]._.collisionMgr[84] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[80] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[76] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[72] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[68] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[64] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[88] = off_60C17670;
  return a1;
}
