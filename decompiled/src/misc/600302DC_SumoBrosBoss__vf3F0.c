/* SumoBrosBoss__vf3F0
 * address: 0x600302DC   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE8
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf3F0(int a1)
{
  unsigned int *v2; // r1
  float v3; // r1
  float v4; // r2
  float v5; // s4
  float v6; // s6
  float v7; // s2
  _DWORD **v8; // r4
  _DWORD *v9; // t1
  float v11; // [sp+0h] [bp-58h] BYREF
  float v12; // [sp+4h] [bp-54h]
  float v13; // [sp+8h] [bp-50h]
  float32x2_t v14; // [sp+10h] [bp-48h] BYREF
  float v15; // [sp+18h] [bp-40h]
  float v16; // [sp+1Ch] [bp-3Ch]
  float v17; // [sp+20h] [bp-38h]
  float v18; // [sp+24h] [bp-34h]
  float v19; // [sp+28h] [bp-30h]
  float v20; // [sp+2Ch] [bp-2Ch]
  float v21; // [sp+30h] [bp-28h]
  float v22; // [sp+34h] [bp-24h]
  float v23; // [sp+38h] [bp-20h]
  float v24; // [sp+3Ch] [bp-1Ch]

  v14.n64_u64[0] = 1065353216;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 1.0;
  v19 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 1.0;
  v16 = FIELD_F32(a1, 108);
  v20 = FIELD_F32(a1, 112);
  v24 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v14, (unsigned int *)(a1 + 160));
  v2 = (unsigned int *)(a1 + 156);
  if ( FIELD_U8(a1, 7434) )
  {
    v16 = v16 + (float)((float)((float)(v14.n64_f32[1] * 28.0) + (float)(v14.n64_f32[0] * 0.0)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v18 * 28.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
    v24 = v24 + (float)((float)((float)(v22 * 28.0) + (float)(v21 * 0.0)) + (float)(v23 * 0.0));
    Mtx34_rotateX(&v14, v2);
    v16 = v16 + (float)((float)((float)(v14.n64_f32[0] * 0.0) - (float)(v14.n64_f32[1] * 28.0)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 28.0)) + (float)(v19 * 0.0));
    v24 = v24 + (float)((float)((float)(v21 * 0.0) - (float)(v22 * 28.0)) + (float)(v23 * 0.0));
  }
  else
  {
    Mtx34_rotateX(&v14, v2);
  }
  Mtx34_rotateZ(&v14, (unsigned int *)(a1 + 164));
  v3 = FIELD_F32(a1, 148);
  v4 = FIELD_F32(a1, 152);
  v11 = FIELD_F32(a1, 144);
  v12 = v3;
  v13 = v4;
  if ( !FIELD_U8(a1, 6313) )
  {
    v5 = FIELD_F32(a1, 152);
    v6 = FIELD_F32(a1, 6700);
    v7 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v11 = v11 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.5);
    v12 = v12 + (float)(v7 * 0.5);
    v13 = v13 + (float)((float)(v6 - v5) * 0.5);
  }
  v9 = *(_DWORD **)(a1 + 7096);
  v8 = (_DWORD **)(a1 + 7096);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v9 + 68))(*v9, &v11);
  if ( !*((_BYTE *)v8 - 876) )
  {
    j_ModelWrapper_updateAnims(*v8);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v8 + 60))(**v8, &v14);
  }
  return sub_60421880(*v8);
}
