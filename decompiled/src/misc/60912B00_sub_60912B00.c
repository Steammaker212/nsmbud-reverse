/* sub_60912B00
 * address: 0x60912B00   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912B00(int a1, int a2, int a3, unsigned __int16 a4)
{
  __int16 v6; // [sp+6h] [bp-Ah] BYREF

  v6 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a3 ^ 1) + 2])(a4);
  return (*(int (__fastcall **)(int, __int16 *, int))(*(_DWORD *)a2 + 4))(a2, &v6, 2);
}
