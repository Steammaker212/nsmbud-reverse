/* sub_60387714
 * address: 0x60387714   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60387714(int a1)
{
  ActiveCollider *v1; // r5
  ActiveColliderMgr *v2; // r4

  v1 = (ActiveCollider *)(a1 + 132);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 132));
  ActiveColldierMgr_removeFromCreateList(v2, v1);
  return ActiveColldierMgr_removeFromList3(v2, (int)v1);
}
