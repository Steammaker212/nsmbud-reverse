/* sub_60349630
 * address: 0x60349630   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60349630(_DWORD *result)
{
  result[142] |= 4u;
  result[40] = Enemy_CommonRotations[result[20]];
  return result;
}
