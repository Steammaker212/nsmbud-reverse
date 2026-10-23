/* sub_607C4F58
 * address: 0x607C4F58   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4F58(int a1)
{
  int v2; // r1

  sub_6076EEFC(a1);
  FIELD_U32(a1, 9940) = 2;
  if ( sub_60771D48(a1, 0) == 1 )
    v2 = 128;
  else
    v2 = 15;
  return sub_60794954(a1 + 11356, v2, 0.0, 0.0);
}
