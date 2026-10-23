/* sub_60910C34
 * address: 0x60910C34   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60910C34(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  *a1 = *a2;
  a1[1] = *a3;
  a1[2] = *a4;
  a1[3] = sub_60911344(a2, a3, a4);
  return a1;
}
