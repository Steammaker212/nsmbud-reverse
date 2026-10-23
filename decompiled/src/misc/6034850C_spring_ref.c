/* spring_ref
 * address: 0x6034850C   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall spring_ref(int a1)
{
  float v2; // s4
  float v3; // s2
  int v4; // r5
  int (__fastcall *v5)(int, _DWORD *); // r2
  int v6; // r6
  float v7; // s0
  float v9; // [sp+4h] [bp-9Ch] BYREF
  float v10; // [sp+8h] [bp-98h]
  float v11; // [sp+Ch] [bp-94h]
  _DWORD v12[12]; // [sp+10h] [bp-90h] BYREF
  float32x2_t v13; // [sp+40h] [bp-60h] BYREF
  float v14; // [sp+48h] [bp-58h]
  float v15; // [sp+4Ch] [bp-54h]
  float v16; // [sp+50h] [bp-50h]
  float v17; // [sp+54h] [bp-4Ch]
  float v18; // [sp+58h] [bp-48h]
  float v19; // [sp+5Ch] [bp-44h]
  float v20; // [sp+60h] [bp-40h]
  float v21; // [sp+64h] [bp-3Ch]
  float v22; // [sp+68h] [bp-38h]
  float v23; // [sp+6Ch] [bp-34h]

  v13.n64_u64[0] = 1065353216;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 1.0;
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 112) + 12.0;
  v15 = FIELD_F32(a1, 108) + 0.0;
  v19 = v3;
  v23 = v2 + 0.0;
  sub_60832C3C(&v13, (_DWORD *)(a1 + 156));
  v15 = v15 + (float)((float)((float)(v13.n64_f32[0] * 0.0) - (float)(v13.n64_f32[1] * 12.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * 12.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * 12.0)) + (float)(v22 * 0.0));
  v4 = **(_DWORD **)(a1 + 6356);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v4 + 60))(v4, &v13);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 68))(v4, a1 + 6384);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 52))(v4);
  v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 84);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "spring";
  v6 = v5(v4, v12);
  (*(void (__fastcall **)(int, int, _DWORD *, float *))(*(_DWORD *)v4 + 100))(v4, v6, v12, &v9);
  v7 = FIELD_F32(a1, 6412);
  v9 = v7 * v9;
  v10 = v7 * v10;
  v11 = v7 * v11;
  (*(void (__fastcall **)(int, int, _DWORD *, float *))(*(_DWORD *)v4 + 96))(v4, v6, v12, &v9);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 56))(v4);
}
