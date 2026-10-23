/* Actor_underwater_efekutofiruta_RDash_build
 * address: 0x606F2DD8   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_underwater_efekutofiruta_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1820u);
  CollisionActor__ctor((CollisionActor *)v2, a1);
  *(_DWORD *)v2 = &off_60C204E0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6064));
  FIELD_U32(v2, 6064) = off_60BC1450;
  FIELD_U32(v2, 6168) = 0;
  return v2;
}
