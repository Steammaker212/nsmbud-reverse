/* PowBlock_vf2
 * address: 0x606BE6D8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall PowBlock_vf2(int a1)
{
  *(_DWORD *)a1 = PowBlock_vtable;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6168));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
