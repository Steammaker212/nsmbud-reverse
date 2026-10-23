/* sub_60729354
 * address: 0x60729354   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60729354(unsigned __int8 *a1, char a2, int a3)
{
  unsigned __int8 v5; // r5
  int v6; // r4
  int Area; // r0
  int v8; // r0
  int v9; // r0

  v5 = a2;
  v6 = 0;
  if ( a1[48] )
  {
    Area = Level_getArea(Level_instance, a2);
    v8 = sub_60727D48(Area, a3);
    if ( a1[24] == FIELD_U8(v8, 8) )
    {
      v9 = FIELD_U8(v8, 9);
      if ( v9 )
        v5 = v9 - 1;
      if ( a1[25] != v5 )
        return 1;
    }
    else
    {
      return 1;
    }
  }
  return v6;
}
