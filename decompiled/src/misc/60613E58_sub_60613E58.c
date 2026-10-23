/* sub_60613E58
 * address: 0x60613E58   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60613E58(int a1)
{
  ActiveColliderMgr *v2; // r6
  ActiveCollider *v3; // r4
  ActiveColliderMgr *v4; // r5

  if ( FIELD_U8(a1, 7610) )
  {
    v2 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6804));
    ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 6804));
    ActiveColldierMgr_removeFromList3(v2, a1 + 6804);
  }
  v3 = (ActiveCollider *)(a1 + 7108);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v3);
  ActiveColldierMgr_removeFromCreateList(v4, v3);
  ActiveColldierMgr_removeFromList3(v4, (int)v3);
  return 1;
}
