/* sub_602D1910
 * address: 0x602D1910   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D1910(int a1, int a2)
{
  unsigned int v4; // r1
  unsigned int v5; // r2
  unsigned int v7; // [sp+0h] [bp-68h] BYREF
  unsigned int v8; // [sp+4h] [bp-64h] BYREF
  unsigned int v9; // [sp+8h] [bp-60h] BYREF
  float32x2_t v10; // [sp+10h] [bp-58h] BYREF
  float v11; // [sp+18h] [bp-50h]
  float v12; // [sp+1Ch] [bp-4Ch]
  float v13; // [sp+20h] [bp-48h]
  float v14; // [sp+24h] [bp-44h]
  float v15; // [sp+28h] [bp-40h]
  float v16; // [sp+2Ch] [bp-3Ch]
  float v17; // [sp+30h] [bp-38h]
  float v18; // [sp+34h] [bp-34h]
  float v19; // [sp+38h] [bp-30h]
  float v20; // [sp+3Ch] [bp-2Ch]

  v4 = FIELD_U32(a1, 24);
  v5 = FIELD_U32(a1, 28);
  v7 = FIELD_U32(a1, 20);
  v8 = v4;
  v9 = v5;
  v10.n64_u64[0] = 1065353216;
  v11 = 0.0;
  v13 = 0.0;
  v14 = 1.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v12 = FIELD_F32(a1, 8);
  v16 = FIELD_F32(a1, 12);
  v20 = FIELD_F32(a1, 16);
  Mtx34_rotateY(&v10, &v8);
  Mtx34_rotateX(&v10, &v7);
  v12 = v12 + (float)((float)((float)(v10.n64_f32[1] * 10.0) + (float)(v10.n64_f32[0] * 0.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v14 * 10.0) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v18 * 10.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
  Mtx34_rotateZ(&v10, &v9);
  v12 = v12 + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * 10.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 10.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 10.0)) + (float)(v19 * 0.0));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 60))(**(_DWORD **)(a1 + 4), &v10);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 4) + 68))(**(_DWORD **)(a1 + 4), a2);
  sub_604218E0(*(_DWORD **)(a1 + 4));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 4) + 52))(**(_DWORD **)(a1 + 4));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 4) + 56))(**(_DWORD **)(a1 + 4));
  return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 52))(a1, FIELD_U32(a1, 4));
}
