/* sub_600E82D0
 * address: 0x600E82D0   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E82D0(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  _DWORD **v8; // r6
  float v9; // s4
  float v10; // s6
  float v11; // s2
  float32x2_t v13; // [sp+0h] [bp-70h] BYREF
  float v14; // [sp+8h] [bp-68h]
  float v15; // [sp+Ch] [bp-64h]
  float v16; // [sp+10h] [bp-60h]
  float v17; // [sp+14h] [bp-5Ch]
  float v18; // [sp+18h] [bp-58h]
  float v19; // [sp+1Ch] [bp-54h]
  float v20; // [sp+20h] [bp-50h]
  float v21; // [sp+24h] [bp-4Ch]
  float v22; // [sp+28h] [bp-48h]
  float v23; // [sp+2Ch] [bp-44h]
  unsigned int v24; // [sp+30h] [bp-40h] BYREF
  unsigned int v25; // [sp+34h] [bp-3Ch] BYREF
  unsigned int v26; // [sp+38h] [bp-38h] BYREF
  float v27; // [sp+40h] [bp-30h] BYREF
  float v28; // [sp+44h] [bp-2Ch]
  float v29; // [sp+48h] [bp-28h]

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v26 = v4;
  v25 = v3;
  v24 = v2;
  v13.n64_u64[0] = 1065353216;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 1.0;
  v15 = v7;
  v19 = v5;
  v23 = v6;
  Mtx34_rotateY(&v13, &v25);
  v15 = v15 + (float)((float)((float)(v13.n64_f32[1] * 7.0) + (float)(v13.n64_f32[0] * 0.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v17 * 7.0) + (float)(v16 * 0.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v21 * 7.0) + (float)(v20 * 0.0)) + (float)(v22 * 0.0));
  Mtx34_rotateX(&v13, &v24);
  v15 = v15 + (float)((float)((float)(v13.n64_f32[0] * 0.0) - (float)(v13.n64_f32[1] * 7.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * 7.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * 7.0)) + (float)(v22 * 0.0));
  Mtx34_rotateZ(&v13, &v26);
  v8 = (_DWORD **)(a1 + 7100);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7100) + 60))(**(_DWORD **)(a1 + 7100), &v13);
  v29 = FIELD_F32(a1, 152);
  v28 = FIELD_F32(a1, 148);
  v27 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v9 = FIELD_F32(a1, 152);
    v10 = FIELD_F32(a1, 6700);
    v11 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v27 = v27 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.85);
    v28 = v28 + (float)(v11 * 0.85);
    v29 = v29 + (float)((float)(v10 - v9) * 0.85);
  }
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v8 + 68))(**v8, &v27);
  return sub_60421880(*v8);
}
