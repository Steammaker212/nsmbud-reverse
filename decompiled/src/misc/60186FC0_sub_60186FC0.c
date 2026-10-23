/* sub_60186FC0
 * address: 0x60186FC0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60186FC0(int a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r12
  int v5; // r1

  v4 = 0;
  if ( a2 >= 9 )
    a2 = 0;
  v5 = 15 * a2;
  if ( a3 < 5 )
    v4 = a3;
  return sub_6019EC50(a1 + 8 * v5 + 24 * v4, a4);
}
