/* Actor_rotate_control_for_korekushonkoin_build
 * address: 0x605F686C   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_control_for_korekushonkoin_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1930u);
  StarCoinBase_ctor((StarCoinBase *)v2, a1);
  *(_DWORD *)v2 = off_60C0C704;
  MovementHandler__ctor((MovementHandler *)(v2 + 6188));
  return v2;
}
