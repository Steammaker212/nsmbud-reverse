/* sub_60186FEC
 * address: 0x60186FEC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60186FEC(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // r1

  v3 = 0;
  if ( a2 >= 9 )
    a2 = 0;
  v4 = 15 * a2;
  if ( a3 < 5 )
    v3 = a3;
  return a1 + 8 * v4 + 24 * v3;
}
