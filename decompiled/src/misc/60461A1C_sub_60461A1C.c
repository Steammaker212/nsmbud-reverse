/* sub_60461A1C
 * address: 0x60461A1C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60461A1C(int a1)
{
  float v2; // s0
  TileCheck *v3; // r0
  int result; // r0
  TileCheck v5; // [sp+4h] [bp-7Ch] BYREF
  int v6[5]; // [sp+50h] [bp-30h] BYREF
  _DWORD v7[2]; // [sp+64h] [bp-1Ch] BYREF
  TileCheck_Param v8; // [sp+6Ch] [bp-14h] BYREF

  *(_WORD *)&v8.field_0 = 0;
  v8.field_2 = FIELD_U8(a1, 86);
  v8.field_3 = FIELD_U8(a1, 87);
  v8.field_4 = 0;
  v8.field_8 = 0;
  v2 = FIELD_F32(a1, 112);
  v7[0] = FIELD_U32(a1, 108);
  *(float *)&v7[1] = v2 + 8.0;
  v3 = TileCheck_ctor(&v5, &v8);
  sub_6015DD58((int)v3, v6, (int)v7);
  result = v6[0] & 0xFFFFFF;
  if ( (v6[0] & 0xFFFFFF) == 0x4000D )
  {
    FIELD_U8(a1, 6053) = 1;
    return 6053;
  }
  return result;
}
