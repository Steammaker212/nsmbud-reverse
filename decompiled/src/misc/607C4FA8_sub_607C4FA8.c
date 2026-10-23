/* sub_607C4FA8
 * address: 0x607C4FA8   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607C4FA8(int a1)
{
  int v2; // r0
  float v3; // s4
  float v4; // r2
  float v5; // s0
  int v6; // r1
  float v7; // s2
  float v8; // s2
  float v9; // s16
  int v10; // r1
  float v11; // s2
  float v12; // r1
  float v13; // s0
  float result; // s0
  int v15; // r1
  float v16[3]; // [sp+4h] [bp-34h] BYREF
  float v17[3]; // [sp+10h] [bp-28h] BYREF
  float v18; // [sp+1Ch] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 3552);
  if ( (v2 & 0x880000) != 0 && (v2 & 0x20000000) == 0 )
    FIELD_U32(a1, 6900) |= 0x800u;
  if ( (v2 & 0x440000) != 0 && (v2 & 0x10000000) == 0 )
    FIELD_U32(a1, 6900) |= 0x1000u;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_F32(a1, 6896);
  v6 = FIELD_U32(a1, 80);
  v7 = FIELD_F32(a1, 6892);
  v17[0] = FIELD_F32(a1, 108);
  v17[1] = v3 + v7;
  v8 = flt_60B0A898[v6];
  v17[2] = v4;
  v9 = v5 * v8;
  if ( sub_60155E7C(a1 + 1328, v17, v16, v5 * v8) == 1 )
  {
    v10 = FIELD_U32(a1, 80);
    *(_DWORD *)(a1 + 6900 + 4 * (dword_60AF2C34[v10] >> 5)) |= 1 << (dword_60AF2C34[v10] & 0x1F);
    *(_DWORD *)(a1 + 6900 + 4 * (dword_60AF2C44[v10] >> 5)) |= 1 << (dword_60AF2C44[v10] & 0x1F);
    if ( (FIELD_U8(a1, 1236) & 0x80) != 0 )
      FIELD_F32(a1, 108) = v16[0] - v9;
  }
  v11 = FIELD_F32(a1, 112);
  v12 = FIELD_F32(a1, 116);
  v13 = FIELD_F32(a1, 6888);
  v16[0] = FIELD_F32(a1, 108);
  v16[1] = v11 + v13;
  v16[2] = v12;
  if ( sub_60155E7C(a1 + 1328, v16, &v18, v9) == 1 )
  {
    v15 = FIELD_U32(a1, 80);
    *(_DWORD *)(a1 + 6900 + 4 * (dword_60AF2C34[v15] >> 5)) |= 1 << (dword_60AF2C34[v15] & 0x1F);
    *(_DWORD *)(a1 + 6900 + 4 * (dword_60AF2C44[v15] >> 5)) |= 1 << (dword_60AF2C44[v15] & 0x1F);
    if ( (FIELD_U8(a1, 1236) & 0x80) != 0 )
    {
      result = v18 - v9;
      FIELD_F32(a1, 108) = v18 - v9;
    }
  }
  return result;
}
