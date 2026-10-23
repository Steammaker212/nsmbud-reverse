/* sub_606069FC
 * address: 0x606069FC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606069FC(int a1, float *a2, int a3)
{
  float v4; // r0
  float v5; // r1
  int v6; // r0
  void (__fastcall *v7)(int, unsigned int *); // r2
  unsigned int v9[3]; // [sp+4h] [bp-4Ch] BYREF
  float32x2_t v10; // [sp+10h] [bp-40h] BYREF
  float v11; // [sp+18h] [bp-38h]
  float v12; // [sp+1Ch] [bp-34h]
  float v13; // [sp+20h] [bp-30h]
  float v14; // [sp+24h] [bp-2Ch]
  float v15; // [sp+28h] [bp-28h]
  float v16; // [sp+2Ch] [bp-24h]
  float v17; // [sp+30h] [bp-20h]
  float v18; // [sp+34h] [bp-1Ch]
  float v19; // [sp+38h] [bp-18h]
  float v20; // [sp+3Ch] [bp-14h]

  v4 = *a2;
  v5 = a2[1];
  v10.n64_u64[0] = 1065353216;
  v11 = 0.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v12 = v4;
  v13 = 0.0;
  v14 = 1.0;
  v16 = v5;
  v20 = 7750.0;
  v9[0] = -a3;
  Mtx34_rotateZ(&v10, v9);
  v12 = v12 + (float)((float)((float)(v10.n64_f32[1] * 0.0) + (float)(v10.n64_f32[0] * 163.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v14 * 0.0) + (float)(v13 * 163.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v18 * 0.0) + (float)(v17 * 163.0)) + (float)(v19 * 0.0));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 60))(**(_DWORD **)(a1 + 4), &v10);
  v6 = **(_DWORD **)(a1 + 4);
  v7 = *(void (__fastcall **)(int, unsigned int *))(*(_DWORD *)v6 + 68);
  v9[0] = 1069547520;
  v9[1] = 1069547520;
  v9[2] = 1065353216;
  v7(v6, v9);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 4));
}
