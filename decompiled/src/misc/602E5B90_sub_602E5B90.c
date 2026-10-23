/* sub_602E5B90
 * address: 0x602E5B90   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_602E5B90(int a1)
{
  *(_DWORD *)a1 = off_60BE6D90;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 15040));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 14736));
  sub_602E5E3C(a1 + 11088);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10784));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10480));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 10176));
  sub_602E5E3C(a1 + 6528);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
