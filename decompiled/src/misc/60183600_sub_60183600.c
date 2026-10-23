/* sub_60183600
 * address: 0x60183600   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60183600(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r12
  int v4; // r0

  v3 = 0;
  if ( a2 >= 0x80 )
    a2 = 0;
  v4 = a1 + 828 * a2;
  if ( a3 < 0x28 )
    v3 = a3;
  return v4 + 20 * v3 + 288836;
}
