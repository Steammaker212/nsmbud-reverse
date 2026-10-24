/* sub_606F4044
 * address: 0x606F4044   size: 1364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606F4044(StateActor *a1, ActorBuildInfo *a2)
{
  int v3; // r2
  int v4; // r1
  int v5; // r0

  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C20600;
  a1[1]._._._.vtable = 0;
  a1[1]._._._.id = 1137122418;
  a1[1]._._._.heap = 0;
  a1[1]._._._.profile = (Profile *)1130364928;
  FIELD_U32(a1 + (1) * 6100, 0x2C) = 0;
  LOWORD(a1[1]._._._.field_30) = 0;
  a1[1]._._._.field_34 = 0;
  LOBYTE(a1[1]._._._.childCount) = 0;
  a1[1]._._._.field_20.next = 0;
  a1[1]._._._.field_20.previous = 0;
  *(_DWORD *)&a1[1]._._._.movementId = 0;
  a1[1]._._._.settigns2 = 0;
  a1[1]._._._.settings1 = 0;
  *(_DWORD *)&a1[1]._._._.field_10 = 0;
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.direction);
  memset(&a1[1]._._.aCollider.field_C4, 0, 33);
  a1[1]._._.aCollider.field_FC = 0;
  a1[1]._._.aCollider.field_F8 = 0;
  a1[1]._._.aCollider.field_F4 = 0;
  FIELD_U32(a1 + (1) * 6100, 0x1AC) = 0;
  a1[1]._._.aCollider.field_EC = 0;
  a1[1]._._.aCollider.field_E8 = 0;
  a1[1]._._.aCollider.field_100 = 0x40000000;
  LOBYTE(a1[1]._._.aCollider.field_104) = 0;
  a1[1]._._.aCollider.field_120 = 0;
  a1[1]._._.aCollider.field_11C = 0;
  a1[1]._._.aCollider.field_118 = 0;
  a1[1]._._.aCollider.field_114 = 0;
  a1[1]._._.aCollider.field_110 = 0;
  a1[1]._._.aCollider.field_10C = 0;
  a1[1]._._.aCollider.field_108 = 0;
  a1[1]._._.aCollider.field_124 = 0x40000000;
  LOBYTE(a1[1]._._.aCollider.field_128) = 0;
  a1[1]._._.field_200 = 0;
  a1[1]._._.field_1FC = 0.0;
  a1[1]._._.field_1F8 = 0.0;
  a1[1]._._.field_1F4 = 0.0;
  a1[1]._._.field_1F0 = 0;
  FIELD_F32(a1 + (1) * 6100, 0x1EC) = 0.0;
  a1[1]._._.aCollider.field_12C = 0;
  a1[1]._._.field_204 = 2.0;
  LOBYTE(a1[1]._._.field_208) = 0;
  a1[1]._._.field_224 = 0;
  a1[1]._._.field_220 = 0;
  *(_DWORD *)&a1[1]._._.eventId2 = 0;
  *(_DWORD *)&a1[1]._._.field_218 = 0;
  *(_DWORD *)&a1[1]._._.zoneId = 0;
  a1[1]._._.field_210 = 0.0;
  a1[1]._._.field_20C = 0.0;
  *(_DWORD *)&a1[1]._._.field_228 = 0x40000000;
  LOBYTE(FIELD_U32(a1 + (1) * 6100, 0x22C)) = 0;
  a1[1]._._.field_248.x = 0.0;
  a1[1]._._.effectOffset.z = 0.0;
  a1[1]._._.effectOffset.y = 0.0;
  a1[1]._._.effectOffset.x = 0.0;
  a1[1]._._.profileFlags = 0;
  a1[1]._._.field_234 = 0;
  a1[1]._._.field_230 = 0;
  a1[1]._._.field_248.y = 2.0;
  LOBYTE(a1[1]._._.field_248.z) = 0;
  FIELD_U32(a1 + (1) * 6100, 0x26C) = 0;
  a1[1]._._.field_260.z = 0.0;
  a1[1]._._.field_260.y = 0.0;
  a1[1]._._.field_260.x = 0.0;
  a1[1]._._.field_254.z = 0.0;
  a1[1]._._.field_254.y = 0.0;
  a1[1]._._.field_254.x = 0.0;
  a1[1]._._.field_270 = 0x40000000;
  LOBYTE(a1[1]._._.field_274) = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[8] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4] = 0;
  *(_DWORD *)a1[1]._.collisionMgr = 0;
  a1[1]._.field_284 = 0;
  a1[1]._._.field_280 = 0;
  a1[1]._._.field_27C = 0.0;
  a1[1]._._.field_278 = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[12] = 0x40000000;
  a1[1]._.collisionMgr[16] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[44] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[40] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[36] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[32] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[28] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[24] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[20] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[48] = 0x40000000;
  a1[1]._.collisionMgr[52] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[80] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[76] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[72] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[68] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[64] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[60] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[56] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[84] = 0x40000000;
  a1[1]._.collisionMgr[88] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[116] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[112] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[108] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[104] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[100] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[96] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[92] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[120] = 0x40000000;
  a1[1]._.collisionMgr[124] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[128] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[132] = 0;
  a1[1]._.collisionMgr[136] = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._.collisionMgr[140]);
  *(_DWORD *)&a1[1]._.collisionMgr[140] = SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._.collisionMgr[508], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[524]);
  *(_DWORD *)&a1[1]._.collisionMgr[576] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[572] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[568] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[564] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[560] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[580] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[584] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[556] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[556]);
  *(_DWORD *)&a1[1]._.collisionMgr[520] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[516] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[512] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[508] = 0;
  v3 = *(_DWORD *)&a1[1]._.collisionMgr[444];
  v4 = *(_DWORD *)&a1[1]._.collisionMgr[448];
  *(_DWORD *)&a1[1]._.collisionMgr[552] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[548] = v3;
  *(_DWORD *)&a1[1]._.collisionMgr[584] = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[580] = v3;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._.collisionMgr[140],
    1,
    (int)&a1[1]._.collisionMgr[508],
    (int)&a1[1]._.collisionMgr[524],
    v5);
  RectCollider_ctor((RectCollider *)&a1[1]._.collisionMgr[588]);
  *(_DWORD *)&a1[1]._.collisionMgr[588] = off_60BC30D8;
  *(_DWORD *)&a1[1]._.collisionMgr[1260] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1256] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1252] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1248] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1244] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[1264]);
  *(_DWORD *)&a1[1]._.collisionMgr[1264] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[1368]);
  *(_DWORD *)&a1[1]._.collisionMgr[1368] = off_60BC1450;
  a1[1]._.collisionMgr[1472] = 0;
  a1[1]._._._.field_4C = 0;
  a1[1]._._._.field_48 = 0;
  a1[1]._._._.field_44 = 0;
  a1[1]._._._.field_40 = 0;
  a1[1]._._._.field_3C = 0;
  a1[1]._._._.parent = 0;
  return a1;
}
