/* sub_603C0114
 * address: 0x603C0114   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_603C0114(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = off_60BF647C;
  v2 = (ActiveCollider *)(a1 + 6364);
  LightSource__dtor((_DWORD *)(a1 + 6836));
  FIELD_U32(a1, 6732) = EffectWrapper_vtable;
  sub_60237560(a1 + 6732);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6732));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
