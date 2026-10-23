/* sub_607666B0
 * address: 0x607666B0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607666B0(int a1, char a2)
{
  int *result; // r0
  int v3; // t1

  v3 = FIELD_U32(a1, 9700);
  result = (int *)(a1 + 9700);
  *result = v3 & ~(1 << a2);
  return result;
}
