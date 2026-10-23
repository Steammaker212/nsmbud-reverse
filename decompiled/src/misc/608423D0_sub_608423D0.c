/* sub_608423D0
 * address: 0x608423D0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_608423D0(unsigned int *result)
{
  unsigned int v1; // r1
  int v2; // r2
  int v3; // r2

  v1 = *result;
  v2 = *result & 0x3FF;
  if ( v2 == 512 )
  {
    v3 = 511;
  }
  else if ( v2 == 511 )
  {
    v3 = 512;
  }
  else
  {
    v3 = -v1 & 0x3FF;
  }
  *result = v1 & 0xFFFFFC00 | v3;
  return result;
}
