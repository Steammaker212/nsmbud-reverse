/* sub_60912A40
 * address: 0x60912A40   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912A40(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v8; // [sp+0h] [bp-10h] BYREF

  v8 = ((__int64 (__fastcall *)(int, int))off_60C5CAFC[(a3 ^ 1) + 6])(a5, a6);
  return (*(int (__fastcall **)(int, __int64 *, int))(*(_DWORD *)a2 + 4))(a2, &v8, 8);
}
