/* sub_6098F300
 * address: 0x6098F300   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098F300(_QWORD *a1, float *a2)
{
  __int64 *v3; // r1
  __int64 *v4; // r2
  __int64 *v5; // r0
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d20
  __int64 v9; // d21
  __int64 v10; // d18
  __int64 v11; // d19
  __int64 v12; // d22
  __int64 v13; // d23
  __int64 v14; // d17
  __int64 v15; // d20
  __int64 v16; // d21
  __int64 v17; // d18
  __int64 v18; // d19
  _QWORD v19[9]; // [sp+0h] [bp-168h] BYREF
  int v20; // [sp+4Ch] [bp-11Ch] BYREF
  _QWORD v21[10]; // [sp+50h] [bp-118h] BYREF
  float v22[49]; // [sp+A4h] [bp-C4h] BYREF

  sub_6090C77C((int)v22, 0.0, 300.0, a2[1] * 0.5, a2[1] * -0.5, *a2 * -0.5, *a2 * 0.5);
  sub_6090A6D0((int)&v20, v22);
  (*(void (__fastcall **)(int *, _QWORD *))(v20 + 16))(&v20, v21);
  v3 = (__int64 *)sub_6090BE54((int)v22);
  v4 = v3 + 4;
  v5 = v3 + 6;
  v6 = *v3;
  v7 = v3[1];
  v3 += 2;
  v8 = *v4;
  v9 = v4[1];
  v10 = *v5;
  v11 = v5[1];
  v12 = *v3;
  v13 = v3[1];
  v19[0] = v6;
  v19[1] = v7;
  v19[2] = v12;
  v19[3] = v13;
  v19[4] = v8;
  v19[5] = v9;
  v19[6] = v10;
  v19[7] = v11;
  sub_6085402C((int)a1, (int *)v19);
  v14 = v21[1];
  v15 = v21[2];
  v16 = v21[3];
  v17 = v21[4];
  v18 = v21[5];
  a1[10] = v21[0];
  a1[11] = v14;
  a1[12] = v15;
  a1[13] = v16;
  a1[14] = v17;
  a1[15] = v18;
  nullsub_111();
  nullsub_113();
}
