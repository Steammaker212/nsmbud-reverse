/* sub_6047E0AC
 * address: 0x6047E0AC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6047E0AC(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5, ...)
{
  va_list va; // [sp+1Ch] [bp+4h] BYREF

  va_start(va, a5);
  return sub_6047DF58(3, a1, a2, a3, a4, a5, (int *)va);
}
