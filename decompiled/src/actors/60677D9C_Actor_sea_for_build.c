/* Actor_sea_for_build
 * address: 0x60677D9C   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_sea_for_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1800u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C16250;
  LightMask__ctor((RevealMaskRelated *)(v2 + 6104));
  return v2;
}
