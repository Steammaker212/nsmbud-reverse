/* sub_60414320
 * address: 0x60414320   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60414320(int a1, unsigned int a2, int a3)
{
  int v3; // r3
  int v4; // r0

  v3 = a1 + 112;
  v4 = a1 + 16;
  if ( !a3 )
    v4 = v3 + 86016;
  if ( a2 >= 4 )
    a2 = 0;
  return v4 + 21528 * a2;
}
