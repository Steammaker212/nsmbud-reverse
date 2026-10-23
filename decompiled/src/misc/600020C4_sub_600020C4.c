/* sub_600020C4
 * address: 0x600020C4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600020C4(int a1, int a2)
{
  int v4; // r5
  int v5; // r0

  v4 = sub_6014B69C(a2);
  v5 = sub_6014B6F8(a2);
  if ( sub_60001F90(a1, v5) )
    return 1;
  else
    return sub_60001F90(a1, v4);
}
