/* sub_605BB110
 * address: 0x605BB110   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_605BB110(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60C0973C;
  v2 = a1 + 6100;
  ShapedCollider_dtor((ColliderBase *)(a1 + 7456));
  sub_605BB1D4(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
