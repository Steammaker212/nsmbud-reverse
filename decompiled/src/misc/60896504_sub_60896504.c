/* sub_60896504
 * address: 0x60896504   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60896504(int *a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r9
  unsigned int v9; // r10
  int v10; // lr
  unsigned int v11; // r12
  int v12; // r8
  unsigned int v13; // r5
  int v14; // r3
  int *v15; // r5
  int v16; // r2
  int v17; // r1
  unsigned int v18; // r11
  int v19; // r1
  int v20; // r2
  int v21; // r7
  int v22; // r1
  unsigned int v23; // r7
  int v24; // r2
  int v25; // r0
  int v26; // r3
  int v27; // r7

  v6 = (a4 + a2[104] - 1) & -a2[104];
  a1[20] = v6;
  a1[21] = a3;
  a1[2] = (int)a2;
  a1[3] = v6 * a3;
  v7 = sub_6089725C(a2);
  *a1 = v7;
  if ( !v7 )
    return 0;
  v8 = 0;
  v9 = 0;
  a1[1] = 0;
  v10 = a1[2];
  v11 = a1[3];
  v12 = a1[20] - 1;
  v13 = (v12 + FIELD_U32(v10, 416)) & -FIELD_U32(v10, 416);
  v14 = 0;
  if ( v13 <= v11 )
  {
    v14 = v7;
    a1[1] = v13;
    v9 = v13;
  }
  a1[16] = v14;
  v15 = a2 + 106;
  a1[4] = a2[106];
  v16 = a2[107];
  v17 = a2[108];
  a1[7] = a2[109];
  a1[6] = v17;
  a1[5] = v16;
  *((_QWORD *)a1 + 2) += v14 - a2[92];
  v18 = ((v12 + FIELD_U32(v10, 416)) & -FIELD_U32(v10, 416)) + v9;
  if ( v18 > v11 )
  {
    v18 = v9;
  }
  else
  {
    v8 = v7 + v9;
    a1[1] = v18;
  }
  a1[17] = v8;
  v19 = *v15;
  v20 = a2[107];
  v21 = a2[108];
  a1[11] = a2[109];
  a1[8] = v19;
  a1[9] = v20;
  a1[10] = v21;
  v22 = 1;
  *((_QWORD *)a1 + 4) += (int)(v8 - a2[92]);
  if ( a1[21] == 3 )
  {
    v23 = ((v12 + FIELD_U32(v10, 416)) & -FIELD_U32(v10, 416)) + v18;
    v24 = 0;
    if ( v23 <= v11 )
    {
      v24 = v7 + v18;
      a1[1] = v23;
    }
    a1[18] = v24;
    v25 = *v15;
    v26 = a2[107];
    v27 = a2[108];
    a1[15] = a2[109];
    a1[12] = v25;
    a1[13] = v26;
    a1[14] = v27;
    *((_QWORD *)a1 + 6) += v24 - a2[92];
  }
  return v22;
}
