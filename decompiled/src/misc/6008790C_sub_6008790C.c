/* sub_6008790C
 * address: 0x6008790C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_6008790C(int a1)
{
  unsigned int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 7616);
  result = (unsigned int *)(a1 + 7616);
  *result = v2 & 0xFFFFFFFC | 1;
  return result;
}
