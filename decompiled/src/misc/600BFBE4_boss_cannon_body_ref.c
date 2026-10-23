/* boss_cannon_body_ref
 * address: 0x600BFBE4   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall boss_cannon_body_ref(unsigned int *a1)
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
  float v24; // s4
  int v25; // r0
  int (__fastcall *v26)(int, float32x2_t *); // r2
  int v27; // r5
  _BYTE v29[12]; // [sp+4h] [bp-84h] BYREF
  float32x2_t v30; // [sp+10h] [bp-78h] BYREF
  float v31; // [sp+1Ch] [bp-6Ch]
  float v32; // [sp+2Ch] [bp-5Ch]
  float v33; // [sp+3Ch] [bp-4Ch]
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
  v20 = (_DWORD *)v1[1525];
  v1 += 1525;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v20 + 60))(*v20, v34);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, (_DWORD **)v1 - 1489);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 52))(*(_DWORD *)*v1);
  v21 = *(_DWORD *)*v1;
  v22 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v21 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"boss_cannon_body";
  v23 = v22(v21, &v30);
  sub_604302C8(*(_DWORD *)*v1, v23, &v30);
  Mtx34_rotateY(&v30, v1 + 333);
  v24 = *((float *)v1 + 334);
  v31 = v31 + 0.0;
  v32 = v24 + v32;
  v33 = v33 + 0.0;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(**(_DWORD **)*v1 + 96))(
    *(_DWORD *)*v1,
    v23,
    &v30,
    &dword_60B3B98C);
  v25 = *(_DWORD *)*v1;
  v26 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v25 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"boss_cannon_gun";
  v27 = v26(v25, &v30);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(**(_DWORD **)*v1 + 100))(*(_DWORD *)*v1, v27, &v30, v29);
  Mtx34_rotateZ(&v30, v1 + 332);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(**(_DWORD **)*v1 + 96))(*(_DWORD *)*v1, v27, &v30, v29);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
}
