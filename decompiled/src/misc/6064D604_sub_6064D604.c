/* sub_6064D604
 * address: 0x6064D604   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6064D604(int a1)
{
  int v1; // r0
  _BYTE *result; // r0

  FIELD_U8(a1, 6570) = -1;
  v1 = a1 + 6570;
  FIELD_U8(v1, 4) = -1;
  result = (_BYTE *)(v1 + 4);
  result[3] = -1;
  result[2] = -1;
  result[1] = -1;
  *(result - 1) = -1;
  *(result - 2) = -1;
  *(result - 3) = -1;
  return result;
}
