/* sub_603C7D4C
 * address: 0x603C7D4C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_603C7D4C(int a1)
{
  unsigned int *result; // r0
  int v2; // t1

  FIELD_U32(a1, 100) = 0;
  v2 = FIELD_U32(a1, 11720);
  result = (unsigned int *)(a1 + 11720);
  *result = v2 & 0xFFFFFFFC;
  return result;
}
