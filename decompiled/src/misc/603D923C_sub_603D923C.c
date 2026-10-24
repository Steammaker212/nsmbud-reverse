/* sub_603D923C
 * address: 0x603D923C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603D923C(ActiveColliderMgr *result)
{
  ActiveCollider *p_last; // r5
  ActiveColliderMgr *v2; // r4

  if ( !HIBYTE(result[184].createList.last) )
  {
    p_last = (ActiveCollider *)&FIELD_U32(result + (2) * 64, 0x3C);
    HIBYTE(result[184].createList.last) = 1;
    v2 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&FIELD_U32(result + (2) * 64, 0x3C));
    ActiveColldierMgr_removeFromCreateList(v2, p_last);
    return ActiveColldierMgr_removeFromList3(v2, (int)p_last);
  }
  return result;
}
