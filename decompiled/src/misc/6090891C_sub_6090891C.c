/* sub_6090891C
 * address: 0x6090891C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6090891C(int a1, _DWORD *a2, int a3, void *a4, int a5, int a6, int a7, unsigned int a8, int a9)
{
  _DWORD *result; // r0

  result = (_DWORD *)sead__Thread__ctor(a1, a2, a4, a5, a6, a7, a8, a9);
  *result = &off_60C5CE98;
  result[6] = &off_60C5CEEC;
  result[36] = a3;
  return result;
}
