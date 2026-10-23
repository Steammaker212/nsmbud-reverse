/* sub_60911A94
 * address: 0x60911A94   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *sub_60911A94()
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_60912F2C();
  *result = &off_60C5D320;
  result[2] = 0;
  result[3] = 0;
  result[4] = 1065353216;
  return result;
}
