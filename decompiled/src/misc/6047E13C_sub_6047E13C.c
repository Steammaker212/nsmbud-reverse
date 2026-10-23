/* sub_6047E13C
 * address: 0x6047E13C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6047E13C(int a1, _DWORD *a2, int a3, int a4, ...)
{
  va_list va; // [sp+18h] [bp+0h] BYREF

  va_start(va, a4);
  return sub_6047DF58(a1, a2, a3, -1, 0, a4, (int *)va);
}
