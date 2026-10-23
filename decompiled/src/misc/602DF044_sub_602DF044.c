/* sub_602DF044
 * address: 0x602DF044   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DF044(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s4
  float v5; // s8
  float v6; // s6
  float v7; // s10
  int v8; // r6
  int v10; // [sp+4h] [bp-5Ch] BYREF
  unsigned int v11; // [sp+8h] [bp-58h] BYREF
  unsigned int v12; // [sp+Ch] [bp-54h] BYREF
  float32x2_t v13; // [sp+10h] [bp-50h] BYREF
  float v14; // [sp+18h] [bp-48h]
  float v15; // [sp+1Ch] [bp-44h]
  float v16; // [sp+20h] [bp-40h]
  float v17; // [sp+24h] [bp-3Ch]
  float v18; // [sp+28h] [bp-38h]
  float v19; // [sp+2Ch] [bp-34h]
  float v20; // [sp+30h] [bp-30h]
  float v21; // [sp+34h] [bp-2Ch]
  float v22; // [sp+38h] [bp-28h]
  float v23; // [sp+3Ch] [bp-24h]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 6140);
  v6 = FIELD_F32(a1, 6148);
  v7 = FIELD_F32(a1, 6144);
  v10 = FIELD_U32(a1, 156) - 835132529;
  v11 = FIELD_U32(a1, 160);
  v12 = FIELD_U32(a1, 164);
  v13.n64_u64[0] = 1065353216;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 1.0;
  v15 = v4 + v5;
  v19 = v2 + v7;
  v23 = v3 + v6;
  Mtx34_rotateY(&v13, &v11);
  v15 = v15 + (float)((float)((float)(v13.n64_f32[1] * 7.0) + (float)(v13.n64_f32[0] * 0.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v17 * 7.0) + (float)(v16 * 0.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v21 * 7.0) + (float)(v20 * 0.0)) + (float)(v22 * 0.0));
  Mtx34_rotateZ(&v13, &v12);
  Mtx34_rotateX(&v13, (unsigned int *)&v10);
  v15 = v15 + (float)((float)((float)(v13.n64_f32[0] * 0.0) - (float)(v13.n64_f32[1] * 7.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * 7.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * 7.0)) + (float)(v22 * 0.0));
  v8 = **(_DWORD **)(a1 + 6100);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v8 + 60))(v8, &v13);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 68))(v8, a1 + 144);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 52))(v8);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 56))(v8);
}
