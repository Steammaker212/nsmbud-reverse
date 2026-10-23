/* sub_605DD400
 * address: 0x605DD400   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DD400(int a1)
{
  int v2; // r8
  ActiveCollider *v3; // r7
  ActiveColliderMgr *v4; // r5

  v2 = FIELD_U8(a1, 86);
  v3 = (ActiveCollider *)(a1 + 188);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v4, v3);
  ActiveColldierMgr_removeFromList3(v4, (int)v3);
  ActiveCollider_init3(v3, (StateActor *)a1, (ActiveColliderInfo *)&unk_60C0B480, (char *)(a1 + 0x57), v2, 0);
  ActiveColldierMgr_removeFromActiveList(v4, (ActiveCollider *)(a1 + 7148));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 7148));
  ActiveColldierMgr_removeFromList3(v4, a1 + 7148);
  ActiveCollider_init3((ActiveCollider *)(a1 + 7148), (StateActor *)a1, &stru_60C0B4AC, (char *)(a1 + 0x57), v2, 0);
  ActiveColldierMgr_removeFromActiveList(v4, (ActiveCollider *)(a1 + 7452));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 7452));
  ActiveColldierMgr_removeFromList3(v4, a1 + 7452);
  return ActiveCollider_init3(
           (ActiveCollider *)(a1 + 7452),
           (StateActor *)a1,
           &stru_60B05A10,
           (char *)(a1 + 0x57),
           v2,
           a1 + 7140);
}
