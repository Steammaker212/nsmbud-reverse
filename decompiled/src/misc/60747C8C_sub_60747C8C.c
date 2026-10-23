/* sub_60747C8C
 * address: 0x60747C8C   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60747C8C(int a1)
{
  int v2; // r12
  unsigned int v3; // r1
  unsigned int v4; // r0
  int v5; // s0
  float *v6; // r6
  unsigned int v7; // r2
  int v8; // r3
  float *v9; // r0
  float v10; // s14
  float v11; // s2
  float v12; // s0
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s13
  float v17; // s1
  float v18; // s9
  float v19; // s16
  float v20; // s18
  int v21; // r6
  unsigned int v23[3]; // [sp+4h] [bp-6Ch] BYREF
  float v24; // [sp+10h] [bp-60h] BYREF
  float v25; // [sp+14h] [bp-5Ch]
  float v26; // [sp+18h] [bp-58h]
  int v27; // [sp+1Ch] [bp-54h] BYREF
  float32x2_t v28; // [sp+20h] [bp-50h] BYREF
  float v29; // [sp+28h] [bp-48h]
  int v30; // [sp+2Ch] [bp-44h]
  float v31; // [sp+30h] [bp-40h]
  float v32; // [sp+34h] [bp-3Ch]
  float v33; // [sp+38h] [bp-38h]
  int v34; // [sp+3Ch] [bp-34h]
  float v35; // [sp+40h] [bp-30h]
  float v36; // [sp+44h] [bp-2Ch]
  float v37; // [sp+48h] [bp-28h]
  int v38; // [sp+4Ch] [bp-24h]

  v2 = FIELD_U32(a1, 164);
  v3 = FIELD_U32(a1, 760) + FIELD_U32(a1, 156);
  v4 = FIELD_U32(a1, 764) + FIELD_U32(a1, 160);
  v5 = v4 & 0xFFFFFF;
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = FIELD_U32(a1, 768) + v2;
  v8 = (v7 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float)(v3 & 0xFFFFFF);
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v5 * 0.000000059605;
  v13 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v8));
  v14 = v6[2] + (float)(v12 * v6[3]);
  v15 = *(float *)((char *)sinLutTable + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v8));
  v16 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
  v17 = *v6 + (float)(v12 * v6[1]);
  v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
  v28.n64_f32[0] = v14 * v13;
  v31 = v14 * v15;
  v35 = -v17;
  v28.n64_f32[1] = (float)((float)(v18 * v17) * v13) - (float)(v16 * v15);
  v32 = (float)(v16 * v13) + (float)((float)(v18 * v17) * v15);
  v36 = v18 * v14;
  v29 = (float)(v17 * (float)(v16 * v13)) + (float)(v18 * v15);
  v33 = (float)(v17 * (float)(v16 * v15)) - (float)(v18 * v13);
  v37 = v16 * v14;
  v30 = FIELD_U32(a1, 108);
  v34 = FIELD_U32(a1, 112);
  v38 = FIELD_U32(a1, 116);
  v24 = FIELD_F32(a1, 800);
  v23[0] = FIELD_U32(a1, 804);
  v19 = FIELD_F32(a1, 796);
  Mtx34_rotateZ(&v28, (unsigned int *)&v24);
  v20 = (float)(v19 * 0.125) + 1.0;
  v27 = -LODWORD(v24);
  v28.n64_f32[1] = v28.n64_f32[1] * v20;
  v32 = v20 * v32;
  v36 = v20 * v36;
  Mtx34_rotateZ(&v28, (unsigned int *)&v27);
  Mtx34_rotateZ(&v28, v23);
  v27 = -v23[0];
  v28.n64_f32[1] = v20 * v28.n64_f32[1];
  v32 = v20 * v32;
  v36 = v20 * v36;
  Mtx34_rotateZ(&v28, (unsigned int *)&v27);
  sub_60748F80(a1, &v24);
  v28.n64_f32[0] = v28.n64_f32[0] * v24;
  v31 = v24 * v31;
  v35 = v35 * v24;
  v28.n64_f32[1] = v28.n64_f32[1] * v25;
  v32 = v25 * v32;
  v36 = v36 * v25;
  v29 = v29 * v26;
  v33 = v26 * v33;
  v37 = v37 * v26;
  v21 = **(_DWORD **)(a1 + 728);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v21 + 60))(v21, &v28);
  *(float *)v23 = FIELD_F32(a1, 144) * 2.5;
  *(float *)&v23[1] = FIELD_F32(a1, 148) * 2.5;
  *(float *)&v23[2] = FIELD_F32(a1, 152) * 2.5;
  (*(void (__fastcall **)(int, unsigned int *))(*(_DWORD *)v21 + 68))(v21, v23);
  (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 52))(v21);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 56))(v21);
}
