/* sub_60237CE0
 * address: 0x60237CE0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237CE0(unsigned int a1)
{
  int v1; // r1
  unsigned int v2; // r2
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  int v8; // r1

  if ( (a1 & 0x200) != 0 )
  {
    v1 = 14;
    if ( (a1 & 0x800) != 0 )
      return v1;
    return (a1 >> 9) & 2 ^ 0xF;
  }
  else
  {
    v1 = 16;
    if ( (a1 & 0x800) != 0 )
      return v1;
    v2 = a1 & 0x400;
    if ( (a1 & 0x100) != 0 )
      return 11 - (v2 >> 10);
    v1 = 12;
    v4 = v2 == 0;
    if ( (a1 & 0x400) == 0 )
    {
      v1 = 0;
      v4 = (a1 & 1) == 0;
    }
    if ( !v4 )
      return v1;
    v1 = 7;
    v5 = (a1 & 0x80) == 0;
    if ( (a1 & 0x80) == 0 )
    {
      v1 = 6;
      v5 = (a1 & 0x40) == 0;
    }
    if ( !v5 )
      return v1;
    v1 = 5;
    v6 = (a1 & 0x20) == 0;
    if ( (a1 & 0x20) == 0 )
    {
      v1 = 4;
      v6 = (a1 & 0x10) == 0;
    }
    if ( !v6 )
      return v1;
    v1 = 3;
    v7 = (a1 & 8) == 0;
    if ( (a1 & 8) == 0 )
    {
      v1 = 1;
      v7 = (a1 & 2) == 0;
    }
    if ( !v7 )
      return v1;
    v8 = 2;
    if ( (a1 & 4) == 0 )
      return 9 - ((a1 >> 12) & 1);
    return v8;
  }
}
