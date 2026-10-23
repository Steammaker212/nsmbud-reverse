/* sub_60357AAC
 * address: 0x60357AAC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60357AAC(Enemy *a1)
{
  int vtable; // r1

  vtable = a1[1]._._._._.vtable;
  if ( vtable == 5 )
    vtable = a1[1]._._._._.heap;
  sub_60355C1C((int)a1, vtable);
  return Enemy__vf264(a1);
}
