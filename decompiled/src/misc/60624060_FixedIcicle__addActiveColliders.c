/* FixedIcicle__addActiveColliders
 * address: 0x60624060   size: 92   group: misc
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
ActiveColliderMgr *__fastcall FixedIcicle__addActiveColliders(FixedIcicle *a1)
{
  ActiveCollider *p_aCollider2; // r4
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0

  StageActor__addActiveColliders(&FIELD_U32(a1, 0x0)._._._);
  p_aCollider2 = &FIELD_U32(a1, 0x18A4);
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider2);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, p_aCollider2);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, p_aCollider2);
  }
  return result;
}
