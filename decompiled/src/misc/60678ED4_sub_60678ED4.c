/* sub_60678ED4
 * address: 0x60678ED4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60678ED4(int a1)
{
  ActiveColliderMgr *v2; // r6
  int result; // r0

  sub_605DD400(a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8144));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 8144));
  ActiveColldierMgr_removeFromList3(v2, a1 + 8144);
  ActiveCollider__init((ActiveCollider *)(a1 + 8144), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C16510, 0);
  result = FIELD_U8(a1, 86);
  FIELD_U8(a1, 8253) = result;
  return result;
}
