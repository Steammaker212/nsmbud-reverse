/* sub_60694A20
 * address: 0x60694A20   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60694A20(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r5
  float v4; // r9
  float v5; // r8
  float v6; // r10
  float *v7; // r11
  unsigned int v8; // r2
  float *v9; // r6
  float *v10; // r7
  float v11; // s20
  float v12; // s18
  float v13; // s16
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s0
  float v19; // s9
  unsigned int v20; // r0
  float v21; // s6
  float v22; // s10
  float v23; // s14
  float v24; // s2
  float v25; // s3
  float v26; // s7
  float v27; // s1
  unsigned int v28; // r0
  _DWORD v30[3]; // [sp+Ch] [bp-7Ch] BYREF
  float v31; // [sp+18h] [bp-70h] BYREF
  float v32; // [sp+1Ch] [bp-6Ch]
  float v33; // [sp+20h] [bp-68h]
  float v34; // [sp+24h] [bp-64h]
  float v35; // [sp+28h] [bp-60h]
  float v36; // [sp+2Ch] [bp-5Ch]
  float v37; // [sp+30h] [bp-58h]
  float v38; // [sp+34h] [bp-54h]
  float v39; // [sp+38h] [bp-50h]
  float v40; // [sp+3Ch] [bp-4Ch]
  float v41; // [sp+40h] [bp-48h]
  float v42; // [sp+44h] [bp-44h]

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 164);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  v6 = FIELD_F32(a1, 108);
  v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v8 = FIELD_U32(a1, 160);
  v9 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v14 = v10[2] + (float)(v11 * v10[3]);
  v15 = v9[2] + (float)(v12 * v9[3]);
  v16 = *v10 + (float)(v11 * v10[1]);
  v17 = *v9 + (float)(v12 * v9[1]);
  v18 = *v7 + (float)(v13 * v7[1]);
  v19 = v7[2] + (float)(v13 * v7[3]);
  v31 = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v35 = v19 * v16;
  v39 = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v32 = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v36 = v19 * v14;
  v40 = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v33 = v19 * v17;
  v37 = -v18;
  v41 = v19 * v15;
  v34 = v6;
  v38 = v4;
  v42 = v5;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 912) + 60))(**(_DWORD **)(a1 + 912), &v31);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 912) + 68))(**(_DWORD **)(a1 + 912), a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 912));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 912));
  v20 = FIELD_U32(a1, 1000);
  if ( v20 )
  {
    v21 = *v9 + (float)(v12 * v9[1]);
    v22 = v10[2] + (float)(v11 * v10[3]);
    v23 = v9[2] + (float)(v12 * v9[3]);
    v24 = *v10 + (float)(v11 * v10[1]);
    v25 = *v7 + (float)(v13 * v7[1]);
    v26 = v7[2] + (float)(v13 * v7[3]);
    v31 = (float)(v23 * v22) + (float)(v25 * (float)(v21 * v24));
    v35 = v26 * v24;
    v39 = (float)(v25 * (float)(v23 * v24)) - (float)(v21 * v22);
    v32 = (float)(v25 * (float)(v21 * v22)) - (float)(v23 * v24);
    v36 = v26 * v22;
    v40 = (float)(v21 * v24) + (float)(v25 * (float)(v23 * v22));
    v33 = v26 * v21;
    v27 = (float)v20 * -8.0;
    v37 = -v25;
    v41 = v26 * v23;
    v34 = v6 + (float)((float)((float)(v32 * v27) + (float)(v31 * 0.0)) + (float)((float)(v26 * v21) * 0.0));
    v38 = v4
        + (float)((float)((float)(v27 * (float)(v26 * v22)) + (float)((float)(v26 * v24) * 0.0)) + (float)(v25 * -0.0));
    v42 = v5 + (float)((float)((float)(v27 * v40) + (float)(v39 * 0.0)) + (float)((float)(v26 * v23) * 0.0));
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 916) + 60))(**(_DWORD **)(a1 + 916), &v31);
    v28 = FIELD_U32(a1, 1000);
    v30[0] = 1065353216;
    *(float *)&v30[1] = (float)v28;
    v30[2] = 1065353216;
    (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 916) + 68))(**(_DWORD **)(a1 + 916), v30);
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 916));
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 916));
  }
  return sub_60694D6C(a1);
}
