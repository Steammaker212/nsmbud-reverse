/* sub_606897FC
 * address: 0x606897FC   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_606897FC(Enemy *a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r0

  Enemy__ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._._.vtable = (int)off_60C17140;
  memset(&a1[1], 0, 161);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._._.rotation.z);
  a1[1]._._._.rotation.z = (int)SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._._._.zoneId, 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._._._.field_224);
  a1[1]._._._.field_254.y = 0.0;
  a1[1]._._._.field_254.x = 0.0;
  a1[1]._._._.field_248.z = 0.0;
  a1[1]._._._.field_248.y = 0.0;
  a1[1]._._._.field_248.x = 0.0;
  a1[1]._._._.field_254.z = 0.0;
  a1[1]._._._.field_260.x = 0.0;
  a1[1]._._._.effectOffset.z = 0.0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._._._.effectOffset.z);
  a1[1]._._._.field_220 = 0;
  *(_DWORD *)&a1[1]._._._.eventId2 = 0;
  *(_DWORD *)&a1[1]._._._.field_218 = 0;
  *(_DWORD *)&a1[1]._._._.zoneId = 0;
  v3 = a1[1]._._._.aCollider.field_11C;
  v4 = a1[1]._._._.aCollider.field_118;
  LODWORD(a1[1]._._._.effectOffset.y) = v3;
  LODWORD(a1[1]._._._.effectOffset.x) = v4;
  LODWORD(a1[1]._._._.field_260.x) = v3;
  LODWORD(a1[1]._._._.field_254.z) = v4;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._._.rotation.z,
    1,
    (int)&a1[1]._._._.zoneId,
    (int)&a1[1]._._._.field_224,
    v5);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._._.field_260.y);
  LODWORD(a1[1]._._._.field_260.y) = SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._._.collisionMgr[332], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.collisionMgr[348]);
  *(_DWORD *)&a1[1]._._.collisionMgr[400] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[396] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[392] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[388] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[384] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[404] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[408] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[380] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.collisionMgr[380]);
  *(_DWORD *)&a1[1]._._.collisionMgr[344] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[340] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[336] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[332] = 0;
  v6 = *(_DWORD *)&a1[1]._._.collisionMgr[272];
  v7 = *(_DWORD *)&a1[1]._._.collisionMgr[268];
  *(_DWORD *)&a1[1]._._.collisionMgr[376] = v6;
  *(_DWORD *)&a1[1]._._.collisionMgr[372] = v7;
  *(_DWORD *)&a1[1]._._.collisionMgr[408] = v6;
  *(_DWORD *)&a1[1]._._.collisionMgr[404] = v7;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._._.field_260.y,
    1,
    (int)&a1[1]._._.collisionMgr[332],
    (int)&a1[1]._._.collisionMgr[348],
    v8);
  RectCollider_ctor((RectCollider *)&a1[1]._._.collisionMgr[412]);
  *(_DWORD *)&a1[1]._._.collisionMgr[412] = off_60BC30D8;
  a1[1]._._.collisionMgr[1068] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[1072] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[1076] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[1080] = off_60C173C0;
  return a1;
}
