/* sub_6069EA28
 * address: 0x6069EA28   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6069EA28(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C1878C;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6144));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
