/* sub_60210A38
 * address: 0x60210A38   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60210A38(int a1, int a2)
{
  float *v4; // r0
  float32x2_t v5; // d0
  float32x2_t v6; // d1
  unsigned int v7; // r7
  int v8; // r5
  unsigned int v9; // r5
  float *v10; // r0
  float v11; // s24
  float v12; // s26
  float v13; // s28
  float v14; // s30
  unsigned int U32; // r0
  float v16; // r1
  float v17; // s16
  float v18; // s20
  int v19; // r2
  float v20; // s6
  float v21; // s0
  int result; // r0
  float v23; // s10
  float v24; // s24
  float v25; // s28
  float v26; // s0
  float v27; // s2
  float v28; // s2
  int v29; // s0
  float v30; // s2
  float v31[2]; // [sp+0h] [bp-78h] BYREF
  float v32; // [sp+8h] [bp-70h]
  _DWORD v33[27]; // [sp+Ch] [bp-6Ch] BYREF

  memset(v33, 255, 12);
  sub_601DA918(v33);
  v4 = (float *)sub_601DFFE4((int)v33);
  v31[0] = v4[18];
  v31[1] = v4[19];
  v32 = v4[20] + 150.0;
  v5.n64_f32[0] = sqrtf(
                    (float)((float)(FIELD_F32(a1, 88) - v32) * (float)(FIELD_F32(a1, 88) - v32))
                  + (float)((float)(FIELD_F32(a1, 80) - v31[0]) * (float)(FIELD_F32(a1, 80) - v31[0])));
  v6.n64_u32[0] = 1132068864;
  v7 = (int)(float)((float)(vmin_f32(v5, v6).n64_f32[0] / 250.0) * -1431700000.0) ^ 0x80000000;
  v8 = ((2 * v7 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32) - v7;
  v9 = v8 + sub_608332B0(a1 + 80, v31);
  v10 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
  v16 = FIELD_F32(a1, 80);
  FIELD_F32(a1, 392) = v16;
  v17 = (float)(0.024541 * 0.0) + 0.0;
  v18 = (float)(-0.00030118 * 0.0) + 1.0;
  v19 = FIELD_U32(a1, 84);
  v20 = COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0;
  v21 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
  FIELD_U32(a1, 396) = v19;
  result = FIELD_S32(a1, 88);
  v23 = (float)(v20 * 100.0) + 100.0;
  v24 = v11 + (float)(v12 * v21);
  v25 = v13 + (float)(v14 * v21);
  FIELD_F32(a1, 400) = *(float *)&result;
  v26 = v31[0]
      + (float)((float)((float)((float)((float)(v18 * (float)(v17 * v24)) - (float)(v17 * v18)) * 0.0)
                      + (float)((float)(v18 * v25) * 0.0))
              + (float)(v23 * (float)((float)((float)(v18 * v18) * v24) + (float)(v17 * v17))));
  v27 = v32
      + (float)((float)((float)((float)(v17 * v25) * 0.0) - (float)(v24 * 0.0)) + (float)(v23 * (float)(v18 * v25)));
  FIELD_F32(a1, 404) = v26;
  FIELD_F32(a1, 412) = v27;
  FIELD_U32(a1, 408) = v19;
  FIELD_U8(a1, 424) = 0;
  FIELD_U32(a1, 448) = 119304647;
  FIELD_U32(a1, 452) = 11930464;
  if ( a2 == 1 )
  {
    FIELD_U32(a1, 444) = 1045220557;
    *(float *)&result = 0.2;
  }
  else
  {
    v28 = sqrtf(
            (float)((float)(*(float *)&result - v27) * (float)(*(float *)&result - v27))
          + (float)((float)(v16 - v26) * (float)(v16 - v26)))
        / FIELD_F32(a1, 200);
    v29 = 1008981770;
    v30 = 1.0 / v28;
    FIELD_F32(a1, 444) = v30;
    if ( v30 >= 0.01 )
    {
      v29 = LODWORD(v30);
      if ( v30 > 0.1 )
        v29 = 1036831949;
    }
    FIELD_U32(a1, 444) = v29;
  }
  return result;
}
