/* sub_608445C8
 * address: 0x608445C8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608445C8(int a1, _DWORD *a2, int a3)
{
  int v5; // r6
  int v6; // r4
  int result; // r0
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  v5 = a1 + 80;
  v6 = 17;
  do
  {
    memset(v8, 0, 16);
    sub_6084396C(v8);
    result = sub_60843650(v5, a3, a2, v8);
    v5 += 72;
    --v6;
  }
  while ( v6 );
  return result;
}
