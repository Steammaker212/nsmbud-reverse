/* Actor_rutokutariLift_build
 * address: 0x60643AF8   size: 348   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rutokutariLift_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x19E8u);
  sub_6064358C((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C13598;
  FIELD_U32(v2, 6112) = 0;
  sub_6063044C(v2 + 6116);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6136));
  FIELD_U32(v2, 6136) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 6504, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 6520));
  FIELD_U32(v2, 6572) = 0;
  FIELD_U32(v2, 6568) = 0;
  FIELD_U32(v2, 6564) = 0;
  FIELD_U32(v2, 6560) = 0;
  FIELD_U32(v2, 6556) = 0;
  FIELD_U32(v2, 6576) = 0;
  FIELD_U32(v2, 6580) = 0;
  FIELD_U32(v2, 6552) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 6552));
  FIELD_U32(v2, 6516) = 0;
  FIELD_U32(v2, 6512) = 0;
  FIELD_U32(v2, 6508) = 0;
  FIELD_U32(v2, 6504) = 0;
  v3 = FIELD_U32(v2, 6444);
  v4 = FIELD_U32(v2, 6440);
  FIELD_U32(v2, 6548) = v3;
  FIELD_U32(v2, 6544) = v4;
  FIELD_U32(v2, 6580) = v3;
  FIELD_U32(v2, 6576) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6136), 1, v2 + 6504, v2 + 6520, v5);
  FIELD_U32(v2, 6624) = 0;
  FIELD_U16(v2, 6628) = 0;
  return v2;
}
