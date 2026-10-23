/* sub_608BCA70
 * address: 0x608BCA70   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_608BCA70(unsigned int *a1, unsigned int a2)
{
  char *result; // r0
  unsigned int *v4; // r1

  result = 0;
  if ( *a1 > a2 )
  {
    v4 = &a1[2 * a2];
    if ( *((_WORD *)v4 + 2) == 16641 )
      return (char *)a1 + v4[2];
  }
  return result;
}
