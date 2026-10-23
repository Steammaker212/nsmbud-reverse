/* sub_605DF06C
 * address: 0x605DF06C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_605DF06C(int a1)
{
  int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6264);
  result = (int *)(a1 + 6264);
  *result = v2 | 0x2000;
  return result;
}
