/* sub_6065E8D4
 * address: 0x6065E8D4   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_6065E8D4(StateActor *a1, ActorBuildInfo *a2)
{
  float z; // r0
  float y; // r1

  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C14A50;
  a1[1]._._._.vtable = 0;
  a1[1]._._._.profile = 0;
  memset(&a1[1]._._.scale.y, 0, 92);
  a1[1]._._.aCollider.node4.owner = (ActiveCollider *)1065353216;
  LOBYTE(a1[1]._._.aCollider.node4.next) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)&a1[1]._._.aCollider.node4.prev);
  a1[1]._._.aCollider.node4.prev = (ActiveColliderNode *)off_60BC6E38;
  a1[1]._._.aCollider.field_4C = 0;
  memset(&a1[1]._._._.field_10, 0, 132);
  a1[1]._._.aCollider.field_50 = 0;
  a1[1]._._.aCollider.field_54 = 0;
  a1[1]._._.aCollider.field_58 = 32;
  a1[1]._._.aCollider.field_5C = 0x20000;
  a1[1]._._.aCollider.field_60 = 0x8000000;
  a1[1]._._.aCollider.field_64 = 0x80000;
  a1[1]._._.aCollider.field_68 = 0x800000;
  *(_DWORD *)&a1[1]._._.aCollider.field_6C = 0x400000;
  LOBYTE(a1[1]._._.aCollider.field_70) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._.aCollider.info.distToCenter.y);
  LODWORD(a1[1]._._.aCollider.info.distToCenter.y) = off_60BEE598;
  memset(&a1[1]._.collisionMgr[28], 0, 128);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[60]);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[92]);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[124]);
  memset(&a1[1]._.collisionMgr[156], 0, 96);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[156]);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[188]);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[220]);
  *(_DWORD *)&a1[1]._.collisionMgr[56] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[52] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[48] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[44] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[40] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[36] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[32] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[28] = 0;
  z = a1[1]._._.field_260.z;
  y = a1[1]._._.field_260.y;
  *(float *)&a1[1]._.collisionMgr[88] = z;
  *(float *)&a1[1]._.collisionMgr[84] = y;
  *(float *)&a1[1]._.collisionMgr[184] = z;
  *(float *)&a1[1]._.collisionMgr[180] = y;
  *(float *)&a1[1]._.collisionMgr[120] = z;
  *(float *)&a1[1]._.collisionMgr[116] = y;
  *(float *)&a1[1]._.collisionMgr[216] = z;
  *(float *)&a1[1]._.collisionMgr[212] = y;
  *(float *)&a1[1]._.collisionMgr[152] = z;
  *(float *)&a1[1]._.collisionMgr[148] = y;
  *(float *)&a1[1]._.collisionMgr[248] = z;
  *(float *)&a1[1]._.collisionMgr[244] = y;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._.aCollider.info.distToCenter.y,
    3,
    (int)&a1[1]._.collisionMgr[28],
    (int)&a1[1]._.collisionMgr[60],
    (int)&a1[1]._.collisionMgr[156]);
  a1[1]._._._.heap = 0;
  a1[1]._._._.id = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[272] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[268] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[264] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[260] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[256] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[252] = 0;
  a1[1]._.collisionMgr[332] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[328] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[324] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[320] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[316] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[312] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[308] = 0;
  return a1;
}
