/* sub_601F34B4
 * address: 0x601F34B4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F34B4(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r9
  int v5; // r10
  int v6; // r1
  int v7; // r2
  int v8; // r0
  _DWORD v9[3]; // [sp+4h] [bp-6Ch] BYREF
  float32x2_t v10; // [sp+10h] [bp-60h] BYREF
  int v11; // [sp+18h] [bp-58h]
  int v12; // [sp+1Ch] [bp-54h]
  int v13; // [sp+20h] [bp-50h]
  int v14; // [sp+24h] [bp-4Ch]
  int v15; // [sp+28h] [bp-48h]
  int v16; // [sp+2Ch] [bp-44h]
  int v17; // [sp+30h] [bp-40h]
  int v18; // [sp+34h] [bp-3Ch]
  int v19; // [sp+38h] [bp-38h]
  int v20; // [sp+3Ch] [bp-34h]
  _DWORD v21[12]; // [sp+40h] [bp-30h] BYREF

  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_U32(a1, 80);
    v4 = FIELD_U32(a1, 84);
    v5 = FIELD_U32(a1, 88);
    v6 = FIELD_U32(a1, 180);
    v7 = FIELD_U32(a1, 184);
    v21[0] = FIELD_U32(a1, 176);
    v21[1] = v6;
    v21[2] = v7;
    v10.n64_u64[0] = 1065353216;
    v11 = 0;
    v15 = 0;
    v17 = 0;
    v12 = v3;
    v13 = 0;
    v14 = 1065353216;
    v16 = v4;
    v18 = 0;
    v19 = 1065353216;
    v20 = v5;
    sub_60832C3C(&v10, v21);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 304) + 60))(**(_DWORD **)(a1 + 304), &v10);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 304));
    v10.n64_u64[0] = 1065353216;
    v11 = 0;
    v15 = 0;
    v17 = 0;
    v12 = v3;
    v13 = 0;
    v14 = 1065353216;
    v16 = v4;
    v18 = 0;
    v19 = 1065353216;
    v20 = v5;
    memset(v9, 0, sizeof(v9));
    sub_60832C3C(&v10, v9);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 312) + 60))(**(_DWORD **)(a1 + 312), &v10);
    v8 = FIELD_U32(a1, 320);
    FIELD_U32(a1, 332) = v8;
    FIELD_U32(a1, 336) = v8;
    FIELD_U32(a1, 340) = v8;
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 312) + 68))(**(_DWORD **)(a1 + 312), a1 + 332);
    return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 312));
  }
  return result;
}
