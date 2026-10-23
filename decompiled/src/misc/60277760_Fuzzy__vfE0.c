/* Fuzzy__vfE0
 * address: 0x60277760   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A33A8
// 
// Overridden by: None
int __fastcall Fuzzy__vfE0(int a1)
{
  int v1; // r4
  unsigned int v2; // r3
  unsigned int v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // t1
  float32x2_t v9; // [sp+0h] [bp-50h] BYREF
  int v10; // [sp+8h] [bp-48h]
  int v11; // [sp+Ch] [bp-44h]
  int v12; // [sp+10h] [bp-40h]
  int v13; // [sp+14h] [bp-3Ch]
  int v14; // [sp+18h] [bp-38h]
  int v15; // [sp+1Ch] [bp-34h]
  int v16; // [sp+20h] [bp-30h]
  int v17; // [sp+24h] [bp-2Ch]
  int v18; // [sp+28h] [bp-28h]
  int v19; // [sp+2Ch] [bp-24h]
  unsigned int v20; // [sp+30h] [bp-20h] BYREF
  unsigned int v21; // [sp+34h] [bp-1Ch] BYREF
  unsigned int v22; // [sp+38h] [bp-18h] BYREF

  v1 = a1;
  ActorScaler_execute((ActorScaler *)(a1 + 6632));
  v2 = FIELD_U32(v1, 156);
  v3 = FIELD_U32(v1, 160);
  v4 = FIELD_U32(v1, 112);
  v5 = FIELD_U32(v1, 116);
  v6 = FIELD_U32(v1, 108);
  v22 = FIELD_U32(v1, 164);
  v21 = v3;
  v20 = v2;
  v9.n64_u64[0] = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 1065353216;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v11 = v6;
  v15 = v4;
  v19 = v5;
  Mtx34_rotateY(&v9, &v21);
  Mtx34_rotateX(&v9, &v20);
  Mtx34_rotateZ(&v9, &v22);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(**(_DWORD **)(v1 + 6308) + 60))(FIELD_U32(v1, 6308), &v9);
  v7 = *(_DWORD **)(v1 + 6300);
  v1 += 6300;
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v7 + 68))(*v7, v1 + 336);
  return ModelWrapper_updateModel(*(ModelWrapper **)v1);
}
