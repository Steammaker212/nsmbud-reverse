/* sub_603FFC8C
 * address: 0x603FFC8C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_603FFC8C(int *result, int a2)
{
  unsigned int v2; // r1
  int v3; // r2

  v2 = *result + a2;
  v3 = 999999;
  if ( v2 < 0xF423F )
    v3 = v2;
  *result = v3;
  return result;
}
