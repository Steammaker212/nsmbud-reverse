/* sub_6041925C
 * address: 0x6041925C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041925C(_DWORD *a1, int *a2, int a3)
{
  int v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r0

  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  a1[4] = v5;
  a1 += 4;
  a1[1] = v6;
  a1[2] = v7;
  a1[3] = v8;
  sub_6083E714();
  a1[6] = sub_6083E774();
  a1[5] = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 24))(a3);
  sub_6083E82C();
  a1[8] = sub_6083E7D0(a1);
  a1[7] = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 24))(a3);
  v9 = sub_6083E894();
  sub_6083E760(v9);
  a1[10] = sub_6083E6A4(a1[5], a1[6], a1[7], a1[8], a1);
  a1[11] = sub_6083E6AC(a1[5], a1[6], a1[7], a1[8], a1);
  v10 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a3 + 24))(a3, a1[10]);
  a1[9] = v10;
  return sub_6083E6B4(a1 + 4, v10, a1[10], a1[5], a1[6], a1[7], a1[8], a1, FIELD_U32(dword_60CCFC8C, 24));
}
