/* sub_606BB62C
 * address: 0x606BB62C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606BB62C(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60C1B488;
  v2 = (ColliderBase *)(a1 + 6104);
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6552));
  SolidOnTopCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
