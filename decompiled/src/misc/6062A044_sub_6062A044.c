/* sub_6062A044
 * address: 0x6062A044   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6062A044(int a1)
{
  int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6124);
  result = (int *)(a1 + 6124);
  *result = v2 | 8;
  *(result - 1449) = 0;
  *(result - 1467) = 0;
  *((_BYTE *)result - 68) = 1;
  return result;
}
