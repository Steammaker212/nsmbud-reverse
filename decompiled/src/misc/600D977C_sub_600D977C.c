/* sub_600D977C
 * address: 0x600D977C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_600D977C(int a1)
{
  int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6148);
  result = (int *)(a1 + 6148);
  *result = v2 | 0x200;
  return result;
}
