/* sub_606FDDF8
 * address: 0x606FDDF8   size: 908   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606FDDF8(StateActor *a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0

  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60C2084C;
  a1[1]._._._.vtable = 0;
  memset(&a1[1]._._._.movementId, 0, 59);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._.field_5C);
  a1[1]._._.field_5C = (int)SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._._.aCollider.field_110, 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.aCollider.field_120);
  a1[1]._._.field_210 = 0.0;
  a1[1]._._.field_20C = 0.0;
  a1[1]._._.field_208 = 0.0;
  a1[1]._._.field_204 = 0.0;
  a1[1]._._.field_200 = 0;
  *(_DWORD *)&a1[1]._._.zoneId = 0;
  *(_DWORD *)&a1[1]._._.field_218 = 0;
  a1[1]._._.field_1FC = 0.0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.field_1FC);
  a1[1]._._.aCollider.field_11C = 0;
  a1[1]._._.aCollider.field_118 = 0;
  a1[1]._._.aCollider.field_114 = 0;
  a1[1]._._.aCollider.field_110 = 0;
  v3 = a1[1]._._.aCollider.field_D4;
  v4 = a1[1]._._.aCollider.field_D0;
  LODWORD(a1[1]._._.field_1F8) = v3;
  LODWORD(a1[1]._._.field_1F4) = v4;
  *(_DWORD *)&a1[1]._._.field_218 = v3;
  *(_DWORD *)&a1[1]._._.zoneId = v4;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._.field_5C,
    1,
    (int)&a1[1]._._.aCollider.field_110,
    (int)&a1[1]._._.aCollider.field_120,
    v5);
  RectCollider_ctor((RectCollider *)&a1[1]._._.eventId2);
  *(_DWORD *)&a1[1]._._.eventId2 = off_60BC30D8;
  *(_DWORD *)&a1[1]._.collisionMgr[568] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[564] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[560] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[556] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[552] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[548] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[572] = 0x40000000;
  a1[1]._.collisionMgr[576] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[604] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[600] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[596] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[592] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[588] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[584] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[580] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[608] = 0x40000000;
  a1[1]._.collisionMgr[612] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[640] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[636] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[632] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[628] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[624] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[620] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[616] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[644] = 0x40000000;
  a1[1]._.collisionMgr[648] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[676] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[672] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[668] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[664] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[660] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[656] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[652] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[680] = 0x40000000;
  a1[1]._.collisionMgr[684] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[712] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[708] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[704] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[700] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[696] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[692] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[688] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[716] = 0x40000000;
  a1[1]._.collisionMgr[720] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[748] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[744] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[740] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[736] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[732] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[728] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[724] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[752] = 0x40000000;
  a1[1]._.collisionMgr[756] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[760] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[764] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[768]);
  *(_DWORD *)&a1[1]._.collisionMgr[768] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[872]);
  *(_DWORD *)&a1[1]._.collisionMgr[872] = off_60BC1450;
  *(_DWORD *)&a1[1]._.collisionMgr[976] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[980] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[984] = 0;
  a1[1]._._._.settigns2 = 0;
  a1[1]._._._.settings1 = 0;
  *(_DWORD *)&a1[1]._._._.field_10 = 0;
  a1[1]._._._.profile = 0;
  a1[1]._._._.id = 0;
  a1[1]._._._.heap = 0;
  return a1;
}
