/* sub_60357AE4
 * address: 0x60357AE4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60357AE4(Enemy *a1)
{
  float y; // s2
  TileCheck *v3; // r0
  Vec2 positionOffset; // [sp+8h] [bp-70h] BYREF
  Vec2 a3; // [sp+10h] [bp-68h] BYREF
  TileCheck v7; // [sp+18h] [bp-60h] BYREF
  TileCheck_Param v8; // [sp+64h] [bp-14h] BYREF

  y = FIELD_F32(a1, 0x70);
  a3.x = FIELD_F32(a1, 0x6C);
  positionOffset.x = a3.x;
  a3.y = y;
  *(_WORD *)&v8.field_0 = 0;
  positionOffset.y = y + -4.0;
  v8.field_2 = FIELD_U8(a1, 0x56);
  v8.field_3 = FIELD_U8(a1, 0x57);
  v8.field_4 = 0;
  v8.field_8 = 0;
  v3 = TileCheck_ctor(&v7, &v8);
  if ( TileCheck_check(v3, 0, &a3, &positionOffset, 15) == 1 )
    return (StateMethodExecuter *)(*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(
                                    a1,
                                    &dword_60C95138);
  else
    return Enemy__vfDC(a1);
}
