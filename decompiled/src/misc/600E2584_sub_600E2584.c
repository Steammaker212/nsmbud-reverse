/* sub_600E2584
 * address: 0x600E2584   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600E2584(int a1)
{
  ActiveCollider *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60BCCA78;
  v2 = (ActiveCollider *)(a1 + 6556);
  FIELD_U32(a1, 6968) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 6968);
  sub_60237560(a1 + 6968);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 6864) = EffectWrapper_vtable;
  sub_60237560(a1 + 6864);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6864));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = off_60BCCBE4;
  ColliderBase_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
