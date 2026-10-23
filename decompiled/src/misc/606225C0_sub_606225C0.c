/* sub_606225C0
 * address: 0x606225C0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_606225C0(int a1)
{
  ActiveCollider *v1; // r4
  ActiveColliderMgr *v2; // r5

  v1 = (ActiveCollider *)a1;
  FIELD_U32(a1, 100) = -1110651699;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6664));
  v1 = (ActiveCollider *)((char *)v1 + 6332);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v1);
  ActiveColldierMgr_removeFromCreateList(v2, v1);
  return ActiveColldierMgr_removeFromList3(v2, (int)v1);
}
