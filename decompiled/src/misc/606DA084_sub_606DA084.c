/* sub_606DA084
 * address: 0x606DA084   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_606DA084(int a1)
{
  ActiveCollider *v1; // r5
  ActiveColliderMgr *v2; // r4
  ActiveColliderMgr *result; // r0

  v1 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 6532) = 60;
  FIELD_U8(a1, 6556) = 1;
  FIELD_U32(a1, 6536) = 0;
  v2 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(a1 + 188));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v2, v1);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v2, v1);
  }
  return result;
}
