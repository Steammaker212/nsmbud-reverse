/* sub_609804BC
 * address: 0x609804BC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609804BC(_DWORD *a1, int a2)
{
  _DWORD *result; // r0

  result = nn__ui2d__Layout__ctor(a1);
  *result = off_60C5F76C;
  result[14] = 0;
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  result[18] = a2;
  result[19] = 0;
  *((_BYTE *)result + 80) = 0;
  *((_BYTE *)result + 81) = 2;
  return result;
}
