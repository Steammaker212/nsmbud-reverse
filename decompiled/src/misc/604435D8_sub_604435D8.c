/* sub_604435D8
 * address: 0x604435D8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *sub_604435D8()
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_60441A3C();
  *result = off_60BFAD9C;
  result[4] = &off_60BFADF8;
  result[105] = 0;
  result[106] = -1;
  result[107] = 0;
  return result;
}
