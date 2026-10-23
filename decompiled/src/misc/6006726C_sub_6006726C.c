/* sub_6006726C
 * address: 0x6006726C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6006726C(int a1)
{
  int *result; // r0
  int v2; // t1

  FIELD_U32(a1, 136) = -1054867456;
  FIELD_U64(a1, 120) = 0x41000000BF000000LL;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 7124) = 0;
  v2 = FIELD_U32(a1, 7144);
  result = (int *)(a1 + 7144);
  *result = v2 | 4;
  return result;
}
