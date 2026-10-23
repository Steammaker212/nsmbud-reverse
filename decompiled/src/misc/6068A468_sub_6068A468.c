/* sub_6068A468
 * address: 0x6068A468   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6068A468(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60C17140;
  v2 = (ColliderBase *)(a1 + 6912);
  ShapedCollider_dtor((ColliderBase *)(a1 + 7360));
  SolidOnTopCollider_dtor(v2);
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6464));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
