/* sub_603858E0
 * address: 0x603858E0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603858E0(int a1)
{
  _BYTE *v2; // r5
  unsigned int v3; // r0
  float v4; // s2
  TileCheck *v5; // r0
  TileCheck v7; // [sp+8h] [bp-78h] BYREF
  TileCheck_Param v8; // [sp+54h] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+60h] [bp-20h] BYREF
  Vec2 a3; // [sp+68h] [bp-18h] BYREF

  FIELD_U16(a1, 6332) = 0;
  v2 = (_BYTE *)(a1 + 6332);
  v3 = FIELD_U32(a1, 20);
  if ( v3 >= 0x2000000 && (v3 & 0x100000) != 0 )
  {
    v4 = FIELD_F32(a1, 112);
    a3.x = FIELD_F32(a1, 108);
    positionOffset.x = a3.x;
    a3.y = v4;
    *(_WORD *)&v8.field_0 = 0;
    positionOffset.y = v4 + 10.0;
    v8.field_2 = FIELD_U8(a1, 86);
    v8.field_3 = FIELD_U8(a1, 87);
    v8.field_4 = 0;
    v8.field_8 = 0;
    v5 = TileCheck_ctor(&v7, &v8);
    if ( TileCheck_check(v5, 0, &a3, &positionOffset, 4) == 1 )
      *v2 = 1;
  }
  return Enemy__vf264((Enemy *)a1);
}
