/* sub_60008598
 * address: 0x60008598   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60008598(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[0] = &off_60BC0210;
  v4[1] = a2;
  return sub_60008D1C(a1 + 27168, v4, a3);
}
