/* BanzaiBill_vf160
 * address: 0x60321950   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall BanzaiBill_vf160(float *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  ModelWrapper *v4; // r0
  int v5; // r0
  int (__fastcall *v6)(int, float32x2_t *); // r2
  int v7; // r5
  _DWORD *v8; // r0
  float v9; // s0
  float v10; // s6
  float v11; // s10
  float v12; // s8
  float v13; // s12
  float v14; // s14
  float result; // s0
  float32x2_t v16; // [sp+0h] [bp-40h] BYREF
  float v17; // [sp+8h] [bp-38h]
  float v18; // [sp+Ch] [bp-34h]
  float v19; // [sp+10h] [bp-30h]
  float v20; // [sp+14h] [bp-2Ch]
  float v21; // [sp+18h] [bp-28h]
  float v22; // [sp+1Ch] [bp-24h]
  float v23; // [sp+20h] [bp-20h]
  float v24; // [sp+24h] [bp-1Ch]
  int v25; // [sp+28h] [bp-18h]
  float v26; // [sp+2Ch] [bp-14h]

  v16.n64_u64[0] = 1065353216;
  v17 = 0.0;
  v19 = 0.0;
  v20 = 1.0;
  v21 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  *(float *)&v25 = 1.0;
  v18 = a1[27];
  v22 = a1[28];
  v26 = a1[29];
  Mtx34_rotateY(&v16, (unsigned int *)a1 + 40);
  Mtx34_rotateX(&v16, (unsigned int *)a1 + 39);
  Mtx34_rotateZ(&v16, (unsigned int *)a1 + 41);
  v2 = (_DWORD *)(*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v2 + 60))(*v2, &v16);
  v3 = (_DWORD *)(*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v3 + 68))(*v3, a1 + 3256);
  v4 = (ModelWrapper *)(*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
  ModelWrapper_updateModel(v4);
  v5 = *(_DWORD *)(*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
  v6 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v5 + 84);
  v16.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v16.n64_u32[1] = (unsigned __int32)"skl_root";
  v7 = v6(v5, &v16);
  v8 = (_DWORD *)(*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)*v8 + 108))(*v8, v7, &v16);
  v9 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 624))(a1);
  v18 = v18 + (float)((float)((float)(v16.n64_f32[1] * 0.0) + (float)(v16.n64_f32[0] * 0.0)) + (float)(v9 * v17));
  v22 = v22 + (float)((float)((float)(v20 * 0.0) + (float)(v19 * 0.0)) + (float)(v9 * v21));
  v10 = v22;
  v11 = v24;
  v12 = v23;
  v13 = *(float *)&v25;
  v14 = v26;
  a1[1908] = v18;
  a1[1909] = v10;
  result = v14 + (float)((float)((float)(v11 * 0.0) + (float)(v12 * 0.0)) + (float)(v9 * v13));
  a1[1910] = result;
  return result;
}
