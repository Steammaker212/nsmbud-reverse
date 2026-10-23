/* sub_60399F2C
 * address: 0x60399F2C   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60399F2C(int a1)
{
  float *v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, float32x2_t *); // r2
  int v5; // r5
  int v6; // r0
  int (__fastcall *v7)(int, float32x2_t *); // r2
  int v8; // r5
  int v9; // r0
  int (__fastcall *v10)(int, float32x2_t *); // r2
  int v11; // r5
  int v12; // r0
  int (__fastcall *v13)(int, float32x2_t *); // r2
  int v14; // r5
  int v15; // r0
  int (__fastcall *v16)(int, float32x2_t *); // r2
  int v17; // r5
  int v18; // r0
  int (__fastcall *v19)(int, float32x2_t *); // r2
  int v20; // r5
  int v22; // [sp+4h] [bp-74h] BYREF
  float32x2_t v23; // [sp+8h] [bp-70h] BYREF
  float v24; // [sp+14h] [bp-64h]
  float v25; // [sp+24h] [bp-54h]
  float v26; // [sp+34h] [bp-44h]
  int v27; // [sp+38h] [bp-40h] BYREF
  int v28; // [sp+3Ch] [bp-3Ch]
  int v29; // [sp+40h] [bp-38h]

  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 1065353216;
  v2 = *(int **)(a1 + 6304);
  v1 = (float *)(a1 + 6304);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*v2 + 84);
  v23.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v23.n64_u32[1] = (unsigned __int32)"skl_root";
  v5 = v4(v3, &v23);
  sub_604302C8(**(_DWORD **)v1, v5, &v23);
  v22 = (int)(float)((float)(v1[60] * 2147500000.0) / 180.0);
  Mtx34_rotateX(&v23, (unsigned int *)&v22);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)v1 + 96))(**(_DWORD **)v1, v5, &v23, &v27);
  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 1065353216;
  v6 = **(_DWORD **)v1;
  v7 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v6 + 84);
  v23.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v23.n64_u32[1] = (unsigned __int32)"spine";
  v8 = v7(v6, &v23);
  sub_604302C8(**(_DWORD **)v1, v8, &v23);
  v22 = (int)(float)((float)(v1[59] * 2147500000.0) / 180.0);
  Mtx34_rotateX(&v23, (unsigned int *)&v22);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)v1 + 96))(**(_DWORD **)v1, v8, &v23, &v27);
  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 1065353216;
  v9 = **(_DWORD **)v1;
  v10 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v9 + 84);
  v23.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v23.n64_u32[1] = (unsigned __int32)"head";
  v11 = v10(v9, &v23);
  sub_604302C8(**(_DWORD **)v1, v11, &v23);
  v22 = (int)(float)((float)(v1[58] * 2147500000.0) / 180.0);
  Mtx34_rotateX(&v23, (unsigned int *)&v22);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)v1 + 96))(**(_DWORD **)v1, v11, &v23, &v27);
  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 1065353216;
  v12 = **(_DWORD **)v1;
  v13 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v12 + 84);
  v23.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v23.n64_u32[1] = (unsigned __int32)"fukuro_root";
  v14 = v13(v12, &v23);
  sub_604302C8(**(_DWORD **)v1, v14, &v23);
  v22 = (int)(float)((float)(v1[61] * 2147500000.0) / 180.0);
  Mtx34_rotateY(&v23, (unsigned int *)&v22);
  v24 = v1[64] + v24;
  v25 = v1[65] + v25;
  v26 = v1[66] + v26;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)v1 + 96))(**(_DWORD **)v1, v14, &v23, &v27);
  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 1065353216;
  v15 = **(_DWORD **)v1;
  v16 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v15 + 84);
  v23.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v23.n64_u32[1] = (unsigned __int32)"up0";
  v17 = v16(v15, &v23);
  sub_604302C8(**(_DWORD **)v1, v17, &v23);
  v22 = (int)(float)((float)(v1[62] * 2147500000.0) / 180.0);
  Mtx34_rotateY(&v23, (unsigned int *)&v22);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)v1 + 96))(**(_DWORD **)v1, v17, &v23, &v27);
  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 1065353216;
  v18 = **(_DWORD **)v1;
  v19 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v18 + 84);
  v23.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v23.n64_u32[1] = (unsigned __int32)"bottom0";
  v20 = v19(v18, &v23);
  sub_604302C8(**(_DWORD **)v1, v20, &v23);
  v22 = (int)(float)((float)(v1[63] * 2147500000.0) / 180.0);
  Mtx34_rotateY(&v23, (unsigned int *)&v22);
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)v1 + 96))(
           **(_DWORD **)v1,
           v20,
           &v23,
           &v27);
}
