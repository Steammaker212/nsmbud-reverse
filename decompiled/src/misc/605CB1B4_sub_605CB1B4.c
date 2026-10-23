/* sub_605CB1B4
 * address: 0x605CB1B4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CB1B4(int a1)
{
  float v2; // r1
  int v3; // r2
  float32x2_t v5; // [sp+0h] [bp-50h] BYREF
  int v6; // [sp+8h] [bp-48h]
  int v7; // [sp+Ch] [bp-44h]
  int v8; // [sp+10h] [bp-40h]
  int v9; // [sp+14h] [bp-3Ch]
  int v10; // [sp+18h] [bp-38h]
  float v11; // [sp+1Ch] [bp-34h]
  int v12; // [sp+20h] [bp-30h]
  int v13; // [sp+24h] [bp-2Ch]
  int v14; // [sp+28h] [bp-28h]
  int v15; // [sp+2Ch] [bp-24h]
  int v16; // [sp+30h] [bp-20h] BYREF
  float v17; // [sp+34h] [bp-1Ch]
  int v18; // [sp+38h] [bp-18h]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v16 = FIELD_U32(a1, 108);
  v17 = v2;
  v18 = v3;
  if ( (FIELD_U8(a1, 6124) & 4) != 0 )
    sub_605CC78C(a1, &v16);
  v5.n64_u64[0] = 1065353216;
  v6 = 0;
  v8 = 0;
  v9 = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 1065353216;
  v17 = *(float *)&dword_60CB0E9C + v17;
  v7 = v16;
  v11 = v17;
  v15 = v18;
  Mtx34_rotateX(&v5, (unsigned int *)(a1 + 156));
  Mtx34_rotateY(&v5, (unsigned int *)(a1 + 160));
  Mtx34_rotateZ(&v5, (unsigned int *)(a1 + 164));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6152) + 60))(**(_DWORD **)(a1 + 6152), &v5);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6152));
}
