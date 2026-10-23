/* Iggy__vf414
 * address: 0x6009D980   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : pure virtual
// 
// Overridden by: None
int __fastcall Iggy__vf414(int a1)
{
  float v2; // s4
  float v3; // s2
  int **v4; // r6
  float v5; // s4
  float v6; // s6
  float v7; // s2
  int v8; // r0
  int (__fastcall *v9)(int, float32x2_t *); // r2
  int v10; // r5
  int v12; // [sp+4h] [bp-9Ch] BYREF
  float32x2_t v13[6]; // [sp+8h] [bp-98h] BYREF
  float v14; // [sp+38h] [bp-68h] BYREF
  float v15; // [sp+3Ch] [bp-64h]
  float v16; // [sp+40h] [bp-60h]
  float32x2_t v17; // [sp+48h] [bp-58h] BYREF
  float v18; // [sp+50h] [bp-50h]
  float v19; // [sp+54h] [bp-4Ch]
  float v20; // [sp+58h] [bp-48h]
  float v21; // [sp+5Ch] [bp-44h]
  float v22; // [sp+60h] [bp-40h]
  float v23; // [sp+64h] [bp-3Ch]
  float v24; // [sp+68h] [bp-38h]
  float v25; // [sp+6Ch] [bp-34h]
  float v26; // [sp+70h] [bp-30h]
  float v27; // [sp+74h] [bp-2Ch]

  v17.n64_u64[0] = 1065353216;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 1.0;
  v22 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v26 = 1.0;
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 112) + 20.0;
  v19 = FIELD_F32(a1, 108) + 0.0;
  v23 = v3;
  v27 = v2 + 0.0;
  Mtx34_rotateX(&v17, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v17, (unsigned int *)(a1 + 164));
  v19 = v19 + (float)((float)((float)(v17.n64_f32[0] * 0.0) - (float)(v17.n64_f32[1] * 20.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * 20.0)) + (float)(v22 * 0.0));
  v27 = v27 + (float)((float)((float)(v24 * 0.0) - (float)(v25 * 20.0)) + (float)(v26 * 0.0));
  Mtx34_rotateY(&v17, (unsigned int *)(a1 + 160));
  v4 = (int **)(a1 + 7096);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7096) + 60))(**(_DWORD **)(a1 + 7096), &v17);
  v16 = FIELD_F32(a1, 152);
  v15 = FIELD_F32(a1, 148);
  v14 = FIELD_F32(a1, 144);
  if ( !FIELD_U8(a1, 6313) )
  {
    v5 = FIELD_F32(a1, 152);
    v6 = FIELD_F32(a1, 6700);
    v7 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
    v14 = v14 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.5);
    v15 = v15 + (float)(v7 * 0.5);
    v16 = v16 + (float)((float)(v6 - v5) * 0.5);
  }
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v4 + 68))(**v4, &v14);
  sub_604218E0(*v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v4 + 52))(**v4);
  v8 = **v4;
  v9 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v8 + 84);
  v13[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v13[0].n64_u32[1] = (unsigned __int32)"face_1";
  v10 = v9(v8, v13);
  v12 = -FIELD_U32(a1, 7168);
  sub_604302C8(**v4, v10, v13);
  Mtx34_rotateZ(v13, (unsigned int *)&v12);
  (*(void (__fastcall **)(int, int, float32x2_t *, int *))(*(_DWORD *)**v4 + 96))(**v4, v10, v13, &dword_60B3B98C);
  return (*(int (__fastcall **)(int))(*(_DWORD *)**v4 + 56))(**v4);
}
