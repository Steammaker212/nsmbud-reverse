/* sub_60982D30
 * address: 0x60982D30   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60982D30(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = sub_6085B700(a1);
  result[8] = result + 7;
  *result = off_60C5F850;
  result[1] = a2;
  result[2] = a3;
  result[3] = result + 3;
  result[4] = result + 3;
  result[5] = result + 5;
  result[6] = result + 5;
  result[7] = result + 7;
  return result;
}
