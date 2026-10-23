/* sub_605FB29C
 * address: 0x605FB29C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_605FB29C(StageActor *a1)
{
  ActiveCollider *p_aCollider; // r4
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v3; // r5

  p_aCollider = &FIELD_U32(a1, 0xBC);
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), a1, (ActiveColliderInfo *)&unk_60C0E27C, 0);
  result = *(ActiveColliderMgr **)(dword_60C99DD4 + 764);
  if ( result != (ActiveColliderMgr *)4 )
  {
    v3 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, p_aCollider);
      if ( !result )
        return ActiveColliderMgr_addToCreateList(v3, p_aCollider);
    }
  }
  return result;
}
