/* sub_60634678
 * address: 0x60634678   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60634678(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_606342DC((ModelWrapper **)a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  return 1;
}
