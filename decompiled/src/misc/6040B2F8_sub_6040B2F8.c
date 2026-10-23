/* sub_6040B2F8
 * address: 0x6040B2F8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_6040B2F8(unsigned __int8 *result)
{
  unsigned int v1; // r1

  if ( result[6559] == 1 && result[6476] == 3 && result[6479] == 4 )
  {
    result += 6478;
    v1 = result[3] + 1;
    if ( v1 >= 0xFF )
      LOBYTE(v1) = -1;
    result[3] = v1;
  }
  return result;
}
