/* sub_60922F54
 * address: 0x60922F54   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60922F54(_DWORD *a1)
{
  _DWORD *v1; // r4

  *(a1 - 7) = off_60C5D72C;
  v1 = a1 - 7;
  *a1 = off_60C5D790;
  a1[21] = &off_60C5E40C;
  a1[6] = &off_60C5E40C;
  a1[2] = &off_60C5E40C;
  nullsub_2382(a1);
  operator_delete(v1);
}
