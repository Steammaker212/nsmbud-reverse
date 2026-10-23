/* sub_6026CF10
 * address: 0x6026CF10   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026CF10(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  sub_6026CF48(a1);
  ((void (__fastcall *)(int))loc_6026C9AC)(a1);
  return 1;
}
