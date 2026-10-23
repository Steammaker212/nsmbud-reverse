/* sub_602B4874
 * address: 0x602B4874   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B4874(int a1)
{
  int *v2; // r1
  float v3; // s0
  float v4; // s2
  float v5; // r1
  TileCheck *v6; // r0
  int v7; // r0
  float v8; // r1
  int v9; // r1
  int v10; // r4
  bool v11; // zf
  Actor *v12; // r0
  TileCheck_Result v14; // [sp+8h] [bp-98h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-70h] BYREF
  Vec2 a3; // [sp+38h] [bp-68h] BYREF
  TileCheck v17; // [sp+40h] [bp-60h] BYREF
  TileCheck_Param v18; // [sp+8Ch] [bp-14h] BYREF

  v2 = dword_602B49B4;
  v3 = FIELD_F32(a1, 6332);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v2 = &dword_602B49B4[1];
  v4 = *(float *)v2;
  a3.x = FIELD_F32(a1, 6328);
  a3.y = v3 + v4;
  v5 = FIELD_F32(a1, 112);
  positionOffset.x = FIELD_F32(a1, 108);
  positionOffset.y = v5;
  v14.field_C = 0;
  v14.field_10 = 0;
  *(_WORD *)&v18.field_0 = 0;
  v18.field_2 = FIELD_U8(a1, 86);
  v18.field_3 = FIELD_U8(a1, 87);
  v18.field_4 = 0;
  v18.field_8 = 0;
  v6 = TileCheck_ctor(&v17, &v18);
  if ( TileCheck_check(v6, &v14, &a3, &positionOffset, 15) != 1 )
    return 0;
  v7 = v14.field_20;
  v8 = v14.field_8;
  FIELD_F32(a1, 6464) = v14.field_8;
  FIELD_F32(a1, 6468) = v8;
  if ( !v7 )
    return 0;
  v9 = FIELD_U32(v7, 300);
  v10 = 1;
  if ( v9 == 17 )
    return v10;
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    return 0;
  v11 = v9 == 12;
  if ( v9 != 12 )
    v11 = v9 == 7;
  if ( !v11 )
    return 0;
  v12 = *(Actor **)(v7 + 144);
  if ( !v12 )
    return 0;
  if ( Actor__getProfileId(v12) != 331 )
    return 0;
  return v10;
}
