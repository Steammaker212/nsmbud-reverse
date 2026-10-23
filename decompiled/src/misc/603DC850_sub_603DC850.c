/* sub_603DC850
 * address: 0x603DC850   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DC850(int a1)
{
  int v2; // r0
  int v3; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_U32(a1, 6356) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6112));
  sub_603DC4CC(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v2 == 1 && !FIELD_U8(a1, 6812) )
  {
    if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6820)) )
    {
      v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6820));
      if ( v3 )
        FIELD_U8(v3, 19) = 1;
    }
  }
  FIELD_U32(a1, 6796) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6800) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6804) = FIELD_U32(a1, 116);
  return 1;
}
