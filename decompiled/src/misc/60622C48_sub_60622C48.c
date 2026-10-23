/* sub_60622C48
 * address: 0x60622C48   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60622C48(int a1)
{
  unsigned int *v1; // r4
  float v2; // s16
  float v3; // s18
  float v4; // r5
  float v5; // s20
  float v6; // s22
  double OwnerScale; // d0
  _DWORD *v8; // t1
  float32x2_t v10; // [sp+0h] [bp-60h] BYREF
  float v11; // [sp+8h] [bp-58h]
  float v12; // [sp+Ch] [bp-54h]
  float v13; // [sp+10h] [bp-50h]
  float v14; // [sp+14h] [bp-4Ch]
  float v15; // [sp+18h] [bp-48h]
  float v16; // [sp+1Ch] [bp-44h]
  float v17; // [sp+20h] [bp-40h]
  float v18; // [sp+24h] [bp-3Ch]
  float v19; // [sp+28h] [bp-38h]
  float v20; // [sp+2Ch] [bp-34h]

  v1 = (unsigned int *)a1;
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_F32(a1, 7400);
  v6 = FIELD_F32(a1, 7360);
  OwnerScale = ActorScaler_getOwnerScale((ActorScaler *)(a1 + 7392));
  v10.n64_u64[0] = 1065353216;
  v11 = 0.0;
  v13 = 0.0;
  v14 = 1.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v12 = v3 + v6;
  v16 = v2 + (float)((float)(v5 - *((float *)&OwnerScale + 1)) * 36.0);
  v20 = v4;
  Mtx34_rotateY(&v10, v1 + 40);
  Mtx34_rotateX(&v10, v1 + 39);
  v12 = v12 + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * 64.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 64.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 64.0)) + (float)(v19 * 0.0));
  Mtx34_rotateZ(&v10, v1 + 41);
  v12 = v12 + (float)((float)((float)(v10.n64_f32[1] * 64.0) + (float)(v10.n64_f32[0] * 0.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v14 * 64.0) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v18 * 64.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
  v8 = (_DWORD *)v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v8 + 60))(*v8, &v10);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, v1 + 274);
  sub_604183EC(**(_DWORD **)(*v1 + 28) + 4);
  return ModelWrapper_updateModel((ModelWrapper *)*v1);
}
