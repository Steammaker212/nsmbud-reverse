/* sub_60766B08
 * address: 0x60766B08   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60766B08(_DWORD *a1, int a2)
{
  float v4; // r0
  float v5; // r1
  int v6; // r2
  float v7; // s0
  float v8; // s0
  float v9; // r2
  int v10; // r0
  int result; // r0
  float v12; // [sp+0h] [bp-20h] BYREF
  float v13; // [sp+4h] [bp-1Ch]
  int v14; // [sp+8h] [bp-18h]

  v4 = *(float *)a2;
  v5 = FIELD_F32(a2, 4);
  v6 = FIELD_U32(a2, 8);
  v12 = v4;
  v13 = v5;
  v14 = v6;
  v7 = FIELD_F32(dword_60CC6484, 112);
  if ( v4 >= v7 )
  {
    v7 = v4;
    if ( v4 > FIELD_F32(dword_60CC6484, 120) )
      v7 = FIELD_F32(dword_60CC6484, 120);
  }
  v12 = v7;
  v8 = FIELD_F32(dword_60CC6484, 132);
  if ( v13 >= v8 )
  {
    v8 = v13;
    if ( v13 > FIELD_F32(dword_60CC6484, 124) )
      v8 = FIELD_F32(dword_60CC6484, 124);
  }
  v13 = v8;
  sub_60833074(&v12);
  v9 = v13;
  v10 = dword_60CC62E4 + 116;
  FIELD_F32(dword_60CC62E4, 116) = v12;
  FIELD_F32(v10, 4) = v9;
  FIELD_U32(v10, 8) = 0;
  a1[2438] = *(_DWORD *)a2;
  a1[2439] = FIELD_U32(a2, 4);
  a1[2440] = FIELD_U32(a2, 8);
  result = a1[301] | 0x200;
  a1[301] = result;
  return result;
}
