/* sub_6057A360
 * address: 0x6057A360   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6057A360(StateActor *a1, unsigned __int8 a2)
{
  ActiveCollider *p_aCollider; // r4
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0
  unsigned __int8 v5; // [sp+4h] [bp-14h] BYREF

  v5 = a2;
  p_aCollider = &FIELD_U32(a1, 0xBC);
  ActiveCollider_init2(&FIELD_U32(a1, 0xBC), a1, &stru_60B047A4, &v5, 0);
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, p_aCollider);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, p_aCollider);
  }
  return result;
}
