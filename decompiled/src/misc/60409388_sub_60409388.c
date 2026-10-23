/* sub_60409388
 * address: 0x60409388   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_60409388(unsigned __int8 *result)
{
  unsigned int v1; // r1

  if ( result[6559] == 1 && result[6476] == 6 )
  {
    result += 6478;
    v1 = result[2] + 1;
    if ( v1 >= 0x63 )
      LOBYTE(v1) = 99;
    result[2] = v1;
  }
  return result;
}
