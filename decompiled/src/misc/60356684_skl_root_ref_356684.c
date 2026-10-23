/* skl_root_ref_356684
 * address: 0x60356684   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall skl_root_ref_356684(int a1)
{
  float *v1; // r4
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  float v5; // r0
  float v6; // r1
  _DWORD *v7; // r2
  float v8; // s2
  float result; // s0
  _DWORD v10[3]; // [sp+0h] [bp-80h] BYREF
  _DWORD *v11; // [sp+Ch] [bp-74h]
  float v12; // [sp+1Ch] [bp-64h]
  _DWORD *v13; // [sp+2Ch] [bp-54h]
  float32x2_t v14; // [sp+30h] [bp-50h] BYREF
  float v15; // [sp+38h] [bp-48h]
  float v16; // [sp+3Ch] [bp-44h]
  float v17; // [sp+40h] [bp-40h]
  float v18; // [sp+44h] [bp-3Ch]
  float v19; // [sp+48h] [bp-38h]
  float v20; // [sp+4Ch] [bp-34h]
  float v21; // [sp+50h] [bp-30h]
  float v22; // [sp+54h] [bp-2Ch]
  float v23; // [sp+58h] [bp-28h]
  float v24; // [sp+5Ch] [bp-24h]

  v1 = (float *)(a1 + 6332);
  sub_604218E0(*(_DWORD **)(a1 + 6332));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 52))(**(_DWORD **)v1);
  v14.n64_u64[0] = 1065353216;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 1.0;
  v19 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 1.0;
  v16 = *(v1 - 1556);
  v20 = *(v1 - 1555);
  v24 = *(v1 - 1554);
  Mtx34_rotateY(&v14, (unsigned int *)v1 - 1543);
  v16 = v16 + (float)((float)((float)(v14.n64_f32[1] * 8.0) + (float)(v14.n64_f32[0] * 0.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v18 * 8.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
  v24 = v24 + (float)((float)((float)(v22 * 8.0) + (float)(v21 * 0.0)) + (float)(v23 * 0.0));
  Mtx34_rotateX(&v14, (unsigned int *)v1 - 1544);
  v16 = v16 + (float)((float)((float)(v14.n64_f32[0] * 0.0) - (float)(v14.n64_f32[1] * 8.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 8.0)) + (float)(v19 * 0.0));
  v24 = v24 + (float)((float)((float)(v21 * 0.0) - (float)(v22 * 8.0)) + (float)(v23 * 0.0));
  Mtx34_rotateZ(&v14, (unsigned int *)v1 - 1542);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(***(_DWORD ***)v1 + 68))(**(_DWORD **)v1, (_DWORD **)v1 + 114);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)v1 + 60))(**(_DWORD **)v1, &v14);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 56))(**(_DWORD **)v1);
  v2 = **(_DWORD **)v1;
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "skl_root";
  v4 = v3(v2, v10);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v4, v10);
  v5 = *(float *)&v11;
  v6 = v12;
  v7 = v13;
  v1[110] = *(float *)&v11;
  v1[111] = v6;
  *((_DWORD *)v1 + 112) = v7;
  v8 = v6 - *(v1 - 1555);
  result = (float)(v5 - *(v1 - 1556)) + (float)(flt_60AF1EA0[*((_DWORD *)v1 - 1563)] * 6.0);
  *(v1 - 1507) = result;
  *(v1 - 1506) = v8;
  return result;
}
