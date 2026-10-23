/* sub_608AA5A8
 * address: 0x608AA5A8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608AA5A8(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C5AE48;
  v2 = a1 + 1;
  nullsub_2224(a1 + 66);
  nullsub_2222(a1 + 58);
  nullsub_2225(a1 + 40);
  sub_608B9940(a1 + 10);
  nullsub_2223(v2);
  operator_delete(a1);
}
