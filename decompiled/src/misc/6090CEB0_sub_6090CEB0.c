/* sub_6090CEB0
 * address: 0x6090CEB0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090CEB0(int result, _QWORD *a2, int a3)
{
  __int64 v3; // d17
  __int64 v4; // d17
  _QWORD *v5; // r3
  _QWORD *v6; // r1
  __int64 v7; // d17
  __int64 v8; // d17
  int v9; // r1
  int v10; // r4
  int v11; // lr
  int v12; // r8
  int v13; // r7
  int v14; // r6
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // lr
  int v21; // r5
  int v22; // r6
  int v23; // r7
  float *v24; // r1

  v3 = a2[1];
  FIELD_U64(result, 148) = *a2;
  FIELD_U64(result, 156) = v3;
  v4 = a2[3];
  FIELD_U64(result, 164) = a2[2];
  FIELD_U64(result, 172) = v4;
  v5 = a2 + 4;
  v6 = a2 + 6;
  v7 = v5[1];
  FIELD_U64(result, 180) = *v5;
  FIELD_U64(result, 188) = v7;
  v8 = v6[1];
  FIELD_U64(result, 196) = *v6;
  FIELD_U64(result, 204) = v8;
  v9 = 0;
  switch ( a3 )
  {
    case 1:
      v10 = FIELD_U32(result, 168);
      v11 = FIELD_U32(result, 148);
      v12 = FIELD_U32(result, 152);
      v13 = FIELD_U32(result, 156);
      v14 = FIELD_U32(result, 160);
      v15 = FIELD_U32(result, 172);
      v16 = FIELD_U32(result, 176);
      FIELD_U32(result, 148) = FIELD_U32(result, 164);
      FIELD_U32(result, 152) = v10;
      FIELD_U32(result, 156) = v15;
      FIELD_U32(result, 160) = v16;
      FIELD_U32(result, 164) = v11;
      FIELD_U32(result, 168) = v12;
      FIELD_U32(result, 172) = v13;
      FIELD_U32(result, 176) = v14;
      goto LABEL_6;
    case 2:
      v17 = FIELD_U32(result, 148);
      v18 = FIELD_U32(result, 152);
      v19 = FIELD_U32(result, 156);
      v20 = FIELD_U32(result, 160);
      v21 = FIELD_U32(result, 168);
      v22 = FIELD_U32(result, 172);
      v23 = FIELD_U32(result, 176);
      FIELD_U32(result, 148) = FIELD_U32(result, 164);
      FIELD_U32(result, 152) = v21;
      FIELD_U32(result, 156) = v22;
      FIELD_U32(result, 160) = v23;
      FIELD_U32(result, 164) = v17;
      FIELD_U32(result, 168) = v18;
      FIELD_U32(result, 172) = v19;
      FIELD_U32(result, 176) = v20;
      goto LABEL_5;
    case 3:
      FIELD_F32(result, 148) = -FIELD_F32(result, 148);
      FIELD_F32(result, 152) = -FIELD_F32(result, 152);
      FIELD_F32(result, 156) = -FIELD_F32(result, 156);
      FIELD_F32(result, 160) = -FIELD_F32(result, 160);
      goto LABEL_5;
    case 4:
      goto LABEL_6;
    case 5:
LABEL_5:
      v9 = 1;
LABEL_6:
      v24 = (float *)(result + 148 + 16 * v9);
      *v24 = -*v24;
      v24[1] = -v24[1];
      v24[2] = -v24[2];
      v24[3] = -v24[3];
      break;
    default:
      break;
  }
  FIELD_U8(result, 4) = 1;
  FIELD_U8(result, 236) = 1;
  return result;
}
