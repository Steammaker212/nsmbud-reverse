/* sub_6085F164
 * address: 0x6085F164   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6085F164(_BYTE *result, int a2, int a3)
{
  int v3; // lr
  int v4; // r1

  v3 = a2 / 100;
  v4 = a2 % 100;
  *result = v3 + 48;
  result[1] = v4 / 10 + 48;
  result[2] = v4 % 10 + 48;
  result[3] = 95;
  result[4] = a3 / 100 + 48;
  result[5] = a3 % 100 / 10 + 48;
  result[6] = a3 % 100 % 10 + 48;
  result[7] = 0;
  return result;
}
