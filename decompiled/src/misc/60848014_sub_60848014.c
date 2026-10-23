/* sub_60848014
 * address: 0x60848014   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60848014(int a1, int *a2, int a3, _DWORD *a4, _DWORD *a5, unsigned int a6, int a7)
{
  int v11; // r5
  int v12; // r0
  nn__util *v13; // r0
  _DWORD *v14; // r4
  int v15; // r0
  _DWORD v17[22]; // [sp+8h] [bp-58h] BYREF

  v11 = sub_6083D1F4(a2, (unsigned __int8 *)a3);
  v12 = sub_6083CF64(a2, a3);
  sub_60847820((int)a4, v12);
  sub_6084785C(a4);
  v13 = (nn__util *)sub_60847870((int)a4);
  sub_60847A7C(a7, v13, v11, a6, a5);
  sub_60847898((int)a4, v11);
  sub_60847890((int)a4);
  v14 = (_DWORD *)sub_6084783C((int)a4);
  v15 = sub_60847844((int)a4);
  sub_6083D24C(a1, a2, (unsigned __int8 *)a3, v14, v15, v11);
  sub_6084784C((int)a4, v11);
  memset(v17, 0, 64);
  sub_60998F30(v17);
  LOBYTE(v17[0]) = 1;
  v17[1] = FIELD_U32(a3, 12);
  v17[12] = a1;
  v17[2] = 84148994;
  LOWORD(v17[4]) = 0;
  HIWORD(v17[4]) = FIELD_U16(a3, 6);
  return sub_6083D338(a1 + 216, (int)a2, (unsigned __int8 *)v17);
}
