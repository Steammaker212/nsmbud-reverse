/* sub_6095F0C4
 * address: 0x6095F0C4   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6095F0C4(int a1, float *a2, int *a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // lr
  int v6; // r4
  int v7; // r5
  int v8; // r2
  float v9; // s2
  float v10; // s4
  float v11; // s6
  float v12; // s14
  float v13; // s15
  float v14; // s7
  float v15; // s0
  float v16; // s22
  float v17; // s24
  float *v18; // r3
  float v19; // s5
  float v20; // s8
  float v21; // s3
  float *v22; // r3
  float v23; // s20
  float v24; // s10
  float v25; // s3
  float v26; // s5
  float v27; // s9
  float *v28; // r2
  float v29; // s4
  float v30; // s2
  float v31; // s16
  float v32; // s11
  float v33; // s1
  float v34; // s14
  float result; // s0
  _DWORD v36[38]; // [sp+0h] [bp-98h] BYREF

  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  v6 = a3[3];
  v7 = a3[4];
  v8 = a3[5];
  v36[0] = v3;
  v36[1] = v4;
  v36[2] = v5;
  v36[3] = v6;
  v36[4] = v4;
  v36[5] = v5;
  v36[6] = v6;
  v36[7] = v4;
  v36[8] = v8;
  v36[9] = v3;
  v36[10] = v4;
  v36[11] = v8;
  v36[12] = v3;
  v36[13] = v7;
  v36[14] = v5;
  v36[15] = v6;
  v36[16] = v7;
  v36[17] = v5;
  v36[18] = v6;
  v36[19] = v7;
  v36[20] = v8;
  v36[21] = v3;
  v36[22] = v7;
  v36[23] = v8;
  v9 = FIELD_F32(a1, 244);
  v10 = FIELD_F32(a1, 248);
  v11 = FIELD_F32(a1, 252);
  v12 = FIELD_F32(a1, 264);
  v13 = FIELD_F32(a1, 260);
  v14 = FIELD_F32(a1, 280);
  v15 = FIELD_F32(a1, 256);
  v16 = FIELD_F32(a1, 268);
  v17 = FIELD_F32(a1, 288);
  v18 = (float *)&v36[3 * FIELD_U32(a1, 216)];
  v19 = v18[2];
  v20 = FIELD_F32(a1, 276);
  v21 = (float)(v18[1] * v12) + (float)(*v18 * v13);
  v22 = (float *)&v36[3 * FIELD_U32(a1, 228)];
  v23 = v22[2];
  v24 = (float)((float)(*(float *)&v36[3 * FIELD_U32(a1, 212) + 1] * v10)
              + (float)(*(float *)&v36[3 * FIELD_U32(a1, 212)] * v9))
      + (float)(*(float *)&v36[3 * FIELD_U32(a1, 212) + 2] * v11);
  v25 = v21 + (float)(v19 * v16);
  v26 = FIELD_F32(a1, 272);
  v27 = FIELD_F32(a1, 284);
  v28 = (float *)&v36[3 * FIELD_U32(a1, 236)];
  v29 = (float)(v10 * v22[1]) + (float)(v9 * *v22);
  v30 = *v28;
  v31 = v28[2];
  v32 = (float)((float)(*(float *)&v36[3 * FIELD_U32(a1, 220) + 1] * v14)
              + (float)(*(float *)&v36[3 * FIELD_U32(a1, 220)] * v20))
      + (float)(*(float *)&v36[3 * FIELD_U32(a1, 220) + 2] * v27);
  v33 = v28[1];
  v34 = (float)((float)(v12 * *(float *)&v36[3 * FIELD_U32(a1, 232) + 1])
              + (float)(v13 * *(float *)&v36[3 * FIELD_U32(a1, 232)]))
      + (float)(v16 * *(float *)&v36[3 * FIELD_U32(a1, 232) + 2]);
  *a2 = v15 + v24;
  a2[1] = v26 + v25;
  a2[2] = v17 + v32;
  a2[3] = v15 + (float)(v29 + (float)(v11 * v23));
  result = v17 + (float)((float)((float)(v14 * v33) + (float)(v20 * v30)) + (float)(v27 * v31));
  a2[4] = v26 + v34;
  a2[5] = result;
  return result;
}
