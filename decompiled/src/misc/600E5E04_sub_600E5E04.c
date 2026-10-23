/* sub_600E5E04
 * address: 0x600E5E04   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E5E04(int a1)
{
  ActiveCollider *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BCCCEC;
  v2 = (ActiveCollider *)(a1 + 6592);
  LightSource__dtor((_DWORD *)(a1 + 7068));
  FIELD_U32(a1, 6900) = EffectWrapper_vtable;
  sub_60237560(a1 + 6900);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6900));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = off_60BCCBE4;
  ColliderBase_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
