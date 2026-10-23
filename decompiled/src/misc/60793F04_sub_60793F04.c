/* sub_60793F04
 * address: 0x60793F04   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793F04(int a1, _DWORD *a2)
{
  int result; // r0
  _DWORD v4[11]; // [sp+0h] [bp-38h] BYREF
  int v5; // [sp+2Ch] [bp-Ch]

  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 144))(a1, v4);
  *a2 = v4[3];
  a2[1] = v4[7];
  result = v5;
  a2[2] = v5;
  return result;
}
