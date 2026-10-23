/* Actor_ki_build
 * address: 0x6059FD20   size: 376   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ki_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x1A98u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C07DA8;
  memset((void *)(v2 + 6300), 0, 35);
  FIELD_U32(v2, 6356) = 0;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6348) = 0;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6336) = 0;
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
  return v2;
}
