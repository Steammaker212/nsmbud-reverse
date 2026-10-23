/* sub_606E1CB4
 * address: 0x606E1CB4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E1CB4(int a1)
{
  int v2; // r2
  float v3; // r0
  float v4; // r1
  float v5; // r2
  _DWORD **v6; // r6
  float32x2_t v8; // [sp+0h] [bp-50h] BYREF
  float v9; // [sp+8h] [bp-48h]
  float v10; // [sp+Ch] [bp-44h]
  float v11; // [sp+10h] [bp-40h]
  float v12; // [sp+14h] [bp-3Ch]
  float v13; // [sp+18h] [bp-38h]
  float v14; // [sp+1Ch] [bp-34h]
  float v15; // [sp+20h] [bp-30h]
  float v16; // [sp+24h] [bp-2Ch]
  float v17; // [sp+28h] [bp-28h]
  float v18; // [sp+2Ch] [bp-24h]

  v2 = a1 + 108;
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(v2, 4);
  v5 = FIELD_F32(v2, 8);
  v8.n64_u64[0] = 1065353216;
  v9 = 0.0;
  v11 = 0.0;
  v12 = 1.0;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v10 = v3;
  v14 = v4;
  v18 = v5;
  Mtx34_rotateY(&v8, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v8, (unsigned int *)(a1 + 156));
  v10 = v10 + (float)((float)((float)(v8.n64_f32[1] * 8.0) + (float)(v8.n64_f32[0] * 0.0)) + (float)(v9 * 0.0));
  v14 = v14 + (float)((float)((float)(v12 * 8.0) + (float)(v11 * 0.0)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v16 * 8.0) + (float)(v15 * 0.0)) + (float)(v17 * 0.0));
  Mtx34_rotateZ(&v8, (unsigned int *)(a1 + 164));
  v10 = v10 + (float)((float)((float)(v8.n64_f32[0] * 0.0) - (float)(v8.n64_f32[1] * 8.0)) + (float)(v9 * 0.0));
  v14 = v14 + (float)((float)((float)(v11 * 0.0) - (float)(v12 * 8.0)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v15 * 0.0) - (float)(v16 * 8.0)) + (float)(v17 * 0.0));
  v6 = (_DWORD **)(a1 + 6104);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6104) + 68))(**(_DWORD **)(a1 + 6104), a1 + 144);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v6 + 60))(**v6, &v8);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 52))(**v6);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 56))(**v6);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
}
