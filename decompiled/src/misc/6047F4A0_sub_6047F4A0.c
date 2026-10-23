/* sub_6047F4A0
 * address: 0x6047F4A0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6047F4A0(int *result)
{
  int v1; // r1
  int v2; // r2

  v1 = 0;
  result[506] = 0;
  if ( (unsigned int)*result < 5 )
    v1 = *result;
  v2 = result[101 * v1 + 2] & 0x60F0;
  result[507] = v2;
  if ( !v2 )
    result[507] = result[406] & 0x60F0;
  return result;
}
