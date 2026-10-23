/* sub_606D0CDC
 * address: 0x606D0CDC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606D0CDC(int a1)
{
  int v2; // r7

  *(_DWORD *)a1 = off_60C1D7E4;
  ShapedCollider_dtor((ColliderBase *)(a1 + 33656));
  v2 = 0;
  FIELD_U32(a1, 6464) = off_60C0EBB4;
  do
  {
    ActiveCollider_dtor((ActiveCollider *)(a1 + 33352 + v2));
    v2 -= 304;
  }
  while ( v2 != -19456 );
  ShapedCollider_dtor((ColliderBase *)(a1 + 12624));
  FIELD_U32(a1, 6464) =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 7112);
  StageActor__dtor((Actor *)(a1 + 6464));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
