/* sub_60864E60
 * address: 0x60864E60   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60864E60(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)((int (__fastcall *)(int, int, int))loc_60857B80)(a1, a2, a4);
  *result = &off_60C5A5F4;
  return result;
}
