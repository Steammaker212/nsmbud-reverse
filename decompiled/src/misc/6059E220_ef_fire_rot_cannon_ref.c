/* ef_fire_rot_cannon_ref
 * address: 0x6059E220   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ef_fire_rot_cannon_ref(int a1)
{
  int **v2; // r7
  float v3; // s0
  float v4; // s2
  float v5; // s4
  int *v6; // r5
  int v7; // r0
  int (__fastcall *v8)(int *, int *); // r2
  void (__fastcall *v9)(int *, int, float *); // r6
  int v10; // r0
  float v11; // s2
  float v12; // s16
  int result; // r0
  int v14; // [sp+0h] [bp-D8h] BYREF
  float v15; // [sp+4h] [bp-D4h]
  int v16; // [sp+8h] [bp-D0h]
  float v17[12]; // [sp+Ch] [bp-CCh] BYREF
  float v18; // [sp+3Ch] [bp-9Ch] BYREF
  float v19; // [sp+40h] [bp-98h]
  float v20; // [sp+44h] [bp-94h]
  float32x2_t v21; // [sp+48h] [bp-90h] BYREF
  int v22; // [sp+54h] [bp-84h]
  int v23; // [sp+64h] [bp-74h]
  int v24; // [sp+74h] [bp-64h]
  float32x2_t v25; // [sp+78h] [bp-60h] BYREF
  float v26; // [sp+80h] [bp-58h]
  float v27; // [sp+84h] [bp-54h]
  float v28; // [sp+88h] [bp-50h]
  float v29; // [sp+8Ch] [bp-4Ch]
  float v30; // [sp+90h] [bp-48h]
  float v31; // [sp+94h] [bp-44h]
  float v32; // [sp+98h] [bp-40h]
  float v33; // [sp+9Ch] [bp-3Ch]
  float v34; // [sp+A0h] [bp-38h]
  float v35; // [sp+A4h] [bp-34h]

  v2 = (int **)(a1 + 6120);
  sub_6087D120(*(_DWORD *)(FIELD_U32(a1, 6120) + 68));
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  v25.n64_u64[0] = 1065353216;
  v26 = 0.0;
  v28 = 0.0;
  v29 = 1.0;
  v30 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 1.0;
  v27 = v3 + 0.0;
  v31 = v4 + 8.0;
  v35 = v5 + 0.0;
  Mtx34_rotateZ(&v25, (unsigned int *)(a1 + 164));
  v27 = v27 + (float)((float)((float)(v25.n64_f32[0] * 0.0) - (float)(v25.n64_f32[1] * 8.0)) + (float)(v26 * 0.0));
  v31 = v31 + (float)((float)((float)(v28 * 0.0) - (float)(v29 * 8.0)) + (float)(v30 * 0.0));
  v35 = v35 + (float)((float)((float)(v32 * 0.0) - (float)(v33 * 8.0)) + (float)(v34 * 0.0));
  Mtx34_rotateX(&v25, (unsigned int *)(a1 + 156));
  Mtx34_rotateY(&v25, (unsigned int *)(a1 + 160));
  sub_605C6BE4(a1, &v18);
  v25.n64_f32[0] = v25.n64_f32[0] * v18;
  v28 = v18 * v28;
  v32 = v32 * v18;
  v25.n64_f32[1] = v25.n64_f32[1] * v19;
  v29 = v19 * v29;
  v33 = v33 * v19;
  v26 = v26 * v20;
  v30 = v20 * v30;
  v34 = v34 * v20;
  (*(void (__fastcall **)(int *, float32x2_t *))(**v2 + 60))(*v2, &v25);
  (*(void (__fastcall **)(int *))(**v2 + 52))(*v2);
  (*(void (__fastcall **)(int *, int, float32x2_t *, float *))(**v2 + 100))(*v2, 1, &v21, v17);
  FIELD_U32(a1, 7736) = FIELD_U32(a1, 7740);
  Mtx34_rotateZ(&v21, (unsigned int *)(a1 + 7736));
  (*(void (__fastcall **)(int *, int, float32x2_t *, float *))(**v2 + 96))(*v2, 1, &v21, v17);
  (*(void (__fastcall **)(int *))(**v2 + 56))(*v2);
  (*(void (__fastcall **)(int *, int, float32x2_t *))(**v2 + 108))(*v2, 1, &v21);
  FIELD_U32(a1, 7744) = v22;
  FIELD_U32(a1, 7748) = v23;
  FIELD_U32(a1, 7752) = v24;
  v6 = *v2;
  v7 = **v2;
  v8 = *(int (__fastcall **)(int *, int *))(v7 + 84);
  v9 = *(void (__fastcall **)(int *, int, float *))(v7 + 108);
  v14 = (int)&sead__SafeStringBase__vtable;
  v15 = COERCE_FLOAT("ef_fire_rot_cannon");
  v10 = v8(v6, &v14);
  v9(v6, v10, v17);
  FIELD_F32(a1, 7768) = v17[3];
  FIELD_F32(a1, 7772) = v17[7];
  FIELD_F32(a1, 7776) = v17[11];
  v11 = (float)(unsigned int)(FIELD_U32(a1, 7760) + 4);
  v14 = 1065353216;
  v15 = (float)(v11 * 16.0) / 16.0;
  v16 = 1065353216;
  FIELD_U32(a1, 6412) = FIELD_U32(a1, 7736) + FIELD_U32(a1, 164) - 0x40000000;
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    return sub_605C6F0C((LightSource *)(a1 + 6124), v17, (float *)&v14);
  v12 = FIELD_F32(a1, 512);
  FIELD_F32(a1, 512) = v12 * 0.5;
  result = StageActor__isOffScreen((StageActor *)a1);
  FIELD_F32(a1, 512) = v12;
  if ( !result )
    return sub_605C6F0C((LightSource *)(a1 + 6124), v17, (float *)&v14);
  return result;
}
