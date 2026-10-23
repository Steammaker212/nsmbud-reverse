/* sub_600C6764
 * address: 0x600C6764   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_600C6764(int a1)
{
  int v1; // r5
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r4

  v1 = a1;
  v2 = (ActiveCollider *)(a1 + 8240);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8240));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  ActiveColldierMgr_removeFromActiveList(v3, (ActiveCollider *)(v1 + 8544));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(v1 + 8544));
  ActiveColldierMgr_removeFromList3(v3, v1 + 8544);
  ActiveColldierMgr_removeFromActiveList(v3, (ActiveCollider *)(v1 + 8848));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(v1 + 8848));
  ActiveColldierMgr_removeFromList3(v3, v1 + 8848);
  ActiveColldierMgr_removeFromActiveList(v3, (ActiveCollider *)(v1 + 9152));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(v1 + 9152));
  ActiveColldierMgr_removeFromList3(v3, v1 + 9152);
  v1 += 9456;
  ActiveColldierMgr_removeFromActiveList(v3, (ActiveCollider *)v1);
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)v1);
  return ActiveColldierMgr_removeFromList3(v3, v1);
}
