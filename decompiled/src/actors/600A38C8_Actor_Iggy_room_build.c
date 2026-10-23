/* Actor_Iggy_room_build
 * address: 0x600A38C8   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Iggy_room_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0xC08u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60BC84E0;
  FIELD_U32(v2, 644) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 648));
  FIELD_U32(v2, 648) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 1016, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 1032));
  FIELD_U32(v2, 1068) = 0;
  FIELD_U32(v2, 1072) = 0;
  FIELD_U32(v2, 1076) = 0;
  FIELD_U32(v2, 1080) = 0;
  FIELD_U32(v2, 1084) = 0;
  FIELD_U32(v2, 1088) = 0;
  FIELD_U32(v2, 1092) = 0;
  FIELD_U32(v2, 1064) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 1064));
  FIELD_U32(v2, 1028) = 0;
  FIELD_U32(v2, 1024) = 0;
  FIELD_U32(v2, 1020) = 0;
  FIELD_U32(v2, 1016) = 0;
  v3 = FIELD_U32(v2, 952);
  v4 = FIELD_U32(v2, 956);
  FIELD_U32(v2, 1060) = v4;
  FIELD_U32(v2, 1056) = v3;
  FIELD_U32(v2, 1088) = v3;
  FIELD_U32(v2, 1092) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 648), 1, v2 + 1016, v2 + 1032, v5);
  sub_600A4300(v2 + 1096);
  sub_600A4300(v2 + 1752);
  sub_600A4300(v2 + 2408);
  FIELD_U8(v2, 3076) = 0;
  FIELD_U32(v2, 3064) = 0;
  FIELD_U32(v2, 3068) = 0;
  FIELD_U32(v2, 3072) = 0;
  return v2;
}
