/* sub_6071F644
 * address: 0x6071F644   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071F644(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r0
  __int16 v10; // [sp+0h] [bp-80h] BYREF
  int v11; // [sp+4h] [bp-7Ch]

  v4 = sub_6090B350(&v10);
  v11 |= 1u;
  v10 = 0;
  sub_6090B4B0(v4, a2[10]);
  v5 = a2[6];
  v6 = a2[10];
  v7 = sub_6090BE54(a2[7]);
  sub_60728B94(a1 + 12824, v6, v5 + 4, v7);
  sub_6091ADF4(a1 + 7056, a2[10]);
  v8 = sub_60958564(a2);
  return sub_6090B260(v8, a2[10]);
}
