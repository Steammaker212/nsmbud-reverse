/* sub_60613D50
 * address: 0x60613D50   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60613D50(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( !FIELD_U8(a1, 7580) )
    StageActor__cullCheck((StageActor *)a1, 0);
  if ( FIELD_U8(a1, 7610) )
    ActiveCollider_reset((ActiveCollider *)(a1 + 6804));
  ActiveCollider_reset((ActiveCollider *)(a1 + 7108));
  ShapedCollider_execute((ColliderBase *)(a1 + 6104));
  sub_606134E8(a1);
  return 1;
}
