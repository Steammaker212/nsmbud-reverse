/* sub_60805BC0
 * address: 0x60805BC0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60805BC0(int a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_608DA828(a1);
  *result = off_60C27F9C;
  result[2] = off_60C27FE0;
  result[106] = &off_60C27FFC;
  return result;
}
