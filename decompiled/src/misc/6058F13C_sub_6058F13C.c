/* sub_6058F13C
 * address: 0x6058F13C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058F13C(int a1, int a2)
{
  TileCheck *v4; // r0
  TileCheck *v6; // r0
  int (**v7)(); // [sp+0h] [bp-80h] BYREF
  TileCheck v8; // [sp+4h] [bp-7Ch] BYREF
  int v9[5]; // [sp+50h] [bp-30h] BYREF
  TileCheck_Param v10[2]; // [sp+64h] [bp-1Ch] BYREF

  *(_WORD *)&v10[0].field_0 = 0;
  v10[0].field_2 = FIELD_U8(a1, 86);
  v10[0].field_3 = FIELD_U8(a1, 87);
  v10[0].field_4 = 0;
  v10[0].field_8 = 0;
  v4 = TileCheck_ctor(&v8, v10);
  if ( sub_6015DF58((int)v4, v9, a2) )
    return 1;
  *(_WORD *)&v10[0].field_0 = 0;
  v7 = off_60C0722C;
  v10[0].field_2 = FIELD_U8(a1, 86);
  v10[0].field_3 = FIELD_U8(a1, 87);
  v10[0].field_4 = 2;
  v10[0].field_8 = (int)&v7;
  v6 = TileCheck_ctor(&v8, v10);
  return sub_6015DF58((int)v6, v9, a2);
}
