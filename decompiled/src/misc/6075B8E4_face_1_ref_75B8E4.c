/* face_1_ref_75B8E4
 * address: 0x6075B8E4   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall face_1_ref_75B8E4(int a1, int a2)
{
  ModelWrapper *v4; // r0
  void *model; // r4
  float *v6; // r0
  float v7; // r2
  float v8; // r3
  float v9; // r1
  float v10; // r2
  int (__fastcall *v11)(void *, unsigned int *); // r2
  void (__fastcall *v12)(void *, int, float32x2_t *); // r7
  int v13; // r0
  float v14; // s0
  int v15; // r5
  float v16; // s0
  unsigned int v18[2]; // [sp+0h] [bp-70h] BYREF
  float32x2_t v19; // [sp+8h] [bp-68h] BYREF
  float v20; // [sp+10h] [bp-60h]
  float v21; // [sp+14h] [bp-5Ch]
  float v22; // [sp+18h] [bp-58h]
  float v23; // [sp+1Ch] [bp-54h]
  float v24; // [sp+20h] [bp-50h]
  float v25; // [sp+24h] [bp-4Ch]
  float v26; // [sp+28h] [bp-48h]
  float v27; // [sp+2Ch] [bp-44h]
  float v28; // [sp+30h] [bp-40h]
  float v29; // [sp+34h] [bp-3Ch]
  float v30[4]; // [sp+38h] [bp-38h] BYREF
  float v31[10]; // [sp+48h] [bp-28h] BYREF

  v4 = *(ModelWrapper **)(a1 + 24);
  model = FIELD_U32(v4, 0x0);
  ModelWrapper_updateAnims(v4);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)model + 60))(model, a2);
  v6 = (float *)(*(int (__fastcall **)(void *))(*(_DWORD *)model + 72))(model);
  v7 = v6[1];
  v8 = v6[2];
  v31[0] = *v6;
  v31[1] = v7;
  v31[2] = v8;
  v9 = *v6;
  v10 = v6[1];
  v30[2] = v6[2];
  v30[1] = v10;
  v30[0] = v9;
  v30[0] = FIELD_F32(a1, 32) * v9;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 68))(model, v30);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 24));
  v11 = *(int (__fastcall **)(void *, unsigned int *))(*(_DWORD *)model + 84);
  v12 = *(void (__fastcall **)(void *, int, float32x2_t *))(*(_DWORD *)model + 108);
  v18[0] = (unsigned int)&sead__SafeStringBase__vtable;
  v18[1] = (unsigned int)"face_1";
  v13 = v11(model, v18);
  v12(model, v13, &v19);
  v18[0] = 0;
  Mtx34_rotateX(&v19, v18);
  v18[0] = 0x40000000;
  Mtx34_rotateY(&v19, v18);
  v18[0] = 0x80000000;
  Mtx34_rotateZ(&v19, v18);
  v21 = v21 + (float)((float)((float)(-1.0 * v19.n64_f32[1]) + (float)(0.0 * v19.n64_f32[0])) + (float)(0.0 * v20));
  v25 = v25 + (float)((float)((float)(-1.0 * v23) + (float)(0.0 * v22)) + (float)(0.0 * v24));
  v29 = v29 + (float)((float)((float)(-1.0 * v27) + (float)(0.0 * v26)) + (float)(0.0 * v28));
  v14 = 0.23 * (float)(1.0 / FIELD_F32(a1, 32));
  v19.n64_f32[0] = v19.n64_f32[0] * v14;
  v22 = v14 * v22;
  v26 = v14 * v26;
  v19.n64_f32[1] = 0.23 * v19.n64_f32[1];
  v23 = 0.23 * v23;
  v27 = 0.23 * v27;
  v20 = 0.23 * v20;
  v24 = 0.23 * v24;
  v28 = 0.23 * v28;
  v15 = FIELD_U32(a1, 40);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v15 + 60))(v15, &v19);
  v16 = sub_604373E4(v15);
  return (*(int (__fastcall **)(void *, float *, float))(*(_DWORD *)model + 68))(model, v31, v16);
}
