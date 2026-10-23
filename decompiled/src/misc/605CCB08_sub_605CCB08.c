/* sub_605CCB08
 * address: 0x605CCB08   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_605CCB08(int a1)
{
  int *result; // r0
  int v2; // t1

  FIELD_U32(a1, 6116) = 1;
  FIELD_U8(a1, 6056) = 1;
  FIELD_U32(a1, 256) = 0;
  v2 = FIELD_U32(a1, 6124);
  result = (int *)(a1 + 6124);
  *result = v2 | 8;
  return result;
}
