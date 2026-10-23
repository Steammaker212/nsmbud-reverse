/* sub_607971BC
 * address: 0x607971BC   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607971BC(int a1)
{
  int result; // r0
  int v3; // r8
  int v4; // r0
  unsigned int v5; // r5
  unsigned int v6; // r6
  float *v7; // r3
  int v8; // r7
  float *v9; // r2
  float v10; // s18
  float v11; // s30
  float v12; // s22
  float v13; // s17
  float v14; // s19
  float v15; // s21
  float v16; // s24
  float v17; // s23
  float *v18; // r0
  float v19; // s20
  float v20; // s26
  float v21; // s16
  float v22; // s28
  float v23; // s27
  float v24; // s29
  float v25; // s31
  float v26; // s25
  float v27; // s0
  float v28; // s4
  float v29; // s2
  float v30; // s16
  float v31; // s24
  float v32; // s20
  float v33; // s19
  float v34; // s18
  float v35; // s22
  float v36; // s0
  float v37; // s2
  float v38; // s0
  float v39[12]; // [sp+4h] [bp-94h] BYREF
  float v40[25]; // [sp+34h] [bp-64h] BYREF

  result = FIELD_U8(a1, 1219);
  if ( (result & 8) != 0 )
  {
    v3 = FIELD_U32(a1, 160);
    v4 = sub_607BA5CC(a1);
    v5 = FIELD_U32(a1, 156);
    v6 = FIELD_U32(a1, 164);
    v39[3] = FIELD_F32(a1, 108);
    v7 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
    v8 = v4 + v3;
    v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v10 = *v7;
    v11 = v7[1];
    v12 = v7[2];
    v13 = v7[3];
    v14 = *v9;
    v15 = v9[1];
    v16 = v9[2];
    v17 = v9[3];
    v18 = (float *)((char *)sinLutTable + (((unsigned int)(v4 + v3) >> 20) & 0xFF0));
    v19 = *v18;
    v20 = v18[1];
    v21 = v18[2];
    v22 = v18[3];
    v39[7] = FIELD_F32(a1, 112);
    v39[11] = FIELD_F32(a1, 116);
    v23 = FIELD_F32(a1, 144);
    v24 = FIELD_F32(a1, 148);
    v25 = FIELD_F32(a1, 152);
    v26 = FIELD_F32(a1, 12028);
    sub_6076628C(a1, v40);
    v27 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
    v28 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
    v29 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v30 = v21 + (float)(v27 * v22);
    v31 = v16 + (float)(v28 * v17);
    v32 = v19 + (float)(v27 * v20);
    v33 = v14 + (float)(v28 * v15);
    v34 = v10 + (float)(v11 * v29);
    v35 = v12 + (float)(v29 * v13);
    v36 = (float)(v26 * v23) * v40[0];
    v39[0] = v36 * (float)((float)(v30 * v31) + (float)(v34 * (float)(v32 * v33)));
    v37 = (float)(v26 * v24) * v40[1];
    v39[4] = v36 * (float)(v35 * v33);
    v39[8] = v36 * (float)((float)(v34 * (float)(v30 * v33)) - (float)(v32 * v31));
    v38 = (float)(v26 * v25) * v40[2];
    v39[1] = v37 * (float)((float)(v34 * (float)(v32 * v31)) - (float)(v30 * v33));
    v39[5] = v37 * (float)(v35 * v31);
    v39[9] = v37 * (float)((float)(v32 * v33) + (float)(v34 * (float)(v30 * v31)));
    v39[2] = v38 * (float)(v35 * v32);
    v39[6] = -(float)(v34 * v38);
    v39[10] = v38 * (float)(v35 * v30);
    return ((int (__fastcall *)(_DWORD, float *))loc_60793FF0)(FIELD_U32(a1, 11360), v39);
  }
  return result;
}
