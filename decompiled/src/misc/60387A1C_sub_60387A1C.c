/* sub_60387A1C
 * address: 0x60387A1C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60387A1C(int a1)
{
  ActiveCollider *v1; // r5
  ActiveColliderMgr *v2; // r4

  v1 = (ActiveCollider *)(a1 + 132);
  v2 = ActiveColliderMgr_instance;
  return ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 132))
      || ActiveColliderMgr_isInCreateList(v2, v1);
}
