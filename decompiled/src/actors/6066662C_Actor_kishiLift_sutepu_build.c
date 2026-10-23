/* Actor_kishiLift_sutepu_build
 * address: 0x6066662C   size: 448   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kishiLift_sutepu_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x1AB0u);
  sub_606429C0((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C14F7C;
  FIELD_U32(v2, 6104) = 0;
  memset((void *)(v2 + 6240), 0, 92);
  FIELD_U32(v2, 6332) = 1065353216;
  FIELD_U8(v2, 6336) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6340));
  FIELD_U32(v2, 6340) = off_60BC6E38;
  FIELD_U32(v2, 6356) = 0;
  memset((void *)(v2 + 6108), 0, 132);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6360));
  FIELD_U32(v2, 6360) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 6728, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 6744));
  FIELD_U32(v2, 6796) = 0;
  FIELD_U32(v2, 6792) = 0;
  FIELD_U32(v2, 6788) = 0;
  FIELD_U32(v2, 6784) = 0;
  FIELD_U32(v2, 6780) = 0;
  FIELD_U32(v2, 6800) = 0;
  FIELD_U32(v2, 6804) = 0;
  FIELD_U32(v2, 6776) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 6776));
  FIELD_U32(v2, 6740) = 0;
  FIELD_U32(v2, 6736) = 0;
  FIELD_U32(v2, 6732) = 0;
  FIELD_U32(v2, 6728) = 0;
  v3 = FIELD_U32(v2, 6668);
  v4 = FIELD_U32(v2, 6664);
  FIELD_U32(v2, 6772) = v3;
  FIELD_U32(v2, 6768) = v4;
  FIELD_U32(v2, 6804) = v3;
  FIELD_U32(v2, 6800) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6360), 1, v2 + 6728, v2 + 6744, v5);
  FIELD_U8(v2, 6824) = 0;
  FIELD_U32(v2, 6820) = 0;
  FIELD_U32(v2, 6816) = 0;
  FIELD_U32(v2, 6812) = 0;
  FIELD_U32(v2, 6808) = 0;
  return v2;
}
