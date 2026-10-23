/* sub_60240108
 * address: 0x60240108   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60240108(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = off_60BD9640;
  v2 = (ActiveCollider *)(a1 + 6300);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12348));
  FIELD_U32(a1, 12212) = EffectWrapper_vtable;
  sub_60237560(a1 + 12212);
  sead__IDisposer__dtor((_DWORD *)(a1 + 12212));
  FIELD_U32(a1, 12108) = EffectWrapper_vtable;
  sub_60237560(a1 + 12108);
  sead__IDisposer__dtor((_DWORD *)(a1 + 12108));
  CollisionMgr_dtor(a1 + 6616);
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
