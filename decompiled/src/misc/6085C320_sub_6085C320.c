/* sub_6085C320
 * address: 0x6085C320   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6085C320(_BYTE *result, char a2, char a3)
{
  *result = (16 * a2) & 0x70 | (a3 << 7) | *result & 0xF;
  return result;
}
