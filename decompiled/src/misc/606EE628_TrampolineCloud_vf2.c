/* TrampolineCloud_vf2
 * address: 0x606EE628   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall TrampolineCloud_vf2(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = TrampolineCloud_vtable;
  v2 = (ColliderBase *)(a1 + 6256);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6704));
  SolidOnTopCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
