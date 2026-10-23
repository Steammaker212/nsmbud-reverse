/* sub_60654C3C
 * address: 0x60654C3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60654C3C(int a1)
{
  int v1; // r0
  _BYTE *result; // r0

  FIELD_U8(a1, 6580) = 0;
  v1 = a1 + 6580;
  FIELD_U8(v1, 16) = 0;
  v1 += 16;
  *(_BYTE *)(v1 - 4) = 0;
  v1 -= 4;
  *(_BYTE *)(v1 - 4) = 0;
  v1 -= 4;
  *(_BYTE *)(v1 - 4) = 0;
  result = (_BYTE *)(v1 - 4);
  result[15] = 0;
  result[14] = 0;
  result[13] = 0;
  result[11] = 0;
  result[10] = 0;
  result[9] = 0;
  result[7] = 0;
  result[6] = 0;
  result[5] = 0;
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  *(result - 1) = 0;
  *(result - 2) = 0;
  *(result - 3) = 0;
  return result;
}
