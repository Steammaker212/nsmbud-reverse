/* Actor_korekushonparent_control_R6castle_build
 * address: 0x605F5D68   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_korekushonparent_control_R6castle_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1930u);
  StarCoinBase_ctor((StarCoinBase *)v2, a1);
  *(_DWORD *)v2 = off_60C0C628;
  MovementHandler__ctor((MovementHandler *)(v2 + 6188));
  FIELD_U16(v2, 6444) = 0;
  FIELD_U32(v2, 6436) = 0;
  FIELD_U32(v2, 6440) = 0;
  return v2;
}
