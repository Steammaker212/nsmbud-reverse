/* sub_606AE7F4
 * address: 0x606AE7F4   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AE7F4(int a1, ActorBuildInfo *a2)
{
  int v3; // r0
  int v4; // r1

  StageActor__ctor((StageActor *)a1, a2);
  *(_DWORD *)a1 = off_60C1ACA4;
  FIELD_U32(a1, 644) = 0;
  FIELD_U32(a1, 648) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 656));
  FIELD_U32(a1, 656) = off_60BEE598;
  memset(a1 + 1024, 0, 128);
  ColliderNode_ctor((ColliderNode *)(a1 + 1056));
  ColliderNode_ctor((ColliderNode *)(a1 + 1088));
  ColliderNode_ctor((ColliderNode *)(a1 + 1120));
  memset(a1 + 1152, 0, 96);
  ColliderNode_ctor((ColliderNode *)(a1 + 1152));
  ColliderNode_ctor((ColliderNode *)(a1 + 1184));
  ColliderNode_ctor((ColliderNode *)(a1 + 1216));
  FIELD_U32(a1, 1052) = 0;
  FIELD_U32(a1, 1048) = 0;
  FIELD_U32(a1, 1044) = 0;
  FIELD_U32(a1, 1040) = 0;
  FIELD_U32(a1, 1036) = 0;
  FIELD_U32(a1, 1032) = 0;
  FIELD_U32(a1, 1028) = 0;
  FIELD_U32(a1, 1024) = 0;
  v3 = FIELD_U32(a1, 960);
  v4 = FIELD_U32(a1, 964);
  FIELD_U32(a1, 1084) = v4;
  FIELD_U32(a1, 1080) = v3;
  FIELD_U32(a1, 1180) = v4;
  FIELD_U32(a1, 1176) = v3;
  FIELD_U32(a1, 1116) = v4;
  FIELD_U32(a1, 1112) = v3;
  FIELD_U32(a1, 1212) = v4;
  FIELD_U32(a1, 1208) = v3;
  FIELD_U32(a1, 1148) = v4;
  FIELD_U32(a1, 1144) = v3;
  FIELD_U32(a1, 1240) = v3;
  FIELD_U32(a1, 1244) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 656), 3, a1 + 1024, a1 + 1056, a1 + 1152);
  FIELD_U16(a1, 1248) = 0;
  FIELD_U8(a1, 1250) = 0;
  FIELD_U32(a1, 1252) = 0;
  FIELD_U32(a1, 1256) = 0;
  FIELD_U32(a1, 1260) = 0;
  FIELD_U32(a1, 1264) = 0;
  FIELD_U32(a1, 1268) = 0;
  FIELD_U32(a1, 1272) = 0;
  return a1;
}
