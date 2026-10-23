/* sub_602FE440
 * address: 0x602FE440   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FE440(_DWORD *a1)
{
  if ( a1[3497] != 1 )
    return sub_603005B0();
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C92C40);
  return 1;
}
