/* sub_606E03A0
 * address: 0x606E03A0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606E03A0(int a1)
{
  *(_DWORD *)a1 = off_60C1EFA8;
  LightSource__dtor((_DWORD *)(a1 + 6996));
  *(_DWORD *)a1 = off_60C1F108;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6176));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
