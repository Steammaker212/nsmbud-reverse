/* sub_605D7020
 * address: 0x605D7020   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605D7020(int a1)
{
  unsigned int *result; // r0
  int v2; // t1
  unsigned int v3; // r2

  v2 = FIELD_U32(a1, 6260);
  result = (unsigned int *)(a1 + 6260);
  v3 = result[1] & 0xFFFFFFDD;
  *result = v2 & 0xFFFFFDEF;
  result[1] = v3;
  return result;
}
