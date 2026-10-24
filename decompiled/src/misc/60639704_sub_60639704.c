/* sub_60639704
 * address: 0x60639704   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_60639704(StateActor *a1, ActorBuildInfo *a2)
{
  int v3; // r2
  int v4; // r1
  int v5; // r0

  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C12C18;
  sead_IDisposer_ctor((sead_IDisposer *)&a1[1]);
  a1[1]._._._.vtable = (int)off_60BC6E38;
  *(_DWORD *)&a1[1]._._._.field_10 = 0;
  a1[1]._._._.settings1 = 0;
  sub_6063044C((int)&a1[1]._._._.settigns2);
  FIELD_U32(a1 + (1) * 6100, 0x2C) = 0;
  a1[1]._._._.field_30 = 0;
  a1[1]._._._.field_34 = 0;
  a1[1]._._._.parent = 0;
  a1[1]._._._.field_3C = 0;
  a1[1]._._._.field_40 = 0;
  a1[1]._._._.field_44 = 0;
  a1[1]._._._.field_48 = 0;
  a1[1]._._._.field_4C = 0;
  a1[1]._._.direction = 0;
  *(_DWORD *)&a1[1]._._.playerId = 0;
  a1[1]._._.field_58 = 0;
  a1[1]._._.position.y = 0.0;
  FIELD_F32(a1 + (1) * 6100, 0x6C) = 0.0;
  a1[1]._._.xAcceleration = 0.0;
  a1[1]._._.field_64 = 0.0;
  a1[1]._._.field_60 = 0;
  a1[1]._._.field_5C = 0;
  sead_IDisposer_ctor((sead_IDisposer *)&a1[1]._._.position.z);
  LODWORD(a1[1]._._.position.z) = off_60BC6E38;
  a1[1]._._.maxSpeed.x = 0.0;
  a1[1]._._.maxSpeed.y = 0.0;
  sub_6063044C((int)&a1[1]._._.maxSpeed.z);
  a1[1]._._.rotation.y = 0;
  a1[1]._._.rotation.z = 0;
  a1[1]._._.field_A8 = 0;
  a1[1]._._.field_AC = 0;
  a1[1]._._.field_B0 = 0;
  a1[1]._._.field_B4 = 0;
  a1[1]._._.field_B8 = 0;
  a1[1]._._.aCollider._.vtable = 0;
  a1[1]._._.aCollider._.containingHeap = 0;
  a1[1]._._.aCollider._.field_8 = 0;
  a1[1]._._.aCollider._.field_C = 0;
  a1[1]._._.aCollider.activeNode.owner = 0;
  a1[1]._._.aCollider.node3.owner = 0;
  a1[1]._._.aCollider.createNode.prev = 0;
  a1[1]._._.aCollider.createNode.next = 0;
  a1[1]._._.aCollider.createNode.owner = 0;
  a1[1]._._.aCollider.activeNode.prev = 0;
  a1[1]._._.aCollider.activeNode.next = 0;
  sead_IDisposer_ctor((sead_IDisposer *)&a1[1]._._.aCollider.node3.next);
  a1[1]._._.aCollider.node3.next = (ActiveColliderNode *)off_60BC6E38;
  a1[1]._._.aCollider.node4.prev = 0;
  a1[1]._._.aCollider.owner = 0;
  sub_6063044C((int)&a1[1]._._.aCollider.field_44);
  a1[1]._._.aCollider.field_58 = 0;
  a1[1]._._.aCollider.field_5C = 0;
  a1[1]._._.aCollider.field_60 = 0;
  a1[1]._._.aCollider.field_64 = 0;
  a1[1]._._.aCollider.field_68 = 0;
  *(_DWORD *)&a1[1]._._.aCollider.field_6C = 0;
  a1[1]._._.aCollider.field_70 = 0;
  a1[1]._._.aCollider.info.distToCenter.x = 0.0;
  a1[1]._._.aCollider.info.distToCenter.y = 0.0;
  a1[1]._._.aCollider.info.distToEdge.x = 0.0;
  a1[1]._._.aCollider.info.distToEdge.y = 0.0;
  a1[1]._._.aCollider.info.field_10 = 0;
  a1[1]._._.aCollider.info.callback = 0;
  a1[1]._._.aCollider.info.field_24 = 0;
  a1[1]._._.aCollider.info.mask = 0;
  a1[1]._._.aCollider.info.field_1C = 0;
  a1[1]._._.aCollider.info.category = 0;
  a1[1]._._.aCollider.info.field_14 = 0;
  sead_IDisposer_ctor((sead_IDisposer *)&a1[1]._._.aCollider.trapezoidOffsetTopLeft);
  LODWORD(a1[1]._._.aCollider.trapezoidOffsetTopLeft) = off_60BC6E38;
  FIELD_U32(a1 + (1) * 6100, 0x16C) = 0;
  a1[1]._._.aCollider.field_B4 = 0;
  sub_6063044C((int)&a1[1]._._.aCollider.field_B8);
  a1[1]._._.aCollider.field_CC = 0;
  a1[1]._._.aCollider.field_D0 = 0;
  a1[1]._._.aCollider.field_D4 = 0;
  a1[1]._._.aCollider.field_D8 = 0;
  a1[1]._._.aCollider.field_DC = 0;
  a1[1]._._.aCollider.field_E0 = 0;
  a1[1]._._.aCollider.field_E4 = 0;
  a1[1]._._.aCollider.field_E8 = 0;
  a1[1]._._.aCollider.field_EC = 0;
  a1[1]._._.aCollider.field_F0 = 0;
  a1[1]._._.aCollider.field_F4 = 0;
  a1[1]._._.aCollider.field_F8 = 0;
  a1[1]._._.aCollider.field_110 = 0;
  a1[1]._._.aCollider.field_10C = 0;
  a1[1]._._.aCollider.field_108 = 0;
  a1[1]._._.aCollider.field_104 = 0;
  a1[1]._._.aCollider.field_100 = 0;
  a1[1]._._.aCollider.field_FC = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._.aCollider.field_118);
  a1[1]._._.aCollider.field_118 = (int)SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._.collisionMgr[188], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[204]);
  *(_DWORD *)&a1[1]._.collisionMgr[256] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[252] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[248] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[244] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[240] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[260] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[264] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[236] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[236]);
  *(_DWORD *)&a1[1]._.collisionMgr[200] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[196] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[192] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[188] = 0;
  v3 = *(_DWORD *)&a1[1]._.collisionMgr[124];
  v4 = *(_DWORD *)&a1[1]._.collisionMgr[128];
  *(_DWORD *)&a1[1]._.collisionMgr[232] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[228] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[264] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[260] = v3;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._.aCollider.field_118,
    1,
    (int)&a1[1]._.collisionMgr[188],
    (int)&a1[1]._.collisionMgr[204],
    v5);
  a1[1]._.collisionMgr[276] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[272] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[268] = 0;
  a1[1]._.collisionMgr[277] = 1;
  a1[1]._.collisionMgr[278] = 0;
  return a1;
}
