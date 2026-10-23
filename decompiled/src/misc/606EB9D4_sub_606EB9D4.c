/* sub_606EB9D4
 * address: 0x606EB9D4   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606EB9D4(StateActor *a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0

  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60C1FCD8;
  a1[1]._._._.vtable = 0;
  a1[1]._._._.heap = 0;
  *(_WORD *)&a1[1]._._.playerId = 0;
  a1[1]._._.field_56 = 0;
  a1[1]._._._.field_4C = 0;
  a1[1]._._._.field_48 = 0;
  a1[1]._._._.field_44 = 0;
  a1[1]._._._.field_40 = 0;
  a1[1]._._._.field_3C = 0;
  a1[1]._._._.parent = 0;
  a1[1]._._.field_58 = -1;
  a1[1]._._.scale.x = 0.0;
  a1[1]._._.scale.y = NAN;
  EffectData_ctor((EffectData *)&a1[1]._._.field_5C);
  sub_606BB7B8((int)&a1[1]._._.rotation);
  RectCollider_ctor((RectCollider *)&a1[1]._._.aCollider.field_48);
  a1[1]._._.aCollider.field_48 = (int)off_60BC30D8;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._.collisionMgr[268]);
  *(_DWORD *)&a1[1]._.collisionMgr[268] = SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._.collisionMgr[636], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[652]);
  *(_DWORD *)&a1[1]._.collisionMgr[704] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[700] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[696] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[692] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[688] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[708] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[712] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[684] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[684]);
  *(_DWORD *)&a1[1]._.collisionMgr[648] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[644] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[640] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[636] = 0;
  v3 = *(_DWORD *)&a1[1]._.collisionMgr[576];
  v4 = *(_DWORD *)&a1[1]._.collisionMgr[572];
  *(_DWORD *)&a1[1]._.collisionMgr[680] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[676] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[712] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[708] = v4;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._.collisionMgr[268],
    1,
    (int)&a1[1]._.collisionMgr[636],
    (int)&a1[1]._.collisionMgr[652],
    v5);
  *(_DWORD *)&a1[1]._.collisionMgr[716] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[720] = 0;
  a1[1]._.collisionMgr[724] = 0;
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[728]);
  *(_DWORD *)&a1[1]._.collisionMgr[1032] = &ActorScaler_vtable;
  *(_DWORD *)&a1[1]._.collisionMgr[1036] = 1065353216;
  *(_DWORD *)&a1[1]._.collisionMgr[1040] = 1065353216;
  *(_DWORD *)&a1[1]._.collisionMgr[1044] = 1065353216;
  *(_DWORD *)&a1[1]._.collisionMgr[1048] = 1065353216;
  *(_DWORD *)&a1[1]._.collisionMgr[1052] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1056] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1060] = a1;
  *(_DWORD *)&a1[1]._.collisionMgr[1064] = off_60C1FDA0;
  return a1;
}
