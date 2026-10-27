/* SpinningStar_dtor
 * address: 0x606737B0   size: 72   group: misc
 * sym: # SpinningStar_dtor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall SpinningStar_dtor(int a1)
{
  *(_DWORD *)a1 = SpinningStar_vtable;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6136));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
