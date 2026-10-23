/* Icon_s_ref
 * address: 0x60922FA4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Icon_s_ref(int a1, __int16 a2, int a3, int a4, int a5)
{
  int v7; // r0
  _DWORD v9[265]; // [sp+4h] [bp-424h] BYREF

  FIELD_U32(a1, 32) = a4;
  FIELD_U16(a1, 108) = a2;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 88))(a1);
  sub_604209A4(v9, "Icon = %s", off_60C5D7AC[dword_60CCFCA8[6 * v7 + 3]]);
  sub_60969510(a1 + 28, v9);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 44))(a1, a3, a5);
  return sub_60923050(a1);
}
