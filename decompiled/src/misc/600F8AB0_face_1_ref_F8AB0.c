/* face_1_ref_F8AB0
 * address: 0x600F8AB0   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall face_1_ref_F8AB0(unsigned int *a1)
{
  unsigned int *v1; // r4
  unsigned int *v2; // r7
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r7
  int v6; // s2
  int v7; // s14
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s14
  float v12; // s0
  float v13; // s2
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s13
  float v19; // s9
  _DWORD *v20; // t1
  int v21; // r0
  int (__fastcall *v22)(int, _DWORD *); // r2
  int v23; // r6
  unsigned int result; // r0
  _DWORD v25[3]; // [sp+4h] [bp-54h] BYREF
  float32x2_t v26; // [sp+10h] [bp-48h] BYREF
  float v27; // [sp+18h] [bp-40h]
  unsigned int v28; // [sp+1Ch] [bp-3Ch]
  float v29; // [sp+20h] [bp-38h]
  float v30; // [sp+24h] [bp-34h]
  float v31; // [sp+28h] [bp-30h]
  unsigned int v32; // [sp+2Ch] [bp-2Ch]
  float v33; // [sp+30h] [bp-28h]
  float v34; // [sp+34h] [bp-24h]
  float v35; // [sp+38h] [bp-20h]
  unsigned int v36; // [sp+3Ch] [bp-1Ch]

  v1 = a1;
  v2 = a1 + 39;
  v3 = a1[39];
  v4 = v2[1];
  v5 = v2[2];
  v6 = v4 & 0xFFFFFF;
  v7 = v3 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(unsigned int)v7;
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(unsigned int)v6 * 0.000000059605;
  v14 = v8[2] + (float)(v12 * v8[3]);
  v15 = v9[2] + (float)(v13 * v9[3]);
  v16 = *v8 + (float)(v12 * v8[1]);
  v17 = *v9 + (float)(v13 * v9[1]);
  v18 = v10[2] + (float)((float)(v11 * 0.000000059605) * v10[3]);
  v19 = *v10 + (float)((float)(v11 * 0.000000059605) * v10[1]);
  v26.n64_f32[0] = v15 * v14;
  v29 = v15 * v16;
  v33 = -v17;
  v26.n64_f32[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v30 = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v34 = v19 * v15;
  v27 = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v31 = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v35 = v18 * v15;
  v28 = v1[27];
  v32 = v1[28];
  v36 = v1[29];
  v20 = (_DWORD *)v1[1525];
  v1 += 1525;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v20 + 60))(*v20, &v26);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, v1 - 1489);
  sub_604218E0((_DWORD *)*v1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 52))(*(_DWORD *)*v1);
  v21 = *(_DWORD *)*v1;
  v22 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v21 + 84);
  v25[0] = &sead__SafeStringBase__vtable;
  v25[1] = "face_1";
  v23 = v22(v21, v25);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(**(_DWORD **)*v1 + 100))(
    *(_DWORD *)*v1,
    v23,
    &v26,
    v25);
  Mtx34_rotateZ(&v26, v1 + 1);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(**(_DWORD **)*v1 + 96))(*(_DWORD *)*v1, v23, &v26, v25);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(**(_DWORD **)*v1 + 108))(*(_DWORD *)*v1, v23, &v26);
  v1[2] = v28;
  v1[3] = v32;
  result = v36;
  v1[4] = v36;
  return result;
}
