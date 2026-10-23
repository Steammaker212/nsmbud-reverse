/* sub_6059A064
 * address: 0x6059A064   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6059A064(int a1)
{
  int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6260);
  result = (int *)(a1 + 6260);
  *result = v2 | 0x23000;
  *(result - 1440) = 1115684864;
  *(result - 1439) = 1115684864;
  *(result - 1438) = 1115684864;
  *(result - 1437) = 1115684864;
  return result;
}
