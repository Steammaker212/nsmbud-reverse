/* sub_60912504
 * address: 0x60912504   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912504(int a1, void (__fastcall ***a2)(_DWORD, int *, int), int a3)
{
  int v5; // [sp+0h] [bp-10h] BYREF
  int v6; // [sp+4h] [bp-Ch]

  v6 = 0;
  v5 = 0;
  (**a2)(a2, &v5, 8);
  return ((int (__fastcall *)(int, int))off_60C5CAFC[(a3 ^ 1) + 6])(v5, v6);
}
