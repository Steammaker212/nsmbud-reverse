/* body_center_ref
 * address: 0x603D85CC   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall body_center_ref(int a1)
{
  int v1; // r4
  unsigned int v2; // r1
  unsigned int v3; // r2
  float v4; // s4
  float v5; // s0
  float v6; // s2
  int **v7; // r7
  float *v8; // r5
  float *v9; // r6
  int v10; // t1
  int v11; // r0
  int (__fastcall *v12)(int, float *); // r2
  int v13; // r0
  float v14; // r0
  float v15; // r1
  float v16; // r2
  float v17; // s2
  float v18; // s8
  float v19; // s4
  float v20; // s10
  float result; // s0
  float v22; // [sp+0h] [bp-98h] BYREF
  float v23; // [sp+4h] [bp-94h]
  float v24; // [sp+8h] [bp-90h]
  float v25; // [sp+Ch] [bp-8Ch]
  float v26; // [sp+10h] [bp-88h]
  float v27; // [sp+14h] [bp-84h]
  float v28; // [sp+18h] [bp-80h]
  float v29; // [sp+1Ch] [bp-7Ch]
  float v30; // [sp+20h] [bp-78h]
  float v31; // [sp+24h] [bp-74h]
  float v32; // [sp+28h] [bp-70h]
  float v33; // [sp+2Ch] [bp-6Ch]
  unsigned int v34; // [sp+30h] [bp-68h] BYREF
  unsigned int v35; // [sp+34h] [bp-64h] BYREF
  unsigned int v36; // [sp+38h] [bp-60h] BYREF
  float32x2_t v37; // [sp+40h] [bp-58h] BYREF
  float v38; // [sp+48h] [bp-50h]
  float v39; // [sp+4Ch] [bp-4Ch]
  float v40; // [sp+50h] [bp-48h]
  float v41; // [sp+54h] [bp-44h]
  float v42; // [sp+58h] [bp-40h]
  float v43; // [sp+5Ch] [bp-3Ch]
  float v44; // [sp+60h] [bp-38h]
  float v45; // [sp+64h] [bp-34h]
  float v46; // [sp+68h] [bp-30h]
  float v47; // [sp+6Ch] [bp-2Ch]

  v1 = a1;
  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v4 = FIELD_F32(a1, 108) + 0.0;
  v5 = FIELD_F32(a1, 112) + 0.0;
  v6 = FIELD_F32(a1, 116) + 12.0;
  v34 = FIELD_U32(a1, 156);
  v35 = v2;
  v36 = v3;
  v37.n64_u64[0] = 1065353216;
  v38 = 0.0;
  v40 = 0.0;
  v41 = 1.0;
  v42 = 0.0;
  v44 = 0.0;
  v45 = 0.0;
  v46 = 1.0;
  v39 = v4;
  v43 = v5;
  v47 = v6;
  Mtx34_rotateY(&v37, &v35);
  Mtx34_rotateX(&v37, &v34);
  v39 = v39 + (float)((float)((float)(v37.n64_f32[1] * 0.0) + (float)(v37.n64_f32[0] * 0.0)) - (float)(v38 * 12.0));
  v43 = v43 + (float)((float)((float)(v41 * 0.0) + (float)(v40 * 0.0)) - (float)(v42 * 12.0));
  v47 = v47 + (float)((float)((float)(v45 * 0.0) + (float)(v44 * 0.0)) - (float)(v46 * 12.0));
  Mtx34_rotateZ(&v37, &v36);
  v7 = (int **)(v1 + 6300);
  ModelWrapper_updateAnims(*(ModelWrapper **)(v1 + 6300));
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)**v7 + 60))(**v7, &v37);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v7 + 68))(**v7, v1 + 18620);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v7 + 52))(**v7);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v7 + 56))(**v7);
  v8 = (float *)(v1 + 11776);
  FIELD_U32(v1, 11788) = FIELD_U32(v1, 11776);
  v9 = (float *)(v1 + 11780);
  FIELD_U32(v1, 11792) = FIELD_U32(v1, 11780);
  v10 = FIELD_U32(v1, 11784);
  v1 += 11784;
  FIELD_U32(v1, 12) = v10;
  v11 = **v7;
  v12 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v11 + 84);
  v22 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v23 = COERCE_FLOAT("body_center");
  v13 = v12(v11, &v22);
  (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)**v7 + 108))(**v7, v13, &v22);
  v14 = v25;
  *(float *)(v1 - 20) = v25;
  v15 = v29;
  *(float *)(v1 - 16) = v29;
  v16 = v33;
  *(float *)(v1 - 12) = v33;
  v25 = v14 + (float)((float)((float)(v23 * 0.0) - (float)(v22 * 16.0)) + (float)(v24 * 0.0));
  v17 = v15 + (float)((float)((float)(v27 * 0.0) - (float)(v26 * 16.0)) + (float)(v28 * 0.0));
  v18 = v31;
  v19 = v30;
  v20 = v32;
  *v8 = v25;
  *v9 = v17;
  result = v16 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 16.0)) + (float)(v20 * 0.0));
  *(float *)v1 = result;
  return result;
}
