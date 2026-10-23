/* sub_60147CF0
 * address: 0x60147CF0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60147CF0(StageActor *a1)
{
  ActiveCollider *p_heap; // r4
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0

  StageActor__addActiveColliders(a1);
  p_heap = (ActiveCollider *)&a1[10]._.heap;
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_heap);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, p_heap);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, p_heap);
  }
  return result;
}
