/* sub_603583A8
 * address: 0x603583A8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603583A8(int a1)
{
  ActiveCollider *v1; // r4
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r5

  v1 = (ActiveCollider *)a1;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  v1 = (ActiveCollider *)((char *)v1 + 6464);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v1);
  ActiveColldierMgr_removeFromCreateList(v4, v1);
  return ActiveColldierMgr_removeFromList3(v4, (int)v1);
}
