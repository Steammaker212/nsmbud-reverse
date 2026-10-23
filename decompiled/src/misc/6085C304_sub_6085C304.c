/* sub_6085C304
 * address: 0x6085C304   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6085C304(_BYTE *result, char a2, char a3)
{
  *result = a2 & 3 | (4 * (a3 & 3)) | *result & 0xF0;
  return result;
}
