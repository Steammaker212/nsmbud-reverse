/* sub_601375C0
 * address: 0x601375C0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_601375C0(StageActor *a1)
{
  ActiveCollider *p_aCollider; // r4
  ActiveColliderMgr *v2; // r5
  ActiveColliderMgr *result; // r0

  p_aCollider = &FIELD_U32(a1, 0xBC);
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), a1, (ActiveColliderInfo *)&unk_60BD25A4, 0);
  v2 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v2, p_aCollider);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v2, p_aCollider);
  }
  return result;
}
