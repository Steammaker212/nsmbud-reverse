/* Actor_gurupukorekushonkoin_build
 * address: 0x605F5860   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gurupukorekushonkoin_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x18C0u);
  StarCoinBase_ctor((StarCoinBase *)v2, a1);
  *(_DWORD *)v2 = off_60C0C54C;
  LineFollower_ctor((LineFollower *)(v2 + 6188));
  FIELD_U32(v2, 6332) = 0;
  return v2;
}
