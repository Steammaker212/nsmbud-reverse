/* sub_605FDCF8
 * address: 0x605FDCF8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605FDCF8(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C0E730;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6168));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
