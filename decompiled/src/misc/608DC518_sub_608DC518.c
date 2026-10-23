/* sub_608DC518
 * address: 0x608DC518   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DC518(_DWORD *a1)
{
  int v2; // r5

  *a1 = off_60C5BC3C;
  a1[2] = off_60C5BC5C;
  v2 = (int)(a1 + 2);
  if ( sub_608A9984((int)(a1 + 2)) )
    sub_608A8404(v2);
  j_nullsub_2232(v2);
  operator_delete(a1);
}
