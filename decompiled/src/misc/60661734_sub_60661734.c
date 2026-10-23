/* sub_60661734
 * address: 0x60661734   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60661734(int a1, ActorBuildInfo *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r1
  int v7; // r0

  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C14C0C;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6112));
  FIELD_U32(a1, 6112) = off_60BEE598;
  memset(a1 + 6480, 0, 128);
  ColliderNode_ctor((ColliderNode *)(a1 + 6512));
  ColliderNode_ctor((ColliderNode *)(a1 + 6544));
  ColliderNode_ctor((ColliderNode *)(a1 + 6576));
  memset(a1 + 6608, 0, 96);
  ColliderNode_ctor((ColliderNode *)(a1 + 6608));
  ColliderNode_ctor((ColliderNode *)(a1 + 6640));
  ColliderNode_ctor((ColliderNode *)(a1 + 6672));
  FIELD_U32(a1, 6508) = 0;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6500) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6488) = 0;
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6480) = 0;
  v3 = FIELD_U32(a1, 6420);
  v4 = FIELD_U32(a1, 6416);
  FIELD_U32(a1, 6540) = v3;
  FIELD_U32(a1, 6536) = v4;
  FIELD_U32(a1, 6636) = v3;
  FIELD_U32(a1, 6632) = v4;
  FIELD_U32(a1, 6572) = v3;
  FIELD_U32(a1, 6568) = v4;
  FIELD_U32(a1, 6668) = v3;
  FIELD_U32(a1, 6664) = v4;
  FIELD_U32(a1, 6604) = v3;
  FIELD_U32(a1, 6600) = v4;
  FIELD_U32(a1, 6700) = v3;
  FIELD_U32(a1, 6696) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6112), 3, a1 + 6480, a1 + 6512, a1 + 6608);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6704));
  FIELD_U32(a1, 6704) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 7072, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 7088));
  FIELD_U32(a1, 7140) = 0;
  FIELD_U32(a1, 7136) = 0;
  FIELD_U32(a1, 7132) = 0;
  FIELD_U32(a1, 7128) = 0;
  FIELD_U32(a1, 7124) = 0;
  FIELD_U32(a1, 7144) = 0;
  FIELD_U32(a1, 7148) = 0;
  FIELD_U32(a1, 7120) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 7120));
  FIELD_U32(a1, 7084) = 0;
  FIELD_U32(a1, 7080) = 0;
  FIELD_U32(a1, 7076) = 0;
  FIELD_U32(a1, 7072) = 0;
  v5 = FIELD_U32(a1, 7012);
  v6 = FIELD_U32(a1, 7008);
  FIELD_U32(a1, 7116) = v5;
  FIELD_U32(a1, 7112) = v6;
  FIELD_U32(a1, 7148) = v5;
  FIELD_U32(a1, 7144) = v6;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6704), 1, a1 + 7072, a1 + 7088, v7);
  FIELD_U32(a1, 7152) = 1065353216;
  memset((void *)(a1 + 7156), 0, 38);
  FIELD_U32(a1, 7224) = 0;
  FIELD_U32(a1, 7220) = 0;
  FIELD_U32(a1, 7216) = 0;
  FIELD_U32(a1, 7212) = 0;
  FIELD_U32(a1, 7208) = 0;
  FIELD_U32(a1, 7204) = 0;
  FIELD_U32(a1, 7200) = 0;
  FIELD_U32(a1, 7196) = 0;
  return a1;
}
