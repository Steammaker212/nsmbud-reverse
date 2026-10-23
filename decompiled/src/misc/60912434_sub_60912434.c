/* sub_60912434
 * address: 0x60912434   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912434(int a1, void (__fastcall ***a2)(_DWORD, unsigned __int16 *, int), int a3)
{
  unsigned __int16 v5; // [sp+6h] [bp-Ah] BYREF

  v5 = 0;
  (**a2)(a2, &v5, 2);
  return ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a3 ^ 1) + 2])(v5);
}
