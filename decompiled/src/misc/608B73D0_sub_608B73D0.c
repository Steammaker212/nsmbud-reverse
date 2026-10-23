/* sub_608B73D0
 * address: 0x608B73D0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B73D0(int a1, _DWORD *a2, _DWORD *a3)
{
  void *v6; // r8
  _DWORD *v7; // r1
  int v8; // r3
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r7
  int *v13; // r0
  int v14; // r2
  int *v15; // r0
  int v16; // r2
  int *v17; // r0
  int v18; // r2
  int *v19; // r0
  int v20; // r2
  int *v21; // r0
  int v22; // r2

  v6 = sub_608C3B10();
  v7 = (_DWORD *)sub_608C2698(v6, 96, 1);
  v7[1] = 20;
  v7[4] = a1 + 448;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v11 = a3[4];
  v12 = a3[5];
  v7[5] = *a3;
  v7[6] = v8;
  v7[7] = v9;
  v7[8] = v10;
  v7[9] = v11;
  v7[10] = v12;
  v7[11] = *a2;
  v7[12] = a2[1];
  v7[13] = a2[7];
  v13 = (int *)a2[2];
  v14 = *v13;
  v7[15] = v13[1];
  v7[14] = v14;
  v15 = (int *)a2[3];
  v16 = *v15;
  v7[17] = v15[1];
  v7[16] = v16;
  v17 = (int *)a2[4];
  v18 = *v17;
  v7[19] = v17[1];
  v7[18] = v18;
  v19 = (int *)a2[5];
  v20 = *v19;
  v7[21] = v19[1];
  v7[20] = v20;
  v21 = (int *)a2[6];
  v22 = *v21;
  v7[23] = v21[1];
  v7[22] = v22;
  return sub_608C2C1C(v6);
}
