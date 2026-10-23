/* sub_6035454C
 * address: 0x6035454C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035454C(int a1)
{
  float v2; // s2
  TileCheck *v3; // r0
  int result; // r0
  Vec2 positionOffset; // [sp+8h] [bp-70h] BYREF
  Vec2 a3; // [sp+10h] [bp-68h] BYREF
  TileCheck v7; // [sp+18h] [bp-60h] BYREF
  TileCheck_Param speed; // [sp+64h] [bp-14h] BYREF

  v2 = FIELD_F32(a1, 112);
  a3.x = FIELD_F32(a1, 108);
  positionOffset.x = a3.x;
  a3.y = v2;
  *(_WORD *)&speed.field_0 = 0;
  positionOffset.y = v2 + -100.0;
  *(_WORD *)&speed.field_2 = FIELD_U16(a1, 86);
  speed.field_4 = 0;
  speed.field_8 = 0;
  v3 = TileCheck_ctor(&v7, &speed);
  result = TileCheck_check(v3, 0, &a3, &positionOffset, 15);
  if ( result == 1 )
  {
    *(_DWORD *)&v7.field_0 = 715827882;
    *(_DWORD *)&speed.field_0 = 35791394;
    result = moveValueTo((int *)(a1 + 156), (int *)&v7.field_0, (int *)&speed.field_0);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95098);
  }
  return result;
}
