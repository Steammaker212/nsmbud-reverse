/* Actor_reruefekutospawn_buroku_build
 * address: 0x606C0260   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_reruefekutospawn_buroku_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x18D8u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1BBF4;
  MovementHandler__ctor((MovementHandler *)(v2 + 6100));
  FIELD_U16(v2, 6356) = 0;
  FIELD_U32(v2, 6348) = 0;
  FIELD_U32(v2, 6352) = 0;
  return v2;
}
