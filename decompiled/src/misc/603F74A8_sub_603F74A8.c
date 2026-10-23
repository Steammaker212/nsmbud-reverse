/* sub_603F74A8
 * address: 0x603F74A8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F74A8(_BYTE *a1, int a2)
{
  unsigned __int8 i; // r7
  int v5; // r0
  _BYTE *v6; // r1
  int v7; // r0
  _BYTE *v8; // r1
  int result; // r0

  for ( i = 0; i < 0x3Au; result = ++i )
  {
    if ( sub_6040E368(i) == 1 )
    {
      v5 = sub_6040E5B0(a2, i, 0);
      if ( v5 >= 0 )
      {
        v6 = a1;
        if ( (unsigned int)v5 < 0x7B )
          v6 = &a1[v5];
        if ( v6 )
          *v6 &= 0xABu;
      }
      v7 = sub_6040E5B0(a2, i, 0);
      if ( v7 >= 0 )
      {
        v8 = a1;
        if ( (unsigned int)v7 < 0x7B )
          v8 = &a1[v7];
        if ( v8 )
          *v8 &= 0x57u;
      }
    }
  }
  return result;
}
