/* sub_60206700
 * address: 0x60206700   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60206700(int a1)
{
  int result; // r0
  int v3; // r7
  int v4; // r6
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  float v8; // r1
  float v9; // r2
  int v10; // r0
  float v11; // r2
  float v12; // r12
  float v13; // lr
  unsigned int v14; // r3
  unsigned int v15; // r6
  int v16; // r0
  int v17; // s0
  int v18; // r6
  float *v19; // r0
  float *v20; // r1
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s10
  float v25; // s5
  float v26; // s6
  float v27; // s1
  float v28; // s13
  float v29; // s9
  float32x2_t v30; // [sp+4h] [bp-64h] BYREF
  float v31; // [sp+Ch] [bp-5Ch]
  float v32; // [sp+10h] [bp-58h]
  float v33; // [sp+14h] [bp-54h]
  float v34; // [sp+18h] [bp-50h]
  float v35; // [sp+1Ch] [bp-4Ch]
  float v36; // [sp+20h] [bp-48h]
  float v37; // [sp+24h] [bp-44h]
  float v38; // [sp+28h] [bp-40h]
  float v39; // [sp+2Ch] [bp-3Ch]
  float v40; // [sp+30h] [bp-38h]
  int speed; // [sp+34h] [bp-34h] BYREF
  int target; // [sp+38h] [bp-30h] BYREF
  float v43; // [sp+3Ch] [bp-2Ch]
  float v44; // [sp+40h] [bp-28h]

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 268));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    if ( !FIELD_U8(a1, 365) )
    {
      v3 = FIELD_U32(a1, 180);
      v4 = sub_601CF9C0(dword_60C8AEF0);
      v30.n64_u64[0] = -1;
      v31 = NAN;
      sub_6019EC34(&v30, (_DWORD *)(v4 + 1032));
      v5 = FIELD_U32(a1, 240);
      v6 = v30.n64_i32[0];
      v7 = v30.n64_u32[0] == v5;
      if ( v30.n64_u32[0] != v5 )
      {
        *(float *)&v6 = 0.0;
        v7 = v30.n64_u32[1] == 0;
      }
      if ( v7 )
      {
        v8 = FIELD_F32(v4, 84);
        v9 = FIELD_F32(v4, 88);
        target = FIELD_S32(v4, 80);
        v43 = v8;
        v44 = v9;
        *(float *)&v6 = 0.0;
        if ( sqrtf(
               (float)((float)((float)(v43 - FIELD_F32(a1, 84)) * (float)(v43 - FIELD_F32(a1, 84)))
                     + (float)((float)(*(float *)&target - FIELD_F32(a1, 80))
                             * (float)(*(float *)&target - FIELD_F32(a1, 80))))
             + (float)((float)(v44 - FIELD_F32(a1, 88)) * (float)(v44 - FIELD_F32(a1, 88)))) < 450.0 )
        {
          if ( v9 <= FIELD_F32(a1, 88) )
          {
            v6 = v3;
          }
          else
          {
            v10 = sub_608332B0(a1 + 80, &target);
            if ( v3 < 0 )
            {
              *(float *)&v6 = -1.466e13;
              if ( v10 > -715827883 )
                v6 = v10;
            }
            else
            {
              *(float *)&v6 = 3.0316e-13;
              if ( v10 < 715827882 )
                v6 = v10;
            }
          }
        }
      }
      FIELD_F32(a1, 340) = *(float *)&v6;
      target = v6;
      speed = 0x2000000;
      moveValueTo((int *)(a1 + 180), &target, &speed);
    }
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 268) + 68))(**(_DWORD **)(a1 + 268), a1 + 128);
    v11 = FIELD_F32(a1, 84);
    v12 = FIELD_F32(a1, 88);
    v13 = FIELD_F32(a1, 80);
    if ( FIELD_U32(a1, 240) == 6 )
    {
      v14 = FIELD_U32(a1, 176);
      v15 = FIELD_U32(a1, 184);
      v16 = (v15 >> 20) & 0xFF0;
      v17 = v15 & 0xFFFFFF;
      v18 = (v14 >> 20) & 0xFF0;
      v19 = (float *)((char *)sinLutTable + v16);
      v20 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 180) >> 20) & 0xFF0));
      v21 = (float)(unsigned int)v17 * 0.000000059605;
      v22 = (float)(FIELD_U32(a1, 180) & 0xFFFFFF) * 0.000000059605;
      v23 = (float)(v14 & 0xFFFFFF) * 0.000000059605;
      v24 = v19[2] + (float)(v21 * v19[3]);
      v25 = v20[2] + (float)(v22 * v20[3]);
      v26 = *v19 + (float)(v21 * v19[1]);
      v27 = *v20 + (float)(v22 * v20[1]);
      v28 = *(float *)((char *)&sinLutTable[2] + v18) + (float)(v23 * *(float *)((char *)&sinLutTable[3] + v18));
      v29 = *(float *)((char *)sinLutTable + v18) + (float)(v23 * *(float *)((char *)&sinLutTable[1] + v18));
      v30.n64_f32[0] = v25 * v24;
      v33 = v25 * v26;
      v37 = -v27;
      v30.n64_f32[1] = (float)((float)(v29 * v27) * v24) - (float)(v28 * v26);
      v34 = (float)(v28 * v24) + (float)((float)(v29 * v27) * v26);
      v38 = v29 * v25;
      v31 = (float)(v27 * (float)(v28 * v24)) + (float)(v29 * v26);
      v35 = (float)(v27 * (float)(v28 * v26)) - (float)(v29 * v24);
      v39 = v28 * v25;
      v32 = v13;
      v36 = v11;
      v40 = v12;
    }
    else
    {
      v30.n64_u64[0] = 1065353216;
      v31 = 0.0;
      v33 = 0.0;
      v34 = 1.0;
      v35 = 0.0;
      v37 = 0.0;
      v38 = 0.0;
      v39 = 1.0;
      v32 = v13;
      v36 = v11 + 40.0;
      v40 = v12;
      Mtx34_rotateY(&v30, (unsigned int *)(a1 + 180));
      Mtx34_rotateX(&v30, (unsigned int *)(a1 + 176));
      Mtx34_rotateZ(&v30, (unsigned int *)(a1 + 184));
      v32 = v32 + (float)((float)((float)(v30.n64_f32[0] * 0.0) - (float)(v30.n64_f32[1] * 40.0)) + (float)(v31 * 0.0));
      v36 = v36 + (float)((float)((float)(v33 * 0.0) - (float)(v34 * 40.0)) + (float)(v35 * 0.0));
      v40 = v40 + (float)((float)((float)(v37 * 0.0) - (float)(v38 * 40.0)) + (float)(v39 * 0.0));
    }
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), &v30);
    sub_604218E0(*(_DWORD **)(a1 + 268));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
    return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
  }
  return result;
}
