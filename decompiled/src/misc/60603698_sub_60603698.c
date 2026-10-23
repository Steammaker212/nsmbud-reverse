/* sub_60603698
 * address: 0x60603698   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60603698(int a1)
{
  int v2; // r6

  v2 = 0;
  *(_DWORD *)a1 = off_60C0EBB4;
  do
  {
    ActiveCollider_dtor((ActiveCollider *)(a1 + 26888 + v2));
    v2 -= 304;
  }
  while ( v2 != -19456 );
  ShapedCollider_dtor((ColliderBase *)(a1 + 6160));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
