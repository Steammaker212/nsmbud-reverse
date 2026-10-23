/* sub_601B59CC
 * address: 0x601B59CC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B59CC(float *a1, float *a2)
{
  float v2; // s1
  float v3; // s8
  float v4; // s2
  float v5; // s3
  float v6; // s6
  float v7; // s14
  float v8; // s0
  float v9; // s4
  float v10; // s10
  int v11; // r2
  float v12; // s7
  float v13; // s9
  float v14; // s12
  float v15; // s11
  float v16; // s15
  float v17; // s1
  float v18; // s18
  float v19; // s5
  float v20; // s16
  float v21; // s20
  float v22; // s11
  float v23; // s13
  float v24; // s3
  float v25; // s14
  float v26; // s9
  float v27; // s7
  float v28; // s4

  v2 = a2[6];
  v3 = a2[8];
  v4 = a2[4];
  v5 = a2[10];
  v6 = a2[5];
  v7 = a2[9];
  v8 = a2[1];
  v9 = *a2;
  v10 = a2[2];
  v11 = 0;
  v12 = v2 * v3;
  v13 = (float)(v6 * v5) - (float)(v7 * v2);
  v14 = (float)(v7 * v4) - (float)(v6 * v3);
  v15 = (float)((float)(v8 * (float)((float)(v2 * v3) - (float)(v5 * v4))) + (float)(*a2 * v13)) + (float)(v10 * v14);
  if ( v15 != 0.0 )
  {
    v16 = v2 * v8;
    v17 = (float)(v9 * v2) - (float)(v4 * v10);
    v18 = a2[7];
    v19 = (float)(v5 * v4) - v12;
    v20 = a2[3];
    v21 = a2[11];
    v11 = 1;
    v22 = 1.0 / v15;
    v23 = (float)(v5 * v8) - (float)(v7 * v10);
    v24 = (float)(v9 * v5) - (float)(v3 * v10);
    v25 = (float)(v9 * v7) - (float)(v8 * v3);
    v26 = v13 * v22;
    v27 = (float)(v16 - (float)(v6 * v10)) * v22;
    v28 = (float)((float)(v9 * v6) - (float)(v8 * v4)) * v22;
    *a1 = v26;
    a1[1] = -(float)(v23 * v22);
    a1[2] = v27;
    a1[4] = -(float)(v19 * v22);
    a1[5] = v24 * v22;
    a1[6] = -(float)(v17 * v22);
    a1[8] = v14 * v22;
    a1[9] = -(float)(v25 * v22);
    a1[10] = v28;
    a1[3] = (float)((float)(v18 * (float)(v23 * v22)) - (float)(v26 * v20)) - (float)(v27 * v21);
    a1[7] = (float)((float)((float)(v19 * v22) * v20) - (float)((float)(v24 * v22) * v18))
          + (float)(v21 * (float)(v17 * v22));
    a1[11] = (float)((float)(v18 * (float)(v25 * v22)) - (float)((float)(v14 * v22) * v20)) - (float)(v28 * v21);
  }
  return v11;
}
