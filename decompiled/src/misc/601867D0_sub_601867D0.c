/* sub_601867D0
 * address: 0x601867D0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601867D0(int a1, ModelWrapper *a2, float a3)
{
  int result; // r0
  float v7; // s0
  float v8; // r0
  float v9; // r1
  float32x2_t v10; // [sp+0h] [bp-48h] BYREF
  float v11; // [sp+8h] [bp-40h]
  float v12; // [sp+Ch] [bp-3Ch]
  float v13; // [sp+10h] [bp-38h]
  float v14; // [sp+14h] [bp-34h]
  float v15; // [sp+18h] [bp-30h]
  float v16; // [sp+1Ch] [bp-2Ch]
  float v17; // [sp+20h] [bp-28h]
  float v18; // [sp+24h] [bp-24h]
  float v19; // [sp+28h] [bp-20h]
  float v20; // [sp+2Ch] [bp-1Ch]

  ModelWrapper_updateAnims(a2);
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v7 = FIELD_F32(a1, 84);
    v8 = FIELD_F32(a1, 88);
    v9 = FIELD_F32(a1, 80);
    v10.n64_u64[0] = 1065353216;
    v11 = 0.0;
    v13 = 0.0;
    v14 = 1.0;
    v15 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
    v19 = 1.0;
    v12 = v9;
    v16 = v7 + a3;
    v20 = v8;
    Mtx34_rotateY(&v10, (unsigned int *)(a1 + 180));
    Mtx34_rotateX(&v10, (unsigned int *)(a1 + 176));
    Mtx34_rotateZ(&v10, (unsigned int *)(a1 + 184));
    v12 = v12 + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * a3)) + (float)(v11 * 0.0));
    v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * a3)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * a3)) + (float)(v19 * 0.0));
    (*(void (__fastcall **)(void *, float32x2_t *))(*(_DWORD *)FIELD_U32(a2, 0x0) + 60))(FIELD_U32(a2, 0x0), &v10);
    (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(a2, 0x0) + 68))(FIELD_U32(a2, 0x0), a1 + 128);
    return ModelWrapper_updateModel(a2);
  }
  return result;
}
