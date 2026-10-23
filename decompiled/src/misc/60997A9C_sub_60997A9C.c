/* sub_60997A9C
 * address: 0x60997A9C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60997A9C(_DWORD *a1)
{
  int v2; // r0

  *a1 = off_60C608A4;
  v2 = a1[1];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    a1[1] = 0;
  }
  sub_609175E4((int)(a1 + 34));
  j_nullsub_280((int)(a1 + 2));
  operator_delete(a1);
}
