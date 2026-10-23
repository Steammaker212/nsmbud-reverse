/* sub_6040A298
 * address: 0x6040A298   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6040A298(_BYTE *result, int a2, int a3)
{
  int v3; // r3
  int v4; // r1
  unsigned int v5; // r1

  if ( result[6559] == 1 && result[6476] == 3 )
  {
    v3 = (char)result[6479];
    if ( v3 < 0 || v3 == a3 )
    {
      result[6480] = 1;
      if ( a2 == 9 )
      {
        result += 6478;
        v4 = 3;
      }
      else
      {
        if ( a2 != 8 )
          return result;
        result += 6478;
        v4 = 1;
      }
      v5 = (unsigned __int8)result[3] + v4;
      if ( v5 >= 0xFF )
        LOBYTE(v5) = -1;
      result[3] = v5;
    }
  }
  return result;
}
