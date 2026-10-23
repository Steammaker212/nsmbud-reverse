/* sub_60652CEC
 * address: 0x60652CEC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60652CEC(int a1)
{
  int *result; // r0
  int v2; // t1

  FIELD_U32(a1, 6568) = 0;
  v2 = FIELD_U32(a1, 6240);
  result = (int *)(a1 + 6240);
  *result = v2 | 1;
  return result;
}
