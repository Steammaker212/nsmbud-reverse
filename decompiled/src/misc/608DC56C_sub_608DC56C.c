/* sub_608DC56C
 * address: 0x608DC56C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DC56C(_DWORD *a1)
{
  _DWORD *v2; // r5

  *(a1 - 2) = off_60C5BC3C;
  v2 = a1 - 2;
  *a1 = off_60C5BC5C;
  if ( sub_608A9984((int)a1) )
    sub_608A8404((int)a1);
  j_nullsub_2232((int)a1);
  operator_delete(v2);
}
