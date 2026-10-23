/* sub_606799AC
 * address: 0x606799AC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606799AC(int a1)
{
  ActiveCollider *v2; // r8

  *(_DWORD *)a1 = off_60C1632C;
  v2 = (ActiveCollider *)(a1 + 7148);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8144));
  LightSource__dtor((_DWORD *)(a1 + 8056));
  *(_DWORD *)a1 = off_60C0B1F8;
  FIELD_U32(a1, 7896) = EffectWrapper_vtable;
  sub_60237560(a1 + 7896);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7896));
  FIELD_U32(a1, 7792) = EffectWrapper_vtable;
  sub_60237560(a1 + 7792);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7792));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7452));
  ActiveCollider_dtor(v2);
  nullsub_407();
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
