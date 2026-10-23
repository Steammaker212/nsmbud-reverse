/* sub_60962E0C
 * address: 0x60962E0C   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60962E0C(int a1, float *a2, int a3)
{
  int v5; // r7
  float v6; // s16
  float v7; // s18
  float v8; // s20
  _DWORD *v9; // r6
  float *result; // r0
  float *v11; // r8
  float *v12; // r1
  float v13; // s30
  float v14; // s21
  float v15; // s19
  float v16; // s0
  float *v17; // r9
  float *v18; // r11
  float v19; // s0
  float v20; // s27
  float v21; // s25
  float v22; // s29
  float v23; // s0
  float v24; // s0
  float v25; // s17
  float v26; // s23
  float v27; // s21
  float v28; // s0
  float v29; // s21
  float v30; // s17
  float v31; // s23
  float v32; // s0
  float v33; // s0
  float v34; // s4
  float v35; // s2
  float v36; // s0
  float v38; // [sp+8h] [bp-78h] BYREF
  float v39; // [sp+Ch] [bp-74h]
  float v40; // [sp+10h] [bp-70h]
  float v41; // [sp+14h] [bp-6Ch]

  v5 = 0;
  v6 = (float)(a2[2] + a2[20]) * 0.5;
  v7 = (float)(a2[1] + a2[19]) * 0.5;
  v8 = (float)(*a2 + a2[18]) * 0.5;
  v40 = 0.0;
  v39 = 0.0;
  v38 = 1.0;
  v41 = 0.0;
  v9 = &unk_60B46928;
  do
  {
    result = (float *)(a3 & (1 << v5));
    if ( ((unsigned __int8)a3 & (unsigned __int8)(1 << v5)) != 0 )
    {
      v11 = &a2[3 * *(v9 - 1)];
      v12 = &a2[3 * v9[1]];
      v13 = v12[1] - v11[1];
      v14 = *v12 - *v11;
      v15 = v12[2] - v11[2];
      v16 = sqrtf((float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v15 * v15));
      v17 = v11 + 2;
      v18 = v11 + 1;
      if ( v16 > 0.0 )
      {
        v19 = 1.0 / v16;
        v15 = v15 * v19;
        v13 = v13 * v19;
        v14 = v14 * v19;
      }
      result = &a2[3 * *v9];
      v20 = result[1] - *v18;
      v21 = *result - *v11;
      v22 = result[2] - *v17;
      v23 = sqrtf((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22));
      if ( v23 > 0.0 )
      {
        v24 = 1.0 / v23;
        v22 = v22 * v24;
        v20 = v20 * v24;
        v21 = v21 * v24;
      }
      v25 = (float)(v15 * v21) - (float)(v14 * v22);
      v26 = (float)(v13 * v22) - (float)(v15 * v20);
      v27 = (float)(v14 * v20) - (float)(v13 * v21);
      v28 = sqrtf((float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27));
      if ( v28 > 0.0 )
      {
        v29 = (float)(1.0 / v28) * v27;
        v30 = (float)(1.0 / v28) * v25;
        v31 = v26 * (float)(1.0 / v28);
        result = (float *)(LODWORD(v28) & 0x7FFFFFFF);
        if ( (LODWORD(v28) & 0x7FFFFFFFu) <= 0x7F800000 )
        {
          v32 = (float)((float)((float)(v30 * v30) + (float)(v31 * v31)) + (float)(v29 * v29)) + -1.0;
          if ( v32 >= -0.0000011921 && v32 <= 0.0000011921 )
          {
            v33 = *v18;
            v34 = *v11;
            v35 = *v17;
            v38 = v31;
            v39 = v30;
            v40 = v29;
            v36 = (float)((float)(v30 * v33) + (float)(v31 * v34)) + (float)(v29 * v35);
            v41 = v36;
            if ( (float)((float)((float)((float)(v7 * v30) + (float)(v8 * v31)) + (float)(v6 * v29)) - v36) > 0.0 )
            {
              v38 = -v31;
              v39 = -v30;
              v40 = -v29;
              v41 = -v36;
            }
            result = (float *)sub_609630E0(a1, &v38);
          }
        }
      }
    }
    ++v5;
    v9 += 3;
  }
  while ( v5 != 6 );
  return result;
}
