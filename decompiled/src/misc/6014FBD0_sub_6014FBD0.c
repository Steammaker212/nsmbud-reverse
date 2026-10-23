/* sub_6014FBD0
 * address: 0x6014FBD0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014FBD0(int a1, signed int a2)
{
  _BYTE *v2; // r3
  int v3; // r2
  int v4; // r0

  v2 = (_BYTE *)(a1 + a2);
  if ( *(_BYTE *)(a1 + a2 + 2341) )
  {
    v3 = 0;
    if ( !v2[2345] )
      v3 = a1 + 12 * a2 + 2356;
    if ( a2 > 1 )
      return v3;
LABEL_9:
    if ( v3 )
    {
      v4 = a1 + 12 * a2;
      if ( v2[2524] )
        return v4 + 2500;
    }
    return v3;
  }
  v3 = (unsigned __int8)v2[2349];
  if ( v2[2349] )
    v3 = a1 + 12 * a2 + 2404;
  if ( a2 <= 1 )
    goto LABEL_9;
  return v3;
}
