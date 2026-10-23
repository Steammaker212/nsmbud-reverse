/* sub_606D5DA8
 * address: 0x606D5DA8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_606D5DA8(int a1)
{
  ActiveColliderMgr *v2; // r5

  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6160));
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v2, a1 + 188);
  return StageActor__delete((StateActor *)a1, 1);
}
