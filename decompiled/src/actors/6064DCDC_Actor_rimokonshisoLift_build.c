/* Actor_rimokonshisoLift_build
 * address: 0x6064DCDC   size: 528   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rimokonshisoLift_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  int v5; // r0

  v2 = operator_new(0x1CA0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C13D34;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 6472, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 6488));
  FIELD_U32(v2, 6540) = 0;
  FIELD_U32(v2, 6536) = 0;
  FIELD_U32(v2, 6532) = 0;
  FIELD_U32(v2, 6528) = 0;
  FIELD_U32(v2, 6524) = 0;
  FIELD_U32(v2, 6544) = 0;
  FIELD_U32(v2, 6548) = 0;
  FIELD_U32(v2, 6520) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 6520));
  FIELD_U32(v2, 6484) = 0;
  FIELD_U32(v2, 6480) = 0;
  FIELD_U32(v2, 6476) = 0;
  FIELD_U32(v2, 6472) = 0;
  v3 = FIELD_U32(v2, 6412);
  v4 = FIELD_U32(v2, 6408);
  FIELD_U32(v2, 6516) = v3;
  FIELD_U32(v2, 6512) = v4;
  FIELD_U32(v2, 6548) = v3;
  FIELD_U32(v2, 6544) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6104), 1, v2 + 6472, v2 + 6488, v5);
  FIELD_U8(v2, 6552) = 0;
  FIELD_U8(v2, 6553) = 0;
  FIELD_U32(v2, 6580) = 0;
  FIELD_U16(v2, 6568) = 0;
  FIELD_U32(v2, 6564) = 0;
  FIELD_U32(v2, 6560) = 0;
  FIELD_U32(v2, 6556) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6592));
  FIELD_U32(v2, 6592) = off_60BC30D8;
  FIELD_U32(v2, 7248) = off_60C13D04;
  FIELD_U8(v2, 6585) = 0;
  FIELD_U8(v2, 6584) = 0;
  FIELD_U8(v2, 6587) = 0;
  FIELD_U8(v2, 6586) = 0;
  sub_6064D604(v2);
  *(_DWORD *)v2 = off_60C13E00;
  FIELD_U32(v2, 7264) = 0;
  FIELD_U16(v2, 7268) = 0;
  memset(v2 + 7272, 0, 47);
  FIELD_U8(v2, 7326) = 0;
  FIELD_U32(v2, 7320) = 0;
  FIELD_U16(v2, 7324) = 0;
  return v2;
}
