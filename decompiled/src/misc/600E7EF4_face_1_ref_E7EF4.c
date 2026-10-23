/* face_1_ref_E7EF4
 * address: 0x600E7EF4   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall face_1_ref_E7EF4(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  int **v8; // r4
  float v9; // s16
  float v10; // s18
  float v11; // s20
  float v12; // s24
  float v13; // s26
  float v14; // s22
  float v15; // s0
  int v16; // r0
  int (__fastcall *v17)(int, float32x2_t *); // r2
  int v18; // r5
  _DWORD v20[3]; // [sp+4h] [bp-CCh] BYREF
  float32x2_t v21; // [sp+10h] [bp-C0h] BYREF
  float v22; // [sp+18h] [bp-B8h]
  float32x2_t v23; // [sp+40h] [bp-90h] BYREF
  float v24; // [sp+48h] [bp-88h]
  float v25; // [sp+4Ch] [bp-84h]
  float v26; // [sp+50h] [bp-80h]
  float v27; // [sp+54h] [bp-7Ch]
  float v28; // [sp+58h] [bp-78h]
  float v29; // [sp+5Ch] [bp-74h]
  float v30; // [sp+60h] [bp-70h]
  float v31; // [sp+64h] [bp-6Ch]
  float v32; // [sp+68h] [bp-68h]
  float v33; // [sp+6Ch] [bp-64h]
  unsigned int v34; // [sp+70h] [bp-60h] BYREF
  unsigned int v35; // [sp+74h] [bp-5Ch] BYREF
  unsigned int v36; // [sp+78h] [bp-58h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v23.n64_u64[0] = 1065353216;
  v36 = v4;
  v35 = v3;
  v34 = v2;
  v24 = 0.0;
  v28 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 1.0;
  v25 = v7;
  v26 = 0.0;
  v27 = 1.0;
  v29 = v5;
  v33 = v6;
  Mtx34_rotateY(&v23, &v35);
  v25 = v25 + (float)((float)((float)(v23.n64_f32[1] * 16.0) + (float)(v23.n64_f32[0] * 0.0)) + (float)(v24 * 0.0));
  v29 = v29 + (float)((float)((float)(v27 * 16.0) + (float)(v26 * 0.0)) + (float)(v28 * 0.0));
  v33 = v33 + (float)((float)((float)(v31 * 16.0) + (float)(v30 * 0.0)) + (float)(v32 * 0.0));
  Mtx34_rotateX(&v23, &v34);
  v25 = v25 + (float)((float)((float)(v23.n64_f32[0] * 0.0) - (float)(v23.n64_f32[1] * 16.0)) + (float)(v24 * 0.0));
  v29 = v29 + (float)((float)((float)(v26 * 0.0) - (float)(v27 * 16.0)) + (float)(v28 * 0.0));
  v33 = v33 + (float)((float)((float)(v30 * 0.0) - (float)(v31 * 16.0)) + (float)(v32 * 0.0));
  Mtx34_rotateZ(&v23, &v36);
  v8 = (int **)(a1 + 7096);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7096) + 60))(**(_DWORD **)(a1 + 7096), &v23);
  v22 = FIELD_F32(a1, 152);
  v21.n64_u64[0] = *(unsigned __int64 *)(a1 + 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v9 = FIELD_F32(a1, 144);
    v10 = FIELD_F32(a1, 148);
    v11 = FIELD_F32(a1, 152);
    v12 = FIELD_F32(a1, 6696);
    v13 = FIELD_F32(a1, 6692);
    v14 = FIELD_F32(a1, 6700);
    v15 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1132))(a1);
    v21.n64_f32[0] = v21.n64_f32[0] + (float)((float)(v13 - v9) * v15);
    v21.n64_f32[1] = v21.n64_f32[1] + (float)((float)(v12 - v10) * v15);
    v22 = v22 + (float)((float)(v14 - v11) * v15);
  }
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)**v8 + 68))(**v8, &v21);
  sub_604218E0(*v8);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v8 + 52))(**v8);
  v16 = **v8;
  v17 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v16 + 84);
  v21.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v21.n64_u32[1] = (unsigned __int32)"face_1";
  v20[0] = 1065353216;
  v20[1] = 1065353216;
  v20[2] = 1065353216;
  v18 = v17(v16, &v21);
  (*(void (__fastcall **)(int, int, float32x2_t *, _DWORD *))(*(_DWORD *)**v8 + 100))(**v8, v18, &v21, v20);
  Mtx34_rotateZ(&v21, (unsigned int *)(a1 + 7168));
  (*(void (__fastcall **)(int, int, float32x2_t *, _DWORD *))(*(_DWORD *)**v8 + 96))(**v8, v18, &v21, v20);
  return (*(int (__fastcall **)(int))(*(_DWORD *)**v8 + 56))(**v8);
}
