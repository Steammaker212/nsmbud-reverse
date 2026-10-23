/* sub_600D6920
 * address: 0x600D6920   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D6920(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6692));
  ShapedCollider_execute(a1 + 664);
  sub_600D6760(a1);
  return 1;
}
