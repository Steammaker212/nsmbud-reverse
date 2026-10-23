/* Thwomp_updateModel
 * address: 0x6029E02C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Thwomp_updateModel(int a1)
{
  unsigned int *v1; // r4
  float v2; // s0
  float v3; // s2
  float v4; // s4
  float v5; // s8
  float v6; // s6
  float v7; // s10
  float v8; // s18
  float v9; // s0
  float v10; // s6
  _DWORD *v11; // t1
  float32x2_t v13; // [sp+0h] [bp-50h] BYREF
  float v14; // [sp+8h] [bp-48h]
  float v15; // [sp+Ch] [bp-44h]
  float v16; // [sp+10h] [bp-40h]
  float v17; // [sp+14h] [bp-3Ch]
  float v18; // [sp+18h] [bp-38h]
  float v19; // [sp+1Ch] [bp-34h]
  float v20; // [sp+20h] [bp-30h]
  float v21; // [sp+24h] [bp-2Ch]
  float v22; // [sp+28h] [bp-28h]
  float v23; // [sp+2Ch] [bp-24h]

  v1 = (unsigned int *)a1;
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_F32(a1, 6324);
  v6 = FIELD_F32(a1, 6332);
  v7 = FIELD_F32(a1, 6336);
  v13.n64_u64[0] = 1065353216;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 1.0;
  v8 = FIELD_F32(a1, 576);
  v9 = (float)(v2 + v5) + v6;
  v10 = (float)(v8 * 0.0) + 0.0;
  v15 = v9 + v10;
  v19 = (float)(v3 + v7) + (float)(v8 + 0.0);
  v23 = v4 + v10;
  Mtx34_rotateX(&v13, (unsigned int *)(a1 + 156));
  v15 = v15 + (float)((float)((float)(v13.n64_f32[0] * 0.0) - (float)(v13.n64_f32[1] * v8)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * v8)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * v8)) + (float)(v22 * 0.0));
  Mtx34_rotateY(&v13, v1 + 40);
  Mtx34_rotateZ(&v13, v1 + 41);
  v11 = (_DWORD *)v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v11 + 60))(*v11, &v13);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, v1 + 118);
  return ModelWrapper_updateModel((ModelWrapper *)*v1);
}
