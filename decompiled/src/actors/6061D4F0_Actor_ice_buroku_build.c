/* Actor_ice_buroku_build
 * address: 0x6061D4F0   size: 140   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ice_buroku_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1CB0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C10EA8;
  FIELD_U32(v2, 6100) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = off_60BC30D8;
  FIELD_U32(v2, 6772) = 0;
  FIELD_U32(v2, 6768) = 0;
  FIELD_U32(v2, 6760) = 0;
  FIELD_U32(v2, 6764) = 0;
  sub_602F2C84(v2 + 6776);
  return v2;
}
