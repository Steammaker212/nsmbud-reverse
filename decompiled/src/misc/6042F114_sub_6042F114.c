/* sub_6042F114
 * address: 0x6042F114   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042F114(int a1)
{
  nn__mii__CharInfoAccessor *v2; // r0
  int IsValid_const; // r1
  int result; // r0
  nn__mii__CharInfoAccessor *v5; // r0
  _BYTE v6[96]; // [sp+0h] [bp-60h] BYREF

  v2 = (nn__mii__CharInfoAccessor *)nn__mii__CharInfoAccessor__ctor(v6, a1);
  IsValid_const = nn__mii__CharInfoAccessor__IsValid_const(v2);
  result = 0;
  if ( IsValid_const == 1 )
  {
    v5 = (nn__mii__CharInfoAccessor *)nn__mii__CharInfoAccessor__ctor(v6, a1);
    return nn__mii__CharInfoAccessor__GetFavoriteColor_const(v5);
  }
  return result;
}
