/* Actor_W8course_BowserJr_for_atarimove_Lift_parentchild_obuje_build
 * address: 0x60105E60   size: 572   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_W8course_BowserJr_for_atarimove_Lift_parentchild_obuje_build(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x1A80u);
  sub_606429C0(v2, a1);
  *(_DWORD *)v2 = off_60BCFCF8;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6112) = 0;
  sub_608DEB0C((_DWORD *)(v2 + 6112), 16, v2 + 6124);
  FIELD_U32(v2, 6188) = 0;
  FIELD_U32(v2, 6192) = 0;
  FIELD_U32(v2, 6196) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6200));
  FIELD_U32(v2, 6200) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 6568, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 6584));
  FIELD_U32(v2, 6636) = 0;
  FIELD_U32(v2, 6632) = 0;
  FIELD_U32(v2, 6628) = 0;
  FIELD_U32(v2, 6624) = 0;
  FIELD_U32(v2, 6620) = 0;
  FIELD_U32(v2, 6640) = 0;
  FIELD_U32(v2, 6644) = 0;
  FIELD_U32(v2, 6616) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 6616));
  FIELD_U32(v2, 6580) = 0;
  FIELD_U32(v2, 6576) = 0;
  FIELD_U32(v2, 6572) = 0;
  FIELD_U32(v2, 6568) = 0;
  v3 = FIELD_U32(v2, 6508);
  v4 = FIELD_U32(v2, 6504);
  FIELD_U32(v2, 6612) = v3;
  FIELD_U32(v2, 6608) = v4;
  FIELD_U32(v2, 6644) = v3;
  FIELD_U32(v2, 6640) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6200), 1, v2 + 6568, v2 + 6584, v5);
  FIELD_U8(v2, 6660) = 0;
  FIELD_U32(v2, 6656) = 0;
  FIELD_U32(v2, 6652) = 0;
  FIELD_U32(v2, 6648) = 0;
  FIELD_U32(v2, 6748) = 0;
  FIELD_U8(v2, 6692) = 0;
  FIELD_U32(v2, 6688) = 0;
  FIELD_U32(v2, 6684) = 0;
  FIELD_U32(v2, 6680) = 0;
  FIELD_U32(v2, 6676) = 0;
  FIELD_U32(v2, 6672) = 0;
  FIELD_U32(v2, 6668) = 0;
  FIELD_U32(v2, 6664) = 0;
  FIELD_U32(v2, 6752) = -1;
  EffectData_ctor((EffectData *)(v2 + 6696));
  FIELD_U32(v2, 6112) = 0;
  FIELD_U8(v2, 6776) = 0;
  FIELD_U32(v2, 6772) = 0;
  FIELD_U32(v2, 6768) = 0;
  FIELD_U32(v2, 6764) = 0;
  FIELD_U32(v2, 6760) = 0;
  return v2;
}
