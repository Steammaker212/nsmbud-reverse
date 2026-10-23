/* sub_607888EC
 * address: 0x607888EC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607888EC(int a1, unsigned int a2)
{
  int Area; // r5
  int v4; // r6
  int v5; // r4
  unsigned __int8 v6; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r8
  unsigned __int8 v10; // r7
  int v11; // r6
  int v12; // r4
  int v13; // r0

  if ( !sub_6040E4C8(LevelInfo_instance) )
    return 0;
  Area = Level_getArea(Level_instance, a2);
  v4 = FIELD_U32(Area, 148);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = sub_60727D48(Area, (unsigned __int8)v5);
      if ( v7 && FIELD_U8(v7, 11) == 25 )
        v6 |= FIELD_U8(v7, 12);
      ++v5;
    }
    while ( v4 != v5 );
  }
  else
  {
    v6 = 0;
  }
  if ( sub_608FBB8C(v6) <= 3 )
    return 0;
  v8 = Level_getArea(Level_instance, a2);
  v9 = 0;
  v10 = 0;
  v11 = FIELD_U32(v8, 148);
  if ( v11 )
  {
    v12 = 0;
    v10 = 0;
    do
    {
      v13 = sub_60727D48(v8, (unsigned __int8)v12);
      if ( v13 && FIELD_U8(v13, 11) == 34 )
        v10 |= FIELD_U8(v13, 12);
      ++v12;
    }
    while ( v11 != v12 );
  }
  if ( sub_608FBB8C(v10) > 3 )
    return 1;
  return v9;
}
