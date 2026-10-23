/* skl_root_ref_2AC6EC
 * address: 0x602AC6EC   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_2AC6EC(unsigned int *a1)
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
  int (__fastcall *v22)(int, float32x2_t *); // r2
  int v23; // r5
  float32x2_t v24; // d3
  float v25; // s2
  float32x2_t v26; // d0
  int v27; // r0
  int (__fastcall *v28)(int, float32x2_t *); // r2
  int v29; // r0
  float v30; // s4
  float v32[3]; // [sp+4h] [bp-84h] BYREF
  float32x2_t v33[6]; // [sp+10h] [bp-78h] BYREF
  float v34[18]; // [sp+40h] [bp-48h] BYREF

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
  v34[0] = v15 * v14;
  v34[4] = v15 * v16;
  v34[8] = -v17;
  v34[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v34[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v34[9] = v19 * v15;
  v34[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v34[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v34[10] = v18 * v15;
  LODWORD(v34[3]) = v1[27];
  LODWORD(v34[7]) = v1[28];
  LODWORD(v34[11]) = v1[29];
  v20 = (_DWORD *)v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v20 + 60))(*v20, v34);
  sub_604218E0((_DWORD *)*v1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 52))(*(_DWORD *)*v1);
  v21 = *(_DWORD *)*v1;
  v22 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v21 + 84);
  v33[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v33[0].n64_u32[1] = (unsigned __int32)&unk_60ABF3B9;
  v23 = v22(v21, v33);
  sub_604302C8(*(_DWORD *)*v1, v23, v33);
  Mtx34_rotateX(v33, v1 + 232);
  Mtx34_rotateY(v33, v1 + 233);
  Mtx34_rotateZ(v33, v1 + 234);
  v24.n64_u32[0] = 1.0;
  v25 = *((float *)v1 + 235) + -1.0;
  LODWORD(v32[1]) = v1[235];
  v26.n64_u32[1] = v24.n64_u32[1];
  v32[2] = 1.0;
  v26.n64_f32[0] = (float)(v25 * 0.5) + 1.0;
  LODWORD(v32[0]) = vmax_f32(v26, v24).n64_u32[0];
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(**(_DWORD **)*v1 + 96))(*(_DWORD *)*v1, v23, v33, v32);
  (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, &dword_60B3B98C);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
  v27 = *(_DWORD *)*v1;
  v28 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v27 + 84);
  v33[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v33[0].n64_u32[1] = (unsigned __int32)"skl_root";
  v29 = v28(v27, v33);
  (*(void (__fastcall **)(_DWORD, int, _DWORD **))(**(_DWORD **)*v1 + 108))(*(_DWORD *)*v1, v29, (_DWORD **)v1 + 157);
  v30 = *((float *)v1 - 1538);
  *((float *)v1 + 160) = *((float *)v1 + 160) + 0.0;
  *((float *)v1 + 164) = *((float *)v1 + 164) + (float)(v30 * 6.0);
  *((float *)v1 + 168) = *((float *)v1 + 168) + 0.0;
  (*(void (__fastcall **)(_DWORD, _DWORD **))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, (_DWORD **)v1 + 250);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
  sub_602AF1E0(v1[125]);
  sub_602AF1E0(v1[126]);
  sub_602AF1E0(v1[127]);
  return sub_602AF1E0(v1[128]);
}
