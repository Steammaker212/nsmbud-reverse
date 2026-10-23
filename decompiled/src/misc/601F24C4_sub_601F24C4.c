/* sub_601F24C4
 * address: 0x601F24C4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F24C4(int a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r5
  int v5; // r2
  int v6; // r12
  int v7; // r1
  float32x2_t v8; // [sp+0h] [bp-50h] BYREF
  int v9; // [sp+8h] [bp-48h]
  int v10; // [sp+Ch] [bp-44h]
  int v11; // [sp+10h] [bp-40h]
  int v12; // [sp+14h] [bp-3Ch]
  int v13; // [sp+18h] [bp-38h]
  int v14; // [sp+1Ch] [bp-34h]
  int v15; // [sp+20h] [bp-30h]
  int v16; // [sp+24h] [bp-2Ch]
  int v17; // [sp+28h] [bp-28h]
  int v18; // [sp+2Ch] [bp-24h]
  _DWORD v19[8]; // [sp+30h] [bp-20h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 304));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_U32(a1, 176);
    v4 = FIELD_U32(a1, 180);
    v5 = FIELD_U32(a1, 80);
    v6 = FIELD_U32(a1, 84);
    v7 = FIELD_U32(a1, 88);
    v19[2] = FIELD_U32(a1, 184);
    v19[1] = v4;
    v19[0] = v3;
    v8.n64_u64[0] = 1065353216;
    v9 = 0;
    v11 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 1065353216;
    v10 = v5;
    v12 = 1065353216;
    v13 = 0;
    v14 = v6;
    v18 = v7;
    sub_60832C3C(&v8, v19);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 304) + 60))(**(_DWORD **)(a1 + 304), &v8);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 304) + 68))(**(_DWORD **)(a1 + 304), a1 + 128);
    return sub_60421880(FIELD_U32(a1, 304));
  }
  return result;
}
