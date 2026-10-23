/* sub_602D1450
 * address: 0x602D1450   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_602D1450(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = off_60BE6034;
  v2 = (ActiveCollider *)(a1 + 9032);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9336));
  ActiveCollider_dtor(v2);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8728));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8424));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8120));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7816));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7512));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7208));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6904));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6600));
  FIELD_U32(a1, 6316) = off_60BE62DC;
  FIELD_U32(a1, 6440) = EffectWrapper_vtable;
  sub_60237560(a1 + 6440);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6440));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
