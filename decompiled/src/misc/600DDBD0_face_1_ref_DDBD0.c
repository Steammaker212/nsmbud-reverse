/* face_1_ref_DDBD0
 * address: 0x600DDBD0   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall face_1_ref_DDBD0(int a1)
{
  int **v2; // r7
  float v3; // s4
  float v4; // s6
  float v5; // s2
  int v6; // r0
  int (__fastcall *v7)(int, float32x2_t *); // r2
  int v8; // r5
  unsigned int v10; // [sp+4h] [bp-9Ch] BYREF
  float32x2_t v11[6]; // [sp+8h] [bp-98h] BYREF
  float v12; // [sp+38h] [bp-68h] BYREF
  float v13; // [sp+3Ch] [bp-64h]
  float v14; // [sp+40h] [bp-60h]
  float32x2_t v15; // [sp+48h] [bp-58h] BYREF
  float v16; // [sp+50h] [bp-50h]
  float v17; // [sp+54h] [bp-4Ch]
  float v18; // [sp+58h] [bp-48h]
  float v19; // [sp+5Ch] [bp-44h]
  float v20; // [sp+60h] [bp-40h]
  float v21; // [sp+64h] [bp-3Ch]
  float v22; // [sp+68h] [bp-38h]
  float v23; // [sp+6Ch] [bp-34h]
  float v24; // [sp+70h] [bp-30h]
  float v25; // [sp+74h] [bp-2Ch]

  v15.n64_u64[0] = 1065353216;
  v16 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v20 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v24 = 1.0;
  v17 = FIELD_F32(a1, 108);
  v21 = FIELD_F32(a1, 112);
  v25 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v15, (unsigned int *)(a1 + 160));
  v17 = v17 + (float)((float)((float)(v15.n64_f32[1] * 16.0) + (float)(v15.n64_f32[0] * 0.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v19 * 16.0) + (float)(v18 * 0.0)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v23 * 16.0) + (float)(v22 * 0.0)) + (float)(v24 * 0.0));
  Mtx34_rotateX(&v15, (unsigned int *)(a1 + 156));
  v17 = v17 + (float)((float)((float)(v15.n64_f32[0] * 0.0) - (float)(v15.n64_f32[1] * 16.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 16.0)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v22 * 0.0) - (float)(v23 * 16.0)) + (float)(v24 * 0.0));
  Mtx34_rotateZ(&v15, (unsigned int *)(a1 + 164));
  v2 = (int **)(a1 + 7096);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7096) + 60))(**(_DWORD **)(a1 + 7096), &v15);
  v14 = FIELD_F32(a1, 152);
  v13 = FIELD_F32(a1, 148);
  v12 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v3 = FIELD_F32(a1, 152);
    v4 = FIELD_F32(a1, 6700);
    v5 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v12 = v12 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.7);
    v13 = v13 + (float)(v5 * 0.7);
    v14 = v14 + (float)((float)(v4 - v3) * 0.7);
  }
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v2 + 68))(**v2, &v12);
  sub_604218E0(*v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 52))(**v2);
  v6 = **v2;
  v7 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v6 + 84);
  v11[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v11[0].n64_u32[1] = (unsigned __int32)"face_1";
  v8 = v7(v6, v11);
  v10 = FIELD_U32(a1, 7168);
  sub_604302C8(**v2, v8, v11);
  Mtx34_rotateZ(v11, &v10);
  Mtx34_rotateY(v11, (unsigned int *)(a1 + 8124));
  (*(void (__fastcall **)(int, int, float32x2_t *, int *))(*(_DWORD *)**v2 + 96))(**v2, v8, v11, &dword_60B3B98C);
  return (*(int (__fastcall **)(int))(*(_DWORD *)**v2 + 56))(**v2);
}
