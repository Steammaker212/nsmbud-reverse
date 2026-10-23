/* sub_606835C8
 * address: 0x606835C8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_606835C8(ActiveColliderMgr *result)
{
  ActiveCollider *p_last; // r5
  ActiveColliderMgr *v2; // r4

  if ( BYTE1(result[117].createList.vtable) )
  {
    p_last = (ActiveCollider *)&result[2].list4.last;
    v2 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&result[2].list4.last);
    ActiveColldierMgr_removeFromCreateList(v2, p_last);
    return ActiveColldierMgr_removeFromList3(v2, (int)p_last);
  }
  return result;
}
