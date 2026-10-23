/* sub_60254A28
 * address: 0x60254A28   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60254A28(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, float32x2_t *); // r2
  int v4; // r6
  int v5; // r0
  int (__fastcall *v6)(int, float32x2_t *); // r2
  int v7; // r6
  float v8; // s0
  float v9; // s0
  float v10; // s0
  int v11; // r0
  int (__fastcall *v12)(int, float32x2_t *); // r2
  int v13; // r6
  float v14; // s0
  float v15; // s0
  float v16; // s0
  int v17; // r0
  int (__fastcall *v18)(int, float32x2_t *); // r2
  int v19; // r6
  float v20; // s0
  float v21; // s0
  float v22; // s0
  float32x2_t v24; // [sp+0h] [bp-50h] BYREF
  float v25; // [sp+8h] [bp-48h]
  float v26; // [sp+10h] [bp-40h]
  float v27; // [sp+14h] [bp-3Ch]
  float v28; // [sp+18h] [bp-38h]
  float v29; // [sp+20h] [bp-30h]
  float v30; // [sp+24h] [bp-2Ch]
  float v31; // [sp+28h] [bp-28h]

  v2 = **(_DWORD **)(a1 + 4);
  v3 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v2 + 84);
  v24.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v24.n64_u32[1] = (unsigned __int32)"skl_root";
  v4 = v3(v2, &v24);
  sub_604302C8(**(_DWORD **)(a1 + 4), v4, &v24);
  Mtx34_rotateZ(&v24, (unsigned int *)(a1 + 52));
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)(a1 + 4) + 96))(
    **(_DWORD **)(a1 + 4),
    v4,
    &v24,
    &dword_60B3B98C);
  v5 = **(_DWORD **)(a1 + 4);
  v6 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v5 + 84);
  v24.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v24.n64_u32[1] = (unsigned __int32)"nose";
  v7 = v6(v5, &v24);
  sub_604302C8(**(_DWORD **)(a1 + 4), v7, &v24);
  v8 = FIELD_F32(a1, 220);
  v24.n64_f32[0] = v24.n64_f32[0] * v8;
  v26 = v8 * v26;
  v29 = v29 * v8;
  v9 = FIELD_F32(a1, 224);
  v24.n64_f32[1] = v24.n64_f32[1] * v9;
  v27 = v9 * v27;
  v30 = v30 * v9;
  v10 = FIELD_F32(a1, 228);
  v25 = v25 * v10;
  v28 = v10 * v28;
  v31 = v31 * v10;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)(a1 + 4) + 96))(
    **(_DWORD **)(a1 + 4),
    v7,
    &v24,
    &dword_60B3B98C);
  v11 = **(_DWORD **)(a1 + 4);
  v12 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v11 + 84);
  v24.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v24.n64_u32[1] = (unsigned __int32)"flower_1";
  v13 = v12(v11, &v24);
  sub_604302C8(**(_DWORD **)(a1 + 4), v13, &v24);
  v14 = FIELD_F32(a1, 196);
  v24.n64_f32[0] = v24.n64_f32[0] * v14;
  v26 = v14 * v26;
  v29 = v29 * v14;
  v15 = FIELD_F32(a1, 200);
  v24.n64_f32[1] = v24.n64_f32[1] * v15;
  v27 = v15 * v27;
  v30 = v30 * v15;
  v16 = FIELD_F32(a1, 204);
  v25 = v25 * v16;
  v28 = v16 * v28;
  v31 = v31 * v16;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)(a1 + 4) + 96))(
    **(_DWORD **)(a1 + 4),
    v13,
    &v24,
    &dword_60B3B98C);
  v17 = **(_DWORD **)(a1 + 4);
  v18 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v17 + 84);
  v24.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v24.n64_u32[1] = (unsigned __int32)"flower_2";
  v19 = v18(v17, &v24);
  sub_604302C8(**(_DWORD **)(a1 + 4), v19, &v24);
  v20 = FIELD_F32(a1, 208);
  v24.n64_f32[0] = v24.n64_f32[0] * v20;
  v26 = v20 * v26;
  v29 = v29 * v20;
  v21 = FIELD_F32(a1, 212);
  v24.n64_f32[1] = v24.n64_f32[1] * v21;
  v27 = v21 * v27;
  v30 = v30 * v21;
  v22 = FIELD_F32(a1, 216);
  v25 = v25 * v22;
  v28 = v22 * v28;
  v31 = v31 * v22;
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)(a1 + 4) + 96))(
           **(_DWORD **)(a1 + 4),
           v19,
           &v24,
           &dword_60B3B98C);
}
