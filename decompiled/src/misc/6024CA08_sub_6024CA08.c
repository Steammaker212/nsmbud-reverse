/* sub_6024CA08
 * address: 0x6024CA08   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6024CA08(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60BE4C68;
  v2 = a1 + 6680;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12036));
  CollisionMgr_dtor(v2);
  FIELD_U32(a1, 6508) = EffectWrapper_vtable;
  sub_60237560(a1 + 6508);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6508));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
