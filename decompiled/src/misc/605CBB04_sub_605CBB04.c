/* sub_605CBB04
 * address: 0x605CBB04   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CBB04(int a1)
{
  ActiveColliderMgr *v2; // r6
  int v3; // t1

  sub_605CC9BC();
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6820));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 6820));
  ActiveColldierMgr_removeFromList3(v2, a1 + 6820);
  v3 = FIELD_U8(a1, 6930);
  FIELD_U8(a1, 6930) = v3 | 2;
  return v3 | 2;
}
