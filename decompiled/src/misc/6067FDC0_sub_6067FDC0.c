/* sub_6067FDC0
 * address: 0x6067FDC0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6067FDC0(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C1673C;
  v2 = (_DWORD *)(a1 + 6100);
  ShapedCollider_dtor((ColliderBase *)(a1 + 9520));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 9152));
  sub_6067CE60(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
