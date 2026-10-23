/* sub_600BFED4
 * address: 0x600BFED4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BFED4(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ShapedCollider_execute(a1 + 6104);
  boss_cannon_body_ref((unsigned int *)a1);
  return 1;
}
