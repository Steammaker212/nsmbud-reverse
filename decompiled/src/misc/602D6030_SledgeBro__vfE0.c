/* SledgeBro__vfE0
 * address: 0x602D6030   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A33A8
// 
// Overridden by: None
int __fastcall SledgeBro__vfE0(float *a1)
{
  float *v1; // r4
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  _DWORD *v6; // r1
  _DWORD *v7; // r2
  float v8; // s0
  float v9; // s8
  _DWORD *v10; // t1
  float32x2_t v12; // [sp+0h] [bp-58h] BYREF
  float v13; // [sp+8h] [bp-50h]
  float v14; // [sp+Ch] [bp-4Ch]
  float v15; // [sp+10h] [bp-48h]
  float v16; // [sp+14h] [bp-44h]
  float v17; // [sp+18h] [bp-40h]
  float v18; // [sp+1Ch] [bp-3Ch]
  float v19; // [sp+20h] [bp-38h]
  float v20; // [sp+24h] [bp-34h]
  float v21; // [sp+28h] [bp-30h]
  float v22; // [sp+2Ch] [bp-2Ch]
  unsigned int v23; // [sp+30h] [bp-28h] BYREF
  unsigned int v24; // [sp+34h] [bp-24h] BYREF
  unsigned int v25; // [sp+38h] [bp-20h] BYREF

  v1 = a1;
  v2 = *((_DWORD *)a1 + 39);
  v3 = *((_DWORD *)a1 + 40);
  v4 = *((_DWORD *)a1 + 41);
  v5 = a1[28];
  v6 = *((_DWORD **)v1 + 29);
  v7 = *((_DWORD **)v1 + 27);
  v25 = v4;
  v24 = v3;
  v23 = v2;
  v12.n64_u64[0] = 1065353216;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 1.0;
  v17 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 1.0;
  v14 = *(float *)&v7;
  v18 = v5;
  v22 = *(float *)&v6;
  Mtx34_rotateY(&v12, &v24);
  v8 = v1[144];
  v14 = v14 + (float)((float)((float)(v8 * v12.n64_f32[1]) + (float)(v12.n64_f32[0] * 0.0)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v8 * v16) + (float)(v15 * 0.0)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v8 * v20) + (float)(v19 * 0.0)) + (float)(v21 * 0.0));
  Mtx34_rotateX(&v12, &v23);
  v9 = v1[144];
  v14 = v14 + (float)((float)((float)(v12.n64_f32[0] * 0.0) - (float)(v12.n64_f32[1] * v9)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v15 * 0.0) - (float)(v16 * v9)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v19 * 0.0) - (float)(v20 * v9)) + (float)(v21 * 0.0));
  Mtx34_rotateZ(&v12, &v25);
  v10 = *((_DWORD **)v1 + 1714);
  v1 += 1714;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v10 + 60))(*v10, &v12);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(***(_DWORD ***)v1 + 68))(**(_DWORD **)v1, (_DWORD **)v1 + 133);
  return sub_60421880(*(_DWORD *)v1);
}
