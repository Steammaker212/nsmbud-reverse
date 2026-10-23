/* sub_602BBA7C
 * address: 0x602BBA7C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602BBA7C(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60BE43F8;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6660));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
