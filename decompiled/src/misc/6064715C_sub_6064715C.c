/* sub_6064715C
 * address: 0x6064715C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6064715C(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C1386C;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6360));
  FIELD_U32(a1, 6340) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6340));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6340));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
