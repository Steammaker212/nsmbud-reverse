/* sub_6090C034
 * address: 0x6090C034   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090C034(int a1, int *a2, _QWORD *a3, int a4)
{
  __int64 v4; // d17
  __int64 v5; // d16
  __int64 v6; // d17
  _QWORD *v7; // r12
  _QWORD *v8; // r2
  __int64 v9; // d17
  __int64 v10; // d17
  int v11; // r3
  int v12; // r12
  int v13; // lr
  float v14; // s6
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s4
  float v19; // s6
  int v20; // r2
  int v21; // r3
  int v22; // r12
  int v23; // lr
  float v24; // s2
  float result; // s0

  v4 = a3[1];
  *(_QWORD *)a2 = *a3;
  *((_QWORD *)a2 + 1) = v4;
  v5 = a3[2];
  v6 = a3[3];
  v7 = a3 + 4;
  v8 = a3 + 6;
  *((_QWORD *)a2 + 2) = v5;
  *((_QWORD *)a2 + 3) = v6;
  v9 = v7[1];
  *((_QWORD *)a2 + 4) = *v7;
  *((_QWORD *)a2 + 5) = v9;
  v10 = v8[1];
  *((_QWORD *)a2 + 6) = *v8;
  *((_QWORD *)a2 + 7) = v10;
  switch ( a4 )
  {
    case 1:
      v11 = a2[5];
      v12 = a2[6];
      v13 = a2[7];
      v14 = -*(float *)a2;
      v15 = -*((float *)a2 + 1);
      v16 = -*((float *)a2 + 2);
      v17 = -*((float *)a2 + 3);
      *a2 = a2[4];
      a2[1] = v11;
      a2[2] = v12;
      a2[3] = v13;
      *((float *)a2 + 4) = v14;
      *((float *)a2 + 5) = v15;
      *((float *)a2 + 6) = v16;
      *((float *)a2 + 7) = v17;
      break;
    case 2:
      v18 = *((float *)a2 + 6);
      v19 = *((float *)a2 + 7);
      v20 = *a2;
      v21 = a2[1];
      v22 = a2[2];
      v23 = a2[3];
      v24 = -*((float *)a2 + 5);
      *(float *)a2 = -*((float *)a2 + 4);
      *((float *)a2 + 1) = v24;
      *((float *)a2 + 2) = -v18;
      *((float *)a2 + 3) = -v19;
      a2[4] = v20;
      a2[5] = v21;
      a2[6] = v22;
      a2[7] = v23;
      break;
    case 3:
      *(float *)a2 = -*(float *)a2;
      *((float *)a2 + 1) = -*((float *)a2 + 1);
      *((float *)a2 + 2) = -*((float *)a2 + 2);
      *((float *)a2 + 3) = -*((float *)a2 + 3);
      goto LABEL_5;
    case 4:
      *(float *)a2 = -*(float *)a2;
      *((float *)a2 + 1) = -*((float *)a2 + 1);
      *((float *)a2 + 2) = -*((float *)a2 + 2);
      *((float *)a2 + 3) = -*((float *)a2 + 3);
      break;
    case 5:
LABEL_5:
      *((float *)a2 + 4) = -*((float *)a2 + 4);
      *((float *)a2 + 5) = -*((float *)a2 + 5);
      *((float *)a2 + 6) = -*((float *)a2 + 6);
      *((float *)a2 + 7) = -*((float *)a2 + 7);
      break;
    default:
      break;
  }
  *((float *)a2 + 8) = *((float *)a2 + 8) * FIELD_F32(a1, 140);
  *((float *)a2 + 9) = *((float *)a2 + 9) * FIELD_F32(a1, 140);
  *((float *)a2 + 10) = FIELD_F32(a1, 140)
                      * (float)(*((float *)a2 + 10) + (float)(*((float *)a2 + 14) * FIELD_F32(a1, 144)));
  result = FIELD_F32(a1, 140);
  *((float *)a2 + 11) = (float)(*((float *)a2 + 15) * FIELD_F32(a1, 144)) + (float)(*((float *)a2 + 11) * result);
  return result;
}
