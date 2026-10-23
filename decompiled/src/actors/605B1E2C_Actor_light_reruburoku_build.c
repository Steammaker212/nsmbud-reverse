/* Actor_light_reruburoku_build
 * address: 0x605B1E2C   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_light_reruburoku_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1A70u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C09320;
  FIELD_U32(v2, 6100) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = off_60BC30D8;
  FIELD_U32(v2, 6760) = 0;
  FIELD_U16(v2, 6764) = 0;
  FIELD_U8(v2, 6766) = 0;
  return v2;
}
