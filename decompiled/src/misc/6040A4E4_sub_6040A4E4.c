/* sub_6040A4E4
 * address: 0x6040A4E4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_6040A4E4(unsigned __int8 *result, unsigned __int8 *a2)
{
  _BYTE *v2; // r2
  int v3; // t1

  v2 = result + 6559;
  if ( result[6559] == 1 && result[6476] == 5 )
  {
    v3 = result[6478];
    result += 6478;
    if ( !v3 )
    {
      result = (unsigned __int8 *)result[1];
      if ( result == a2 )
      {
        *v2 = 2;
        return (unsigned __int8 *)2;
      }
    }
  }
  return result;
}
