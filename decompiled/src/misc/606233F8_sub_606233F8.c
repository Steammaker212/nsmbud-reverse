/* sub_606233F8
 * address: 0x606233F8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606233F8(int a1)
{
  *(_DWORD *)a1 = off_60C116C4;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6664));
  *(_DWORD *)a1 = off_60C113C0;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6332));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
