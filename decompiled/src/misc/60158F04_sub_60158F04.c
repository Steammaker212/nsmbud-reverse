/* sub_60158F04
 * address: 0x60158F04   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60158F04(ActiveCollider *a1, int a2)
{
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *result; // r0

  FIELD_U32(a1, 0x88) = a2;
  v3 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, a1)
    || (result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, a1), result == (ActiveColliderMgr *)1) )
  {
    ActiveColldierMgr_removeFromActiveList(v3, a1);
    ActiveColldierMgr_removeFromCreateList(v3, a1);
    ActiveColldierMgr_removeFromList3(v3, (int)a1);
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(v3, a1);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, a1);
      if ( !result )
        return ActiveColliderMgr_addToCreateList(v3, a1);
    }
  }
  return result;
}
