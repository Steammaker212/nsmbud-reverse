/* sub_603F7548
 * address: 0x603F7548   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F7548(_BYTE *a1)
{
  unsigned __int8 i; // r7
  unsigned __int8 j; // r4
  int v4; // r0
  _BYTE *v5; // r1
  int v6; // r0
  _BYTE *v7; // r1
  int result; // r0

  for ( i = 0; i < 9u; result = ++i )
  {
    for ( j = 0; j < 0x3Au; ++j )
    {
      if ( sub_6040E368(j) == 1 )
      {
        v4 = sub_6040E5B0(i, j, 0);
        if ( v4 >= 0 )
        {
          v5 = a1;
          if ( (unsigned int)v4 < 0x7B )
            v5 = &a1[v4];
          if ( v5 )
            *v5 &= 0xABu;
        }
        v6 = sub_6040E5B0(i, j, 0);
        if ( v6 >= 0 )
        {
          v7 = a1;
          if ( (unsigned int)v6 < 0x7B )
            v7 = &a1[v6];
          if ( v7 )
            *v7 &= 0x57u;
        }
      }
    }
  }
  return result;
}
