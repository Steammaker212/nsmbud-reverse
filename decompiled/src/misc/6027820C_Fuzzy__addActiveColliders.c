/* Fuzzy__addActiveColliders
 * address: 0x6027820C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x600009A8
// 
// Overridden by: None
ActiveColliderMgr *__fastcall Fuzzy__addActiveColliders(StageActor *a1)
{
  ActiveCollider *v2; // r4
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0

  StageActor__addActiveColliders(a1);
  v2 = (ActiveCollider *)&a1[18].field_210;
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, v2);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, v2);
  }
  return result;
}
