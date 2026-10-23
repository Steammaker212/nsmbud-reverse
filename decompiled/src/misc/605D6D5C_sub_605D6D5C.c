/* sub_605D6D5C
 * address: 0x605D6D5C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605D6D5C(int a1)
{
  unsigned int *result; // r0
  int v2; // t1

  FIELD_U32(a1, 6260) &= 0xFF7FFEFF;
  v2 = FIELD_U32(a1, 6240);
  result = (unsigned int *)(a1 + 6240);
  *result = v2 & 0xFFFFFEFF;
  return result;
}
