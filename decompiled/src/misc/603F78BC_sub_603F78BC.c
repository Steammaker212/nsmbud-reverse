/* sub_603F78BC
 * address: 0x603F78BC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F78BC(_BYTE *a1, int a2, int a3, int a4)
{
  unsigned __int8 i; // r7
  unsigned __int8 j; // r8
  int v9; // r4
  int v10; // r0
  _BYTE *v11; // r1
  int result; // r0

  for ( i = 0; i < 9u; result = ++i )
  {
    for ( j = 0; j < 0x3Au; ++j )
    {
      v9 = sub_6040E5B0(i, j, 0);
      if ( v9 >= 0 )
      {
        v10 = sub_6040E5B0(i, j, 0);
        if ( v10 >= 0 )
        {
          v11 = a1;
          if ( (unsigned int)v10 < 0x7B )
            v11 = &a1[v10];
          if ( v11 )
            *v11 = *(_BYTE *)(a3 + v9) | *(_BYTE *)(a2 + v9) | *(_BYTE *)(a4 + v9);
        }
      }
    }
  }
  return result;
}
