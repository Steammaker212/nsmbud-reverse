/* sub_60269EA0
 * address: 0x60269EA0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60269EA0(int a1)
{
  int v1; // r7
  ActiveColliderMgr *v2; // r4
  ActiveColliderMgr *v3; // r5

  v1 = FIELD_U32(a1, 36);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 188));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(v1 + 188));
  ActiveColldierMgr_removeFromList3(v2, v1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 6432));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(v1 + 6432));
  ActiveColldierMgr_removeFromList3(v3, v1 + 6432);
  return 1;
}
