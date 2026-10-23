/* skl_root_ref_128358
 * address: 0x60128358   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_128358(int a1)
{
  int **v2; // r6
  float v3; // s4
  float v4; // s6
  float v5; // s2
  int v6; // r0
  int (__fastcall *v7)(int, _DWORD *); // r2
  int v8; // r0
  int result; // r0
  _DWORD v10[11]; // [sp+0h] [bp-90h] BYREF
  int v11; // [sp+2Ch] [bp-64h]
  float v12; // [sp+30h] [bp-60h] BYREF
  float v13; // [sp+34h] [bp-5Ch]
  float v14; // [sp+38h] [bp-58h]
  float32x2_t v15; // [sp+40h] [bp-50h] BYREF
  float v16; // [sp+48h] [bp-48h]
  float v17; // [sp+4Ch] [bp-44h]
  float v18; // [sp+50h] [bp-40h]
  float v19; // [sp+54h] [bp-3Ch]
  float v20; // [sp+58h] [bp-38h]
  float v21; // [sp+5Ch] [bp-34h]
  float v22; // [sp+60h] [bp-30h]
  float v23; // [sp+64h] [bp-2Ch]
  float v24; // [sp+68h] [bp-28h]
  float v25; // [sp+6Ch] [bp-24h]

  v15.n64_u64[0] = 1065353216;
  v16 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v20 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v24 = 1.0;
  v17 = FIELD_F32(a1, 108);
  v21 = FIELD_F32(a1, 112);
  v25 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v15, (unsigned int *)(a1 + 160));
  v17 = v17 + (float)((float)((float)(v15.n64_f32[1] * 16.0) + (float)(v15.n64_f32[0] * 0.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v19 * 16.0) + (float)(v18 * 0.0)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v23 * 16.0) + (float)(v22 * 0.0)) + (float)(v24 * 0.0));
  Mtx34_rotateX(&v15, (unsigned int *)(a1 + 156));
  v17 = v17 + (float)((float)((float)(v15.n64_f32[0] * 0.0) - (float)(v15.n64_f32[1] * 16.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 16.0)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v22 * 0.0) - (float)(v23 * 16.0)) + (float)(v24 * 0.0));
  Mtx34_rotateZ(&v15, (unsigned int *)(a1 + 164));
  v17 = v17 + 0.0;
  v21 = v21 + 2.5;
  v25 = v25 + 0.0;
  v2 = (int **)(a1 + 7096);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7096) + 60))(**(_DWORD **)(a1 + 7096), &v15);
  v14 = FIELD_F32(a1, 152);
  v13 = FIELD_F32(a1, 148);
  v12 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v3 = FIELD_F32(a1, 152);
    v4 = FIELD_F32(a1, 6700);
    v5 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v12 = v12 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.7);
    v13 = v13 + (float)(v5 * 0.7);
    v14 = v14 + (float)((float)(v4 - v3) * 0.7);
  }
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v2 + 68))(**v2, &v12);
  sub_604218E0(*v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 52))(**v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 56))(**v2);
  v6 = **v2;
  v7 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 84);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "skl_root";
  v8 = v7(v6, v10);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v8, v10);
  FIELD_U32(a1, 8164) = v10[3];
  FIELD_U32(a1, 8168) = v10[7];
  result = v11;
  FIELD_U32(a1, 8172) = v11;
  return result;
}
