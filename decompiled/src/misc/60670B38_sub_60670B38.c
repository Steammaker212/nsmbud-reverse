/* sub_60670B38
 * address: 0x60670B38   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60670B38(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveCollider *v5; // r4
  ActiveColliderMgr *v6; // r5
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v8; // r5

  v2 = (ActiveCollider *)(a1 + 8284);
  v3 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8284))
    || ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    v4 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v2);
    ActiveColldierMgr_removeFromCreateList(v4, v2);
    ActiveColldierMgr_removeFromList3(v4, (int)v2);
  }
  v5 = (ActiveCollider *)(a1 + 8588);
  v6 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5)
    || (result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v6, v5), result == (ActiveColliderMgr *)1) )
  {
    v8 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v5);
    ActiveColldierMgr_removeFromCreateList(v8, v5);
    return ActiveColldierMgr_removeFromList3(v8, (int)v5);
  }
  return result;
}
