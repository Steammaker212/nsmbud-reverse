/* Iggy__vf418
 * address: 0x6009DC30   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : pure virtual
// 
// Overridden by: None
int __fastcall Iggy__vf418(int a1)
{
  float v2; // s4
  float v3; // s2
  _DWORD **v4; // r6
  float v5; // s4
  float v6; // s6
  float v7; // s2
  float v9; // [sp+0h] [bp-60h] BYREF
  float v10; // [sp+4h] [bp-5Ch]
  float v11; // [sp+8h] [bp-58h]
  float32x2_t v12; // [sp+10h] [bp-50h] BYREF
  float v13; // [sp+18h] [bp-48h]
  float v14; // [sp+1Ch] [bp-44h]
  float v15; // [sp+20h] [bp-40h]
  float v16; // [sp+24h] [bp-3Ch]
  float v17; // [sp+28h] [bp-38h]
  float v18; // [sp+2Ch] [bp-34h]
  float v19; // [sp+30h] [bp-30h]
  float v20; // [sp+34h] [bp-2Ch]
  float v21; // [sp+38h] [bp-28h]
  float v22; // [sp+3Ch] [bp-24h]

  v12.n64_u64[0] = 1065353216;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 1.0;
  v17 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 1.0;
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 112) + 7.0;
  v14 = FIELD_F32(a1, 108) + 0.0;
  v18 = v3;
  v22 = v2 + 0.0;
  Mtx34_rotateX(&v12, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v12, (unsigned int *)(a1 + 164));
  v14 = v14 + (float)((float)((float)(v12.n64_f32[0] * 0.0) - (float)(v12.n64_f32[1] * 7.0)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v15 * 0.0) - (float)(v16 * 7.0)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v19 * 0.0) - (float)(v20 * 7.0)) + (float)(v21 * 0.0));
  Mtx34_rotateY(&v12, (unsigned int *)(a1 + 160));
  v4 = (_DWORD **)(a1 + 7100);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7100) + 60))(**(_DWORD **)(a1 + 7100), &v12);
  v11 = FIELD_F32(a1, 152);
  v10 = FIELD_F32(a1, 148);
  v9 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v5 = FIELD_F32(a1, 152);
    v6 = FIELD_F32(a1, 6700);
    v7 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v9 = v9 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.9);
    v10 = v10 + (float)(v7 * 0.9);
    v11 = v11 + (float)((float)(v6 - v5) * 0.9);
  }
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v4 + 68))(**v4, &v9);
  return sub_60421880(*v4);
}
