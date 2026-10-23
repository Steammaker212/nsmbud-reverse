/* Actor_floor_rotate_hole_akipipe_build
 * address: 0x6060A6C0   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_floor_rotate_hole_akipipe_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2158u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0F844;
  CircularCollider_ctor((ColliderBase *)(v2 + 6104));
  RectCollider_ctor((RectCollider *)(v2 + 6504));
  FIELD_U32(v2, 6504) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 7160));
  FIELD_U32(v2, 7160) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 7816));
  FIELD_U32(v2, 7816) = off_60BC30D8;
  FIELD_U8(v2, 8494) = 0;
  FIELD_U16(v2, 8492) = 0;
  FIELD_U32(v2, 8488) = 0;
  FIELD_U32(v2, 8484) = 0;
  FIELD_U32(v2, 8480) = 0;
  FIELD_U32(v2, 8472) = 0;
  FIELD_U32(v2, 8476) = 0;
  FIELD_U32(v2, 8516) = 0;
  FIELD_U32(v2, 8512) = 0;
  FIELD_U32(v2, 8508) = 0;
  FIELD_U32(v2, 8504) = 0;
  return v2;
}
