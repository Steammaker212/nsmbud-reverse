/* sub_6047E0EC
 * address: 0x6047E0EC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6047E0EC(_DWORD *a1, int a2, int a3, ...)
{
  va_list va; // [sp+1Ch] [bp-4h] BYREF

  va_start(va, a3);
  return sub_6047DF58(3, a1, a2, -1, 0, a3, (int *)va);
}
