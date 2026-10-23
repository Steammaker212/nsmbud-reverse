/* Actor_W8course_BowserJr_for_tarihorizontal_move_Lift_build
 * address: 0x60103CE8   size: 552   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_W8course_BowserJr_for_tarihorizontal_move_Lift_build(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x1A80u);
  sub_606429C0(v2, a1);
  *(_DWORD *)v2 = off_60BCFC0C;
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
  FIELD_U32(v2, 6572) = 0;
  FIELD_U32(v2, 6576) = 0;
  FIELD_U32(v2, 6580) = 0;
  FIELD_U32(v2, 6760) = 0;
  FIELD_U8(v2, 6568) = 0;
  FIELD_U32(v2, 6564) = 0;
  FIELD_U32(v2, 6560) = 0;
  FIELD_U32(v2, 6556) = 0;
  FIELD_U32(v2, 6552) = 0;
  FIELD_U32(v2, 6608) = 0;
  FIELD_U32(v2, 6604) = 0;
  FIELD_U32(v2, 6600) = 0;
  FIELD_U32(v2, 6596) = 0;
  FIELD_U32(v2, 6592) = 0;
  FIELD_U8(v2, 6704) = 0;
  FIELD_U32(v2, 6700) = 0;
  FIELD_U32(v2, 6696) = 0;
  FIELD_U32(v2, 6692) = 0;
  FIELD_U32(v2, 6688) = 0;
  FIELD_U32(v2, 6684) = 0;
  FIELD_U32(v2, 6764) = -1;
  EffectData_ctor((EffectData *)(v2 + 6708));
  FIELD_U32(v2, 6772) = 0;
  FIELD_U32(v2, 6776) = 0;
  FIELD_U32(v2, 6780) = 0;
  FIELD_U32(v2, 6584) = 0;
  FIELD_U32(v2, 6588) = 0;
  memset((void *)(v2 + 6612), 0, 72);
  return v2;
}
