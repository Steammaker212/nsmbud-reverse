/* sub_606BB010
 * address: 0x606BB010   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall sub_606BB010(MultiStateActor *a1, ActorBuildInfo *a2)
{
  int y_low; // r1
  int x_low; // r2
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r0

  MultiStateActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C1B488;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]);
  a1[1]._._._.vtable = (int)SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._._.aCollider.field_B4, 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.aCollider.field_C4);
  a1[1]._._.aCollider.field_F8 = 0;
  a1[1]._._.aCollider.field_F4 = 0;
  a1[1]._._.aCollider.field_F0 = 0;
  a1[1]._._.aCollider.field_EC = 0;
  a1[1]._._.aCollider.field_E8 = 0;
  a1[1]._._.aCollider.field_FC = 0;
  a1[1]._._.aCollider.field_100 = 0;
  a1[1]._._.aCollider.field_E4 = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.aCollider.field_E4);
  a1[1]._._.aCollider.field_C0 = 0;
  a1[1]._._.aCollider.lastCollisionOffsetX = 0.0;
  a1[1]._._.aCollider.field_B8 = 0;
  a1[1]._._.aCollider.field_B4 = 0;
  y_low = LODWORD(a1[1]._._.aCollider.info.distToCenter.y);
  x_low = LODWORD(a1[1]._._.aCollider.info.distToCenter.x);
  a1[1]._._.aCollider.field_E0 = y_low;
  a1[1]._._.aCollider.field_DC = x_low;
  a1[1]._._.aCollider.field_100 = y_low;
  a1[1]._._.aCollider.field_FC = x_low;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1],
    1,
    (int)&a1[1]._._.aCollider.field_B4,
    (int)&a1[1]._._.aCollider.field_C4,
    v5);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._.aCollider.field_104);
  a1[1]._._.aCollider.field_104 = (int)SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._.collisionMgr[168], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[184]);
  *(_DWORD *)&a1[1]._.collisionMgr[236] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[232] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[228] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[224] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[220] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[240] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[244] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[216] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[216]);
  *(_DWORD *)&a1[1]._.collisionMgr[180] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[176] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[172] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[168] = 0;
  v6 = *(_DWORD *)&a1[1]._.collisionMgr[108];
  v7 = *(_DWORD *)&a1[1]._.collisionMgr[104];
  *(_DWORD *)&a1[1]._.collisionMgr[212] = v6;
  *(_DWORD *)&a1[1]._.collisionMgr[208] = v7;
  *(_DWORD *)&a1[1]._.collisionMgr[244] = v6;
  *(_DWORD *)&a1[1]._.collisionMgr[240] = v7;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._.aCollider.field_104,
    1,
    (int)&a1[1]._.collisionMgr[168],
    (int)&a1[1]._.collisionMgr[184],
    v8);
  return a1;
}
