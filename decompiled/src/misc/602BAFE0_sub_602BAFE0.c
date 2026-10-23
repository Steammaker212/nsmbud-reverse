/* sub_602BAFE0
 * address: 0x602BAFE0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BAFE0(int a1)
{
  unsigned int *v1; // r4
  _DWORD *v2; // t1
  float32x2_t v4; // [sp+0h] [bp-50h] BYREF
  float v5; // [sp+8h] [bp-48h]
  float v6; // [sp+Ch] [bp-44h]
  float v7; // [sp+10h] [bp-40h]
  float v8; // [sp+14h] [bp-3Ch]
  float v9; // [sp+18h] [bp-38h]
  float v10; // [sp+1Ch] [bp-34h]
  float v11; // [sp+20h] [bp-30h]
  float v12; // [sp+24h] [bp-2Ch]
  float v13; // [sp+28h] [bp-28h]
  float v14; // [sp+2Ch] [bp-24h]

  v1 = (unsigned int *)a1;
  v4.n64_u64[0] = 1065353216;
  v5 = 0.0;
  v7 = 0.0;
  v8 = 1.0;
  v9 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 1.0;
  v6 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 112);
  v14 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v4, (unsigned int *)(a1 + 160));
  v6 = v6 + (float)((float)((float)(v4.n64_f32[1] * 12.0) + (float)(v4.n64_f32[0] * 0.0)) + (float)(v5 * 0.0));
  v10 = v10 + (float)((float)((float)(v8 * 12.0) + (float)(v7 * 0.0)) + (float)(v9 * 0.0));
  v14 = v14 + (float)((float)((float)(v12 * 12.0) + (float)(v11 * 0.0)) + (float)(v13 * 0.0));
  Mtx34_rotateX(&v4, v1 + 39);
  v6 = v6 + (float)((float)((float)(v4.n64_f32[0] * 0.0) - (float)(v4.n64_f32[1] * 12.0)) + (float)(v5 * 0.0));
  v10 = v10 + (float)((float)((float)(v7 * 0.0) - (float)(v8 * 12.0)) + (float)(v9 * 0.0));
  v14 = v14 + (float)((float)((float)(v11 * 0.0) - (float)(v12 * 12.0)) + (float)(v13 * 0.0));
  Mtx34_rotateZ(&v4, v1 + 41);
  v2 = (_DWORD *)v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v2 + 60))(*v2, &v4);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, v1 + 83);
  return sub_60421880(*v1);
}
