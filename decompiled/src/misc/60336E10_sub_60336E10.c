/* sub_60336E10
 * address: 0x60336E10   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60336E10(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float32x2_t v8; // [sp+0h] [bp-60h] BYREF
  float v9; // [sp+8h] [bp-58h]
  float v10; // [sp+Ch] [bp-54h]
  float v11; // [sp+10h] [bp-50h]
  float v12; // [sp+14h] [bp-4Ch]
  float v13; // [sp+18h] [bp-48h]
  float v14; // [sp+1Ch] [bp-44h]
  float v15; // [sp+20h] [bp-40h]
  float v16; // [sp+24h] [bp-3Ch]
  float v17; // [sp+28h] [bp-38h]
  float v18; // [sp+2Ch] [bp-34h]
  unsigned int v19; // [sp+30h] [bp-30h] BYREF
  unsigned int v20; // [sp+34h] [bp-2Ch] BYREF
  unsigned int v21; // [sp+38h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v4 = FIELD_F32(a1, 108) + 0.0;
  v5 = FIELD_F32(a1, 112) + 8.0;
  v6 = FIELD_F32(a1, 116) + 0.0;
  v19 = FIELD_U32(a1, 156);
  v20 = v2;
  v21 = v3;
  v8.n64_u64[0] = 1065353216;
  v9 = 0.0;
  v11 = 0.0;
  v12 = 1.0;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v10 = v4;
  v14 = v5;
  v18 = v6;
  Mtx34_rotateY(&v8, &v20);
  Mtx34_rotateX(&v8, &v19);
  Mtx34_rotateZ(&v8, &v21);
  v10 = v10 + (float)((float)((float)(v8.n64_f32[0] * 0.0) - (float)(v8.n64_f32[1] * 8.0)) + (float)(v9 * 0.0));
  v14 = v14 + (float)((float)((float)(v11 * 0.0) - (float)(v12 * 8.0)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v15 * 0.0) - (float)(v16 * 8.0)) + (float)(v17 * 0.0));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &v8);
  return (*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 6940);
}
