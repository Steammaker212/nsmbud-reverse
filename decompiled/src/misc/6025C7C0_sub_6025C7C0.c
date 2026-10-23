/* sub_6025C7C0
 * address: 0x6025C7C0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6025C7C0(int a1)
{
  _WORD *v1; // r0
  __int16 v2; // t1
  ActiveCollider *v3; // r4
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *result; // r0

  v2 = FIELD_U16(a1, 6364);
  v1 = (_WORD *)(a1 + 6364);
  *v1 = v2 & 0xFFFC;
  v3 = (ActiveCollider *)(v1 - 3088);
  v4 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(v1 - 3088));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v4, v3);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v4, v3);
  }
  return result;
}
