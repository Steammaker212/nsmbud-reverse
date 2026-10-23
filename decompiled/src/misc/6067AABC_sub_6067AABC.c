/* sub_6067AABC
 * address: 0x6067AABC   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067AABC(int a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r0

  sub_606429C0((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C1662C;
  FIELD_U32(a1, 6104) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6112));
  FIELD_U32(a1, 6112) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 6480, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 6496));
  FIELD_U32(a1, 6548) = 0;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U32(a1, 6540) = 0;
  FIELD_U32(a1, 6536) = 0;
  FIELD_U32(a1, 6532) = 0;
  FIELD_U32(a1, 6552) = 0;
  FIELD_U32(a1, 6556) = 0;
  FIELD_U32(a1, 6528) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 6528));
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6488) = 0;
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6480) = 0;
  v3 = FIELD_U32(a1, 6420);
  v4 = FIELD_U32(a1, 6416);
  FIELD_U32(a1, 6524) = v3;
  FIELD_U32(a1, 6520) = v4;
  FIELD_U32(a1, 6556) = v3;
  FIELD_U32(a1, 6552) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6112), 1, a1 + 6480, a1 + 6496, v5);
  RectCollider_ctor((RectCollider *)(a1 + 6560));
  FIELD_U32(a1, 6560) = off_60BC30D8;
  FIELD_U32(a1, 7216) = 10;
  FIELD_U8(a1, 7220) = 0;
  FIELD_U8(a1, 7221) = 0;
  FIELD_U8(a1, 7222) = 0;
  FIELD_U32(a1, 7224) = 10;
  FIELD_U8(a1, 7228) = 0;
  FIELD_U8(a1, 7229) = 0;
  FIELD_U8(a1, 7230) = 0;
  FIELD_U32(a1, 7232) = 10;
  FIELD_U8(a1, 7236) = 0;
  FIELD_U8(a1, 7237) = 0;
  FIELD_U8(a1, 7238) = 0;
  FIELD_U32(a1, 7240) = 10;
  FIELD_U8(a1, 7244) = 0;
  FIELD_U8(a1, 7245) = 0;
  FIELD_U8(a1, 7246) = 0;
  FIELD_U32(a1, 7248) = 0;
  memset((void *)(a1 + 7384), 0, 92);
  FIELD_U32(a1, 7476) = 1065353216;
  FIELD_U8(a1, 7480) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 7484));
  FIELD_U32(a1, 7484) = off_60BC6E38;
  FIELD_U32(a1, 7500) = 0;
  memset((void *)(a1 + 7252), 0, 132);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 7504));
  FIELD_U32(a1, 7504) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 7872, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 7888));
  FIELD_U32(a1, 7940) = 0;
  FIELD_U32(a1, 7936) = 0;
  FIELD_U32(a1, 7932) = 0;
  FIELD_U32(a1, 7928) = 0;
  FIELD_U32(a1, 7924) = 0;
  FIELD_U32(a1, 7944) = 0;
  FIELD_U32(a1, 7948) = 0;
  FIELD_U32(a1, 7920) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 7920));
  FIELD_U32(a1, 7884) = 0;
  FIELD_U32(a1, 7880) = 0;
  FIELD_U32(a1, 7876) = 0;
  FIELD_U32(a1, 7872) = 0;
  v6 = FIELD_U32(a1, 7812);
  v7 = FIELD_U32(a1, 7808);
  FIELD_U32(a1, 7916) = v6;
  FIELD_U32(a1, 7912) = v7;
  FIELD_U32(a1, 7948) = v6;
  FIELD_U32(a1, 7944) = v7;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 7504), 1, a1 + 7872, a1 + 7888, v8);
  LineFollower_ctor((LineFollower *)(a1 + 7952));
  FIELD_U32(a1, 8116) = 0;
  FIELD_U32(a1, 8112) = 0;
  FIELD_U32(a1, 8108) = 0;
  FIELD_U32(a1, 8104) = 0;
  FIELD_U32(a1, 8100) = 0;
  FIELD_U32(a1, 8096) = 0;
  FIELD_U32(a1, 8120) = off_60C166F8;
  FIELD_U16(a1, 8124) = 0;
  return a1;
}
