/* sub_6060C7C8
 * address: 0x6060C7C8   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6060C7C8(int a1)
{
  float *v1; // r4
  float *v2; // r6
  float *v3; // r7
  float *v4; // r5
  int v5; // r8
  _DWORD *v6; // lr
  _DWORD *v7; // r2
  _DWORD *v8; // r12
  float *v9; // r1
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s6
  float *v14; // r1
  float *v15; // r0
  float v16; // s10
  float v17; // s14
  float v18; // s8
  float v19; // s4
  float v20; // s0
  float v21; // s5
  float v22; // s1
  float v23; // s13
  float v24; // s9
  float v25; // s6
  float v26; // s4
  float v27; // s2
  float v28; // s0
  float v29; // s18
  float v30; // s6
  _DWORD *v31; // t1
  float v32; // s8
  __n128 result; // q0
  float v34; // s4
  float v35; // s6
  float v36; // s10
  float v37; // s12
  float32x2_t v38; // [sp+0h] [bp-68h] BYREF
  float v39; // [sp+8h] [bp-60h]
  float v40; // [sp+Ch] [bp-5Ch]
  float v41; // [sp+10h] [bp-58h]
  float v42; // [sp+14h] [bp-54h]
  float v43; // [sp+18h] [bp-50h]
  float v44; // [sp+1Ch] [bp-4Ch]
  float v45; // [sp+20h] [bp-48h]
  float v46; // [sp+24h] [bp-44h]
  float v47; // [sp+28h] [bp-40h]
  float v48; // [sp+2Ch] [bp-3Ch]
  unsigned int v49; // [sp+30h] [bp-38h]
  unsigned int v50; // [sp+34h] [bp-34h]
  unsigned int v51; // [sp+38h] [bp-30h] BYREF

  v1 = (float *)a1;
  v51 = FIELD_U32(a1, 6540);
  v50 = FIELD_U32(a1, 6536);
  v49 = FIELD_U32(a1, 6532);
  v2 = (float *)(a1 + 6620);
  v3 = (float *)(a1 + 6628);
  v4 = (float *)(a1 + 6624);
  v5 = a1 + 6108;
  sub_60630B4C(a1 + 6108, FIELD_F32(a1, 6620), FIELD_F32(a1, 6628), FIELD_F32(a1, 6624));
  sub_60630B60(v5, *v2, *v3, *v4);
  v6 = *((_DWORD **)v1 + 27);
  v7 = *((_DWORD **)v1 + 28);
  v8 = *((_DWORD **)v1 + 29);
  v9 = (float *)((char *)sinLutTable + ((v51 >> 20) & 0xFF0));
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  v14 = (float *)((char *)sinLutTable + ((v50 >> 20) & 0xFF0));
  v15 = (float *)((char *)sinLutTable + ((v49 >> 20) & 0xFF0));
  v16 = (float)(v51 & 0xFFFFFF) * 0.000000059605;
  v17 = (float)(v49 & 0xFFFFFF);
  v18 = (float)(v50 & 0xFFFFFF) * 0.000000059605;
  v19 = v12 + (float)(v16 * v13);
  v20 = v10 + (float)(v16 * v11);
  v21 = v14[2] + (float)(v18 * v14[3]);
  v22 = *v14 + (float)(v18 * v14[1]);
  v23 = v15[2] + (float)((float)(v17 * 0.000000059605) * v15[3]);
  v24 = *v15 + (float)((float)(v17 * 0.000000059605) * v15[1]);
  v38.n64_f32[0] = v21 * v19;
  v41 = v21 * v20;
  v45 = -v22;
  v38.n64_f32[1] = (float)((float)(v24 * v22) * v19) - (float)(v23 * v20);
  v42 = (float)(v23 * v19) + (float)((float)(v24 * v22) * v20);
  v46 = v24 * v21;
  v39 = (float)(v22 * (float)(v23 * v19)) + (float)(v24 * v20);
  v43 = (float)(v22 * (float)(v23 * v20)) - (float)(v24 * v19);
  v47 = v23 * v21;
  v40 = *(float *)&v6;
  v44 = *(float *)&v7;
  v48 = *(float *)&v8;
  ((void (__fastcall *)(int, float32x2_t *, float))loc_60630830)(v5, &v38, 0.0);
  v25 = v1[28];
  v26 = v1[1645];
  v27 = v1[1644];
  v28 = v1[1646];
  v38.n64_u64[0] = 1065353216;
  v39 = 0.0;
  v41 = 0.0;
  v42 = 1.0;
  v43 = 0.0;
  v45 = 0.0;
  v46 = 0.0;
  v47 = 1.0;
  v29 = fabsf(v25 - v26);
  v30 = (float)(v29 * 0.0) + 0.0;
  v40 = v27 + v30;
  v44 = v26 + v29;
  v48 = v28 + v30;
  Mtx34_rotateZ(&v38, &v51);
  v40 = v40 + (float)((float)((float)(v38.n64_f32[0] * 0.0) - (float)(v38.n64_f32[1] * v29)) + (float)(v39 * 0.0));
  v44 = v44 + (float)((float)((float)(v41 * 0.0) - (float)(v42 * v29)) + (float)(v43 * 0.0));
  v48 = v48 + (float)((float)((float)(v45 * 0.0) - (float)(v46 * v29)) + (float)(v47 * 0.0));
  v31 = *((_DWORD **)v1 + 1526);
  v1 += 1526;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v31 + 60))(*v31, &v38);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(***(_DWORD ***)v1 + 68))(**(_DWORD **)v1, (_DWORD **)v1 + 121);
  ModelWrapper_updateModel(*(ModelWrapper **)v1);
  v32 = v1[124];
  result.n128_f32[0] = v40
                     + (float)((float)((float)(v38.n64_f32[0] * 0.0) - (float)(v38.n64_f32[1] * v32))
                             + (float)(v39 * 0.0));
  v44 = v44 + (float)((float)((float)(v41 * 0.0) - (float)(v42 * v32)) + (float)(v43 * 0.0));
  result.n128_f32[2] = v44;
  v34 = v45;
  v35 = v46;
  v36 = v47;
  v37 = v48;
  v1[115] = result.n128_f32[0];
  v1[116] = result.n128_f32[2];
  v1[117] = v37 + (float)((float)((float)(v34 * 0.0) - (float)(v35 * v32)) + (float)(v36 * 0.0));
  return result;
}
