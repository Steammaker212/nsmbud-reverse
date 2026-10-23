/* sub_60390EC0
 * address: 0x60390EC0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60390EC0(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = off_60BF3D50;
  v2 = (ActiveCollider *)(a1 + 6452);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6756));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
