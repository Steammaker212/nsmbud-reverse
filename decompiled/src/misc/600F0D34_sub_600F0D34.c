/* sub_600F0D34
 * address: 0x600F0D34   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F0D34(int a1)
{
  _DWORD **v2; // r6
  float v3; // s4
  float v4; // s6
  float v5; // s2
  float v7; // [sp+0h] [bp-60h] BYREF
  float v8; // [sp+4h] [bp-5Ch]
  float v9; // [sp+8h] [bp-58h]
  float32x2_t v10; // [sp+10h] [bp-50h] BYREF
  float v11; // [sp+18h] [bp-48h]
  float v12; // [sp+1Ch] [bp-44h]
  float v13; // [sp+20h] [bp-40h]
  float v14; // [sp+24h] [bp-3Ch]
  float v15; // [sp+28h] [bp-38h]
  float v16; // [sp+2Ch] [bp-34h]
  float v17; // [sp+30h] [bp-30h]
  float v18; // [sp+34h] [bp-2Ch]
  float v19; // [sp+38h] [bp-28h]
  float v20; // [sp+3Ch] [bp-24h]

  v10.n64_u64[0] = 1065353216;
  v11 = 0.0;
  v13 = 0.0;
  v14 = 1.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v12 = FIELD_F32(a1, 108);
  v16 = FIELD_F32(a1, 112);
  v20 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v10, (unsigned int *)(a1 + 160));
  v12 = v12 + (float)((float)((float)(v10.n64_f32[1] * 7.0) + (float)(v10.n64_f32[0] * 0.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v14 * 7.0) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v18 * 7.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
  Mtx34_rotateX(&v10, (unsigned int *)(a1 + 156));
  v12 = v12 + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * 7.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 7.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 7.0)) + (float)(v19 * 0.0));
  Mtx34_rotateZ(&v10, (unsigned int *)(a1 + 164));
  v2 = (_DWORD **)(a1 + 7100);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7100) + 60))(**(_DWORD **)(a1 + 7100), &v10);
  v9 = FIELD_F32(a1, 152);
  v8 = FIELD_F32(a1, 148);
  v7 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v3 = FIELD_F32(a1, 152);
    v4 = FIELD_F32(a1, 6700);
    v5 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v7 = v7 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.8);
    v8 = v8 + (float)(v5 * 0.8);
    v9 = v9 + (float)((float)(v4 - v3) * 0.8);
  }
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v2 + 68))(**v2, &v7);
  return sub_60421880(*v2);
}
