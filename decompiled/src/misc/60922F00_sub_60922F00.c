/* sub_60922F00
 * address: 0x60922F00   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60922F00(_DWORD *a1)
{
  *a1 = off_60C5D72C;
  a1[7] = off_60C5D790;
  a1[28] = &off_60C5E40C;
  a1[13] = &off_60C5E40C;
  a1[9] = &off_60C5E40C;
  nullsub_2382(a1 + 7);
  operator_delete(a1);
}
