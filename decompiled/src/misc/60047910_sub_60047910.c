/* sub_60047910
 * address: 0x60047910   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60047910(int a1)
{
  ActiveCollider *v1; // r4
  ActiveColliderMgr *v2; // r5
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v4; // r5

  v1 = (ActiveCollider *)(a1 + 7348);
  v2 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7348))
    || (result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v2, v1), result == (ActiveColliderMgr *)1) )
  {
    v4 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v1);
    ActiveColldierMgr_removeFromCreateList(v4, v1);
    return ActiveColldierMgr_removeFromList3(v4, (int)v1);
  }
  return result;
}
