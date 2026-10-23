/* sub_600085D0
 * address: 0x600085D0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600085D0(int a1, int a2)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &off_60BC0210;
  v3[1] = a2;
  return sub_60008E44(a1 + 27168, v3);
}
