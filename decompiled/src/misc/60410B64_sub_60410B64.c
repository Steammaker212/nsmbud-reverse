/* sub_60410B64
 * address: 0x60410B64   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60410B64(int a1)
{
  int result; // r0
  int *v2; // r5
  int **v3; // r11
  int v4; // r10
  int v5; // r7
  float v6; // s0
  float v7; // s0
  float v8; // s0
  int v9; // r4
  _DWORD *v10; // r1
  int v11; // [sp+0h] [bp-68h]
  _DWORD *v12; // [sp+4h] [bp-64h]
  _DWORD v14[2]; // [sp+Ch] [bp-5Ch] BYREF
  float32x2_t v15; // [sp+14h] [bp-54h] BYREF
  float v16; // [sp+1Ch] [bp-4Ch]
  int v17; // [sp+20h] [bp-48h]
  float v18; // [sp+24h] [bp-44h]
  float v19; // [sp+28h] [bp-40h]
  float v20; // [sp+2Ch] [bp-3Ch]
  int v21; // [sp+30h] [bp-38h]
  float v22; // [sp+34h] [bp-34h]
  float v23; // [sp+38h] [bp-30h]
  float v24; // [sp+3Ch] [bp-2Ch]
  int v25; // [sp+40h] [bp-28h]

  v2 = (int *)(a1 + 7304);
  result = FIELD_U32(a1, 7304);
  if ( result )
  {
    v12 = (_DWORD *)(a1 + 7316);
    v3 = (int **)(a1 + 7312);
    do
    {
      v4 = **v3;
      v5 = FIELD_U32(v4, 40);
      v15.n64_u64[0] = 1065353216;
      v16 = 0.0;
      v18 = 0.0;
      v19 = 1.0;
      v20 = 0.0;
      v22 = 0.0;
      v23 = 0.0;
      v24 = 1.0;
      v17 = FIELD_U32(v4, 4);
      v21 = FIELD_U32(v4, 8);
      v25 = FIELD_U32(v4, 12);
      Mtx34_rotateY(&v15, (unsigned int *)(v4 + 32));
      Mtx34_rotateX(&v15, (unsigned int *)(v4 + 28));
      Mtx34_rotateZ(&v15, (unsigned int *)(v4 + 36));
      v6 = FIELD_F32(v4, 16);
      v15.n64_f32[0] = v15.n64_f32[0] * v6;
      v18 = v6 * v18;
      v22 = v22 * FIELD_F32(v4, 16);
      v7 = FIELD_F32(v4, 20);
      v15.n64_f32[1] = v15.n64_f32[1] * v7;
      v19 = v7 * v19;
      v23 = v23 * FIELD_F32(v4, 20);
      v8 = FIELD_F32(v4, 24);
      v16 = v16 * v8;
      v20 = v8 * v20;
      v24 = v24 * FIELD_F32(v4, 24);
      face_1_ref_75B8E4(v5, &v15);
      v9 = FIELD_U32(v5, 40);
      sub_604373D8(v9);
      v14[0] = **(_DWORD **)(v5 + 24);
      v14[1] = v9;
      sub_60410F70(a1, *(_DWORD *)v4, v14, 2, v11);
      if ( *v2 >= 1 )
      {
        v10 = (_DWORD *)**v3;
        *v10 = *v12;
        *v12 = v10;
      }
      sub_608DEB9C(v2, 0, 1);
      result = *v2;
    }
    while ( *v2 );
  }
  return result;
}
