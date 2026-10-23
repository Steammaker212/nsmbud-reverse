/* sub_6072FC70
 * address: 0x6072FC70   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072FC70(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  float v8; // s6
  float v9; // s0
  float v10; // s12
  float v11; // s2
  float v12; // s0
  float32x2_t v14; // [sp+0h] [bp-50h] BYREF
  float v15; // [sp+8h] [bp-48h]
  int v16; // [sp+Ch] [bp-44h]
  float v17; // [sp+10h] [bp-40h]
  float v18; // [sp+14h] [bp-3Ch]
  float v19; // [sp+18h] [bp-38h]
  int v20; // [sp+1Ch] [bp-34h]
  float v21; // [sp+20h] [bp-30h]
  float v22; // [sp+24h] [bp-2Ch]
  float v23; // [sp+28h] [bp-28h]
  int v24; // [sp+2Ch] [bp-24h]
  unsigned int v25; // [sp+30h] [bp-20h] BYREF
  unsigned int v26; // [sp+34h] [bp-1Ch] BYREF
  unsigned int v27; // [sp+38h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_U32(a1, 112);
  v6 = FIELD_U32(a1, 116);
  v7 = FIELD_U32(a1, 108);
  v27 = v4;
  v26 = v3;
  v25 = v2;
  v14.n64_u64[0] = 1065353216;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 1.0;
  v19 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 1.0;
  v16 = v7;
  v20 = v5;
  v24 = v6;
  Mtx34_rotateY(&v14, &v26);
  Mtx34_rotateX(&v14, &v25);
  Mtx34_rotateZ(&v14, &v27);
  v8 = FIELD_F32(a1, 152);
  v9 = FIELD_F32(a1, 6340);
  v10 = v9 + 1.0;
  v11 = FIELD_F32(a1, 144) * (float)(v9 + 1.0);
  v12 = (float)(1.0 - v9) * FIELD_F32(a1, 148);
  v14.n64_f32[0] = v11 * v14.n64_f32[0];
  v17 = v11 * v17;
  v21 = v11 * v21;
  v14.n64_f32[1] = v12 * v14.n64_f32[1];
  v18 = v12 * v18;
  v22 = v12 * v22;
  v15 = (float)(v10 * v8) * v15;
  v19 = (float)(v10 * v8) * v19;
  v23 = (float)(v10 * v8) * v23;
  ((void (__fastcall *)(_DWORD, float32x2_t *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 6300) + 4), &v14);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 6300) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 6300) + 4));
}
