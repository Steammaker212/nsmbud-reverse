/* sub_606D6C90
 * address: 0x606D6C90   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D6C90(int a1)
{
  float v2; // r1
  float v3; // r2
  unsigned int *v4; // r8
  float v5; // s0
  float v6; // s2
  float v7; // s4
  unsigned int *v8; // r7
  unsigned int *v9; // r9
  float v11; // [sp+0h] [bp-60h] BYREF
  float v12; // [sp+4h] [bp-5Ch]
  float v13; // [sp+8h] [bp-58h]
  float32x2_t v14; // [sp+10h] [bp-50h] BYREF
  int v15; // [sp+18h] [bp-48h]
  float v16; // [sp+1Ch] [bp-44h]
  int v17; // [sp+20h] [bp-40h]
  int v18; // [sp+24h] [bp-3Ch]
  int v19; // [sp+28h] [bp-38h]
  float v20; // [sp+2Ch] [bp-34h]
  int v21; // [sp+30h] [bp-30h]
  int v22; // [sp+34h] [bp-2Ch]
  int v23; // [sp+38h] [bp-28h]
  float v24; // [sp+3Ch] [bp-24h]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v11 = FIELD_F32(a1, 108);
  v12 = v2;
  v13 = v3;
  if ( (FIELD_U8(a1, 6124) & 4) != 0 )
    sub_605CC78C(a1, &v11);
  if ( FIELD_U8(a1, 6848) )
  {
    v4 = (unsigned int *)(a1 + 160);
    v5 = v11 + FIELD_F32(a1, 6824);
    v6 = v12 + FIELD_F32(a1, 6828);
    v7 = v13 + FIELD_F32(a1, 6832);
    FIELD_F32(a1, 6836) = v5;
    FIELD_F32(a1, 6840) = v6;
    FIELD_F32(a1, 6844) = v7;
    v14.n64_u64[0] = 1065353216;
    v15 = 0;
    v17 = 0;
    v18 = 1065353216;
    v19 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 1065353216;
    v16 = v5;
    v20 = v6;
    v24 = v7;
    Mtx34_rotateY(&v14, (unsigned int *)(a1 + 160));
    v8 = (unsigned int *)(a1 + 156);
    Mtx34_rotateX(&v14, (unsigned int *)(a1 + 156));
    v9 = (unsigned int *)(a1 + 164);
    Mtx34_rotateZ(&v14, (unsigned int *)(a1 + 164));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(**(_DWORD **)(a1 + 6156) + 60))(FIELD_U32(a1, 6156), &v14);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6156) + 56))(FIELD_U32(a1, 6156));
  }
  else
  {
    v9 = (unsigned int *)(a1 + 164);
    v8 = (unsigned int *)(a1 + 156);
    v4 = (unsigned int *)(a1 + 160);
  }
  v14.n64_u64[0] = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 1065353216;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 1065353216;
  v16 = v11;
  v20 = v12;
  v24 = v13;
  Mtx34_rotateY(&v14, v4);
  Mtx34_rotateX(&v14, v8);
  Mtx34_rotateZ(&v14, v9);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6152) + 60))(**(_DWORD **)(a1 + 6152), &v14);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6152));
}
