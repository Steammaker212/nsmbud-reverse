/* sub_60912C24
 * address: 0x60912C24   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912C24(float a1, int a2, int a3, int a4)
{
  int v6; // [sp+4h] [bp-Ch] BYREF

  v6 = ((int (__fastcall *)(_DWORD, float))off_60C5CAFC[(a4 ^ 1) + 4])(LODWORD(a1), a1);
  return (*(int (__fastcall **)(int, int *, int))(*(_DWORD *)a3 + 4))(a3, &v6, 4);
}
