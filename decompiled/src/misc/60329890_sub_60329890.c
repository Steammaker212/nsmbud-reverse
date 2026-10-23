/* sub_60329890
 * address: 0x60329890   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60329890(int a1)
{
  ActiveCollider *v1; // r4
  ActiveColliderMgr *v2; // r5

  v1 = (ActiveCollider *)(a1 + 86964);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 86964));
  ActiveColldierMgr_removeFromCreateList(v2, v1);
  ActiveColldierMgr_removeFromList3(v2, (int)v1);
  return 1;
}
