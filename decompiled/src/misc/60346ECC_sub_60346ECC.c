/* sub_60346ECC
 * address: 0x60346ECC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60346ECC(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60BEDBBC;
  v2 = (ColliderBase *)(a1 + 6312);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12552));
  CollisionMgr_dtor(a1 + 7128);
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
