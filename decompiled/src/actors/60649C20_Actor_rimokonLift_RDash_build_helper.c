/* Actor_rimokonLift_RDash_build_helper
 * address: 0x60649C20   size: 652   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rimokonLift_RDash_build_helper(int a1, ActorBuildInfo *a2)
{
  int v3; // r2
  int v4; // r1
  int v5; // r0

  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C13D34;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6104));
  FIELD_U32(a1, 6104) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 6472, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 6488));
  FIELD_U32(a1, 6540) = 0;
  FIELD_U32(a1, 6536) = 0;
  FIELD_U32(a1, 6532) = 0;
  FIELD_U32(a1, 6528) = 0;
  FIELD_U32(a1, 6524) = 0;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U32(a1, 6548) = 0;
  FIELD_U32(a1, 6520) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 6520));
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6480) = 0;
  FIELD_U32(a1, 6476) = 0;
  FIELD_U32(a1, 6472) = 0;
  v3 = FIELD_U32(a1, 6412);
  v4 = FIELD_U32(a1, 6408);
  FIELD_U32(a1, 6516) = v3;
  FIELD_U32(a1, 6512) = v4;
  FIELD_U32(a1, 6548) = v3;
  FIELD_U32(a1, 6544) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6104), 1, a1 + 6472, a1 + 6488, v5);
  FIELD_U8(a1, 6552) = 0;
  FIELD_U8(a1, 6553) = 0;
  FIELD_U32(a1, 6580) = 0;
  FIELD_U16(a1, 6568) = 0;
  FIELD_U32(a1, 6564) = 0;
  FIELD_U32(a1, 6560) = 0;
  FIELD_U32(a1, 6556) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 6592));
  FIELD_U32(a1, 6592) = off_60BC30D8;
  FIELD_U32(a1, 7248) = off_60C13D04;
  FIELD_U8(a1, 6585) = 0;
  FIELD_U8(a1, 6584) = 0;
  FIELD_U8(a1, 6587) = 0;
  FIELD_U8(a1, 6586) = 0;
  sub_6064D604(a1);
  *(_DWORD *)a1 = off_60C13A2C;
  memset((void *)(a1 + 7252), 0, 36);
  FIELD_U32(a1, 7288) = 32;
  FIELD_U32(a1, 7292) = 0x20000;
  FIELD_U32(a1, 7296) = 0x8000000;
  FIELD_U32(a1, 7300) = 0x80000;
  FIELD_U32(a1, 7304) = 0x800000;
  FIELD_U32(a1, 7308) = 0x400000;
  FIELD_U8(a1, 7312) = 0;
  FIELD_U32(a1, 7348) = 0;
  FIELD_U32(a1, 7352) = 0;
  FIELD_U8(a1, 7356) = 0;
  FIELD_U16(a1, 7344) = 0;
  FIELD_U32(a1, 7340) = 0;
  FIELD_U32(a1, 7336) = 0;
  FIELD_U32(a1, 7332) = 0;
  FIELD_U32(a1, 7328) = 0;
  FIELD_U32(a1, 7324) = 0;
  FIELD_U32(a1, 7320) = 0;
  FIELD_U32(a1, 7316) = 0;
  memset((void *)(a1 + 7360), 0, 83);
  return a1;
}
