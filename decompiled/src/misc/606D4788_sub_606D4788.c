/* sub_606D4788
 * address: 0x606D4788   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606D4788(unsigned __int8 *a1, int a2)
{
  _BOOL4 result; // r0
  int v4; // r0

  if ( a2 == 3 )
  {
    result = 1;
    if ( a1[6222] )
      return result;
  }
  else if ( a2 != 2 )
  {
    result = 0;
    if ( a2 != 1 )
      return result;
    v4 = a1[750];
    return v4 != 0;
  }
  v4 = a1[6117];
  return v4 != 0;
}
