/* sub_605CC9BC
 * address: 0x605CC9BC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605CC9BC(int a1)
{
  unsigned int *result; // r0
  int v2; // t1

  FIELD_U8(a1, 6056) = 2;
  v2 = FIELD_U32(a1, 6124);
  result = (unsigned int *)(a1 + 6124);
  *result = v2 & 0xFFFFFFFE;
  return result;
}
