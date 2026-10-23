/* sub_6090C000
 * address: 0x6090C000   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C000(int a1, int a2, float *a3, int a4)
{
  float v6; // s0
  float v8[7]; // [sp+4h] [bp-1Ch] BYREF

  v6 = sub_6090BED8(a1, v8, a3);
  return sub_6090EA30(a4, a2, v8, v6);
}
