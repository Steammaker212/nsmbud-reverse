/* sub_60962B14
 * address: 0x60962B14   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60962B14(int a1, float *a2)
{
  float v4[6]; // [sp+0h] [bp-68h] BYREF
  float v5[20]; // [sp+18h] [bp-50h] BYREF

  sub_6042E898(v5, a2);
  v4[0] = -1.0;
  v4[1] = -1.0;
  v4[2] = -1.0;
  v4[3] = 1.0;
  v4[4] = 1.0;
  v4[5] = 1.0;
  return sub_60962B84(a1, v4, v5, 255);
}
