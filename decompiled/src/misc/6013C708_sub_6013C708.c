/* sub_6013C708
 * address: 0x6013C708   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6013C708(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = off_60BD2E74;
  v2 = (ActiveCollider *)(a1 + 6428);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6732));
  ActiveCollider_dtor(v2);
  FIELD_U32(a1, 6308) = EffectWrapper_vtable;
  sub_60237560(a1 + 6308);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6308));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
