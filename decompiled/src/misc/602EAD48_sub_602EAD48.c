/* sub_602EAD48
 * address: 0x602EAD48   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_602EAD48(int a1)
{
  float *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 7440);
  result = (float *)(a1 + 7440);
  *(_DWORD *)result = v2 & 0xFFFFFFFE;
  *(result - 1834) = 0.06;
  *(result - 1827) = 0.0;
  *(result - 1829) = *(result - 1829) * 0.8;
  *(result - 1819) = 0.0;
  return result;
}
