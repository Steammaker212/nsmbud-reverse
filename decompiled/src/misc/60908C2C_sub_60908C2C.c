/* sub_60908C2C
 * address: 0x60908C2C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60908C2C(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_60908F70(a1, 28, 20, 24, 15);
  *result = off_60C5CF0C;
  result[77] = 0;
  result[78] = a2;
  result[81] = 0;
  result[80] = result + 79;
  result[79] = result + 79;
  result[85] = 0;
  result[84] = result + 83;
  result[83] = result + 83;
  result[82] = 4;
  result[86] = 332;
  return result;
}
