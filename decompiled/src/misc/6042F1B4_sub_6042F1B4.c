/* sub_6042F1B4
 * address: 0x6042F1B4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042F1B4(int *a1, int *a2, int a3)
{
  nn__mii__CharInfoAccessor *v6; // r0
  int result; // r0
  _BYTE v8[104]; // [sp+0h] [bp-68h] BYREF

  v6 = (nn__mii__CharInfoAccessor *)nn__mii__CharInfoAccessor__ctor(v8, a3);
  result = nn__mii__CharInfoAccessor__IsValid_const(v6);
  if ( result == 1 )
  {
    result = nn__mii__CharInfoAccessor__ctor(v8, a3);
    if ( a1 )
    {
      result = nn__mii__CharInfoAccessor__GetHeight_const((nn__mii__CharInfoAccessor *)v8);
      *a1 = result;
    }
    if ( a2 )
    {
      result = nn__mii__CharInfoAccessor__GetBuild_const((nn__mii__CharInfoAccessor *)v8);
LABEL_10:
      *a2 = result;
    }
  }
  else
  {
    if ( a1 )
    {
      result = 64;
      *a1 = 64;
    }
    if ( a2 )
    {
      result = 64;
      goto LABEL_10;
    }
  }
  return result;
}
