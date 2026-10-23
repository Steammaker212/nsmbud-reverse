/* sub_60441A3C
 * address: 0x60441A3C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60441A3C()
{
  int result; // r0

  result = sub_609546B4();
  *(_DWORD *)result = off_60BFAC8C;
  FIELD_U32(result, 16) = &off_60BFACE4;
  FIELD_U8(result, 416) = 0;
  return result;
}
