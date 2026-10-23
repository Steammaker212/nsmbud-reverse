/* MenuLayoutTable_init_helper
 * address: 0x60478B70   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *MenuLayoutTable_init_helper()
{
  _DWORD *result; // r0

  result = (_DWORD *)SE_SYS_BTN_OVER_ref();
  *result = off_60BFCEA4;
  result[2] |= 0x20u;
  return result;
}
