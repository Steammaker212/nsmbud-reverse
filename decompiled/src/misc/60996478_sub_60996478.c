/* sub_60996478
 * address: 0x60996478   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996478(unsigned __int8 *a1)
{
  unsigned int v1; // r1

  v1 = a1[84];
  if ( v1 <= 5 && ((1 << v1) & 0x2C) != 0 && (a1[28] & 0xFE) == 4 )
    return 1;
  else
    return sub_60991758(a1);
}
