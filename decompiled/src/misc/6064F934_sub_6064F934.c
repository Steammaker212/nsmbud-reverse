/* sub_6064F934
 * address: 0x6064F934   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064F934(int a1, ActorBuildInfo *a2)
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
  *(_DWORD *)a1 = off_60C13EE0;
  FIELD_U32(a1, 7252) = 0;
  FIELD_U32(a1, 7256) = 0;
  FIELD_U32(a1, 7260) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7264));
  FIELD_U32(a1, 7264) = off_60BC1450;
  FIELD_U32(a1, 7368) = 0;
  FIELD_U32(a1, 7372) = 0;
  FIELD_U32(a1, 7376) = 0;
  LineFollower_ctor((LineFollower *)(a1 + 7380));
  FIELD_U32(a1, 7524) = 0;
  FIELD_U32(a1, 7528) = 0;
  FIELD_U16(a1, 7532) = 0;
  FIELD_U32(a1, 7576) = 0;
  FIELD_U8(a1, 7548) = 0;
  FIELD_U32(a1, 7544) = 0;
  FIELD_U32(a1, 7540) = 0;
  FIELD_U32(a1, 7536) = 0;
  FIELD_U8(a1, 7572) = 0;
  FIELD_U32(a1, 7568) = 0;
  FIELD_U32(a1, 7564) = 0;
  FIELD_U32(a1, 7560) = 0;
  FIELD_U32(a1, 7556) = 0;
  FIELD_U32(a1, 7552) = 0;
  return a1;
}
