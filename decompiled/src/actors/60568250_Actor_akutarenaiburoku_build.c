/* Actor_akutarenaiburoku_build
 * address: 0x60568250   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_akutarenaiburoku_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1A98u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C01BC8;
  RectCollider_ctor((RectCollider *)(v2 + 6112))->_._._.vtable = (int)off_60BC30D8;
  return v2;
}
