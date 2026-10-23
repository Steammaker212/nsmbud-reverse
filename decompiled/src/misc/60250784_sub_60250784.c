/* sub_60250784
 * address: 0x60250784   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60250784(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveCollider *v4; // r4
  ActiveColliderMgr *v5; // r5
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v7; // r5

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    || ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    StageActor__removeActiveColliders(a1);
  }
  v4 = (ActiveCollider *)(a1 + 11820);
  v5 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v4)
    || (result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v5, v4), result == (ActiveColliderMgr *)1) )
  {
    v7 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v4);
    ActiveColldierMgr_removeFromCreateList(v7, v4);
    return ActiveColldierMgr_removeFromList3(v7, (int)v4);
  }
  return result;
}
