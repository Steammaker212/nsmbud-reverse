/* sub_600DA2F4
 * address: 0x600DA2F4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DA2F4(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6

  v2 = (ActiveCollider *)(a1 + 7184);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  FIELD_U32(a1, 7172) = 0;
  return 7172;
}
