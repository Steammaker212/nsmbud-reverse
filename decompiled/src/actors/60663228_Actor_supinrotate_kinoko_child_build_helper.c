/* Actor_supinrotate_kinoko_child_build_helper
 * address: 0x60663228   size: 784   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_supinrotate_kinoko_child_build_helper(int a1, ActorBuildInfo *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r1
  int v7; // r0

  sub_606429C0((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C14CEC;
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
  memset((void *)(a1 + 7152), 0, 93);
  FIELD_U32(a1, 7272) = 0;
  FIELD_U32(a1, 7268) = 0;
  FIELD_U32(a1, 7264) = 0;
  FIELD_U32(a1, 7260) = 0;
  FIELD_U32(a1, 7256) = 0;
  FIELD_U32(a1, 7252) = 0;
  FIELD_U32(a1, 7248) = 0;
  FIELD_U32(a1, 7336) = 0;
  FIELD_U32(a1, 7332) = 0;
  FIELD_U32(a1, 7328) = 0;
  FIELD_U32(a1, 7324) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7340));
  FIELD_U32(a1, 7644) = off_60C14DBC;
  memset((void *)(a1 + 7276), 0, 0x28u);
  return a1;
}
