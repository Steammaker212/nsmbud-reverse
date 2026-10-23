/* sub_608DDE28
 * address: 0x608DDE28   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DDE28(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // r0

  result = (_DWORD *)sead__Thread__ctor(a1, a4, a3, a2, 0, 0x7FFFFFFF, a5, a6);
  *result = off_60C5BD6C;
  result[6] = &off_60C5BDC0;
  result[36] = 0;
  return result;
}
