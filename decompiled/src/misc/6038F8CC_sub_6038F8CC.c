/* sub_6038F8CC
 * address: 0x6038F8CC   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038F8CC(int a1)
{
  _DWORD **v1; // r4
  unsigned int v2; // r1
  unsigned int v3; // r2
  _DWORD *v4; // t1
  float32x2_t v6; // [sp+0h] [bp-60h] BYREF
  float v7; // [sp+8h] [bp-58h]
  float v8; // [sp+Ch] [bp-54h]
  float v9; // [sp+10h] [bp-50h]
  float v10; // [sp+14h] [bp-4Ch]
  float v11; // [sp+18h] [bp-48h]
  float v12; // [sp+1Ch] [bp-44h]
  float v13; // [sp+20h] [bp-40h]
  float v14; // [sp+24h] [bp-3Ch]
  float v15; // [sp+28h] [bp-38h]
  float v16; // [sp+2Ch] [bp-34h]
  unsigned int v17; // [sp+30h] [bp-30h] BYREF
  unsigned int v18; // [sp+34h] [bp-2Ch] BYREF
  unsigned int v19; // [sp+38h] [bp-28h] BYREF

  v1 = (_DWORD **)a1;
  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v17 = FIELD_U32(a1, 156);
  v18 = v2;
  v19 = v3;
  v6.n64_u64[0] = 1065353216;
  v7 = 0.0;
  v9 = 0.0;
  v10 = 1.0;
  v11 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 1.0;
  v8 = FIELD_F32(a1, 108);
  v12 = FIELD_F32(a1, 112);
  v16 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v6, &v18);
  v8 = v8 + (float)((float)((float)(v6.n64_f32[1] * 12.0) + (float)(v6.n64_f32[0] * 0.0)) + (float)(v7 * 0.0));
  v12 = v12 + (float)((float)((float)(v10 * 12.0) + (float)(v9 * 0.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v14 * 12.0) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
  Mtx34_rotateX(&v6, &v17);
  v8 = v8 + (float)((float)((float)(v6.n64_f32[0] * 0.0) - (float)(v6.n64_f32[1] * 12.0)) + (float)(v7 * 0.0));
  v12 = v12 + (float)((float)((float)(v9 * 0.0) - (float)(v10 * 12.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 12.0)) + (float)(v15 * 0.0));
  Mtx34_rotateZ(&v6, &v19);
  v4 = v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v4 + 60))(*v4, &v6);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v1 + 68))(**v1, v1 + 192);
  return sub_60421880(*v1);
}
