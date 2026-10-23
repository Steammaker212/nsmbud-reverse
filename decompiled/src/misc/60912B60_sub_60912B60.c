/* sub_60912B60
 * address: 0x60912B60   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912B60(int a1, int a2, int a3, int a4)
{
  int v6; // [sp+4h] [bp-Ch] BYREF

  v6 = ((int (__fastcall *)(int))off_60C5CAFC[(a3 ^ 1) + 4])(a4);
  return (*(int (__fastcall **)(int, int *, int))(*(_DWORD *)a2 + 4))(a2, &v6, 4);
}
