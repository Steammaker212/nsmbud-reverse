/* sub_600862EC
 * address: 0x600862EC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_600862EC(int a1)
{
  int v1; // r0
  _BYTE *result; // r0

  FIELD_U32(a1, 328) = 9;
  FIELD_U8(a1, 2872) = 0;
  v1 = a1 + 2872;
  FIELD_U8(v1, 4) = 0;
  result = (_BYTE *)(v1 + 4);
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  *(result - 1) = 0;
  *(result - 2) = 0;
  *(result - 3) = 0;
  return result;
}
