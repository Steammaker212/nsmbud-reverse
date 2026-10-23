/* sub_601454C8
 * address: 0x601454C8   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601454C8(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float32x2_t v9; // [sp+0h] [bp-60h] BYREF
  float v10; // [sp+8h] [bp-58h]
  float v11; // [sp+Ch] [bp-54h]
  float v12; // [sp+10h] [bp-50h]
  float v13; // [sp+14h] [bp-4Ch]
  float v14; // [sp+18h] [bp-48h]
  float v15; // [sp+1Ch] [bp-44h]
  float v16; // [sp+20h] [bp-40h]
  float v17; // [sp+24h] [bp-3Ch]
  float v18; // [sp+28h] [bp-38h]
  float v19; // [sp+2Ch] [bp-34h]
  unsigned int v20; // [sp+30h] [bp-30h] BYREF
  unsigned int v21; // [sp+34h] [bp-2Ch] BYREF
  unsigned int v22; // [sp+38h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v22 = v4;
  v21 = v3;
  v20 = v2;
  v9.n64_u64[0] = 1065353216;
  v10 = 0.0;
  v12 = 0.0;
  v13 = 1.0;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 1.0;
  v11 = v7;
  v15 = v5;
  v19 = v6;
  Mtx34_rotateY(&v9, &v21);
  v11 = v11 + (float)((float)((float)(v9.n64_f32[1] * 10.0) + (float)(v9.n64_f32[0] * 0.0)) + (float)(v10 * 0.0));
  v15 = v15 + (float)((float)((float)(v13 * 10.0) + (float)(v12 * 0.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v17 * 10.0) + (float)(v16 * 0.0)) + (float)(v18 * 0.0));
  Mtx34_rotateX(&v9, &v20);
  v11 = v11 + (float)((float)((float)(v9.n64_f32[0] * 0.0) - (float)(v9.n64_f32[1] * 10.0)) + (float)(v10 * 0.0));
  v15 = v15 + (float)((float)((float)(v12 * 0.0) - (float)(v13 * 10.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * 10.0)) + (float)(v18 * 0.0));
  Mtx34_rotateZ(&v9, &v22);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6472) + 60))(**(_DWORD **)(a1 + 6472), &v9);
  return (*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6472) + 68))(**(_DWORD **)(a1 + 6472), a1 + 6444);
}
