/* sub_60808C4C
 * address: 0x60808C4C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808C4C(int a1, int a2)
{
  int v3; // r6
  unsigned __int8 v4; // r5
  int v6; // [sp+0h] [bp-18h] BYREF
  unsigned __int16 v7; // [sp+6h] [bp-12h] BYREF

  if ( a2 >= 0 )
  {
    v3 = 0;
    v7 = 0;
    sub_608A8604(&v6, a1 + 64);
    v4 = 0;
    if ( a2 == 2 )
      v4 = 16;
    if ( a2 == 1 )
      v4 = 8;
    if ( v6 )
    {
      sub_608B72E8(v6, 1, &v7);
      v3 = v7;
    }
    if ( v3 == 3 )
    {
      v4 |= 6u;
    }
    else if ( (__int16)v3 == 2 )
    {
      v4 |= 4u;
    }
    else
    {
      if ( (__int16)v3 != 1 )
      {
LABEL_17:
        sub_608A86F0(&v6);
        return v4;
      }
      v4 |= 2u;
    }
    if ( v6 )
      sub_608B7318(v6, 1, 0);
    goto LABEL_17;
  }
  return 0;
}
