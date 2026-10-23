/* sub_608CB8B0
 * address: 0x608CB8B0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB8B0(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v6; // r9
  _DWORD *v7; // r1
  int v8; // r4
  int v9; // r5
  int v10; // r7
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r7
  int *v15; // r0
  int v16; // r2

  v6 = sub_608C3B10();
  v7 = (_DWORD *)sub_608C2698((int)v6, 80);
  v7[1] = 46;
  v7[4] = a1 + 456;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v7[5] = *a3;
  v7[6] = v8;
  v7[7] = v9;
  v7[8] = v10;
  v11 = a3[5];
  v12 = a3[6];
  v13 = a3[7];
  v14 = a3[8];
  v7[9] = a3[4];
  v7[10] = v11;
  v7[11] = v12;
  v7[12] = v13;
  v7[13] = v14;
  v7[15] = a2[1];
  v7[14] = *a2;
  v7[16] = a2[3];
  v15 = (int *)a2[2];
  v16 = *v15;
  v7[18] = v15[1];
  v7[17] = v16;
  v7[19] = *a3;
  return sub_608C2C1C(v6, v7);
}
