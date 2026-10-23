/* sub_606685F0
 * address: 0x606685F0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606685F0(int a1)
{
  *(_DWORD *)a1 = off_60C15048;
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 7584));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 7096));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6608));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
