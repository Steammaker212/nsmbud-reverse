/* sub_60668664
 * address: 0x60668664   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60668664(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C15048;
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 7584));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 7096));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6608));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
