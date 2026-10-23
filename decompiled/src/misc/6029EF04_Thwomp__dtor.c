/* Thwomp__dtor
 * address: 0x6029EF04   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x60033814
// 
// Overridden by: None
Actor *__fastcall Thwomp__dtor(int a1)
{
  *(_DWORD *)a1 = Thwomp_vtable;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6456));
  FIELD_U32(a1, 6352) = EffectWrapper_vtable;
  sub_60237560(a1 + 6352);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6352));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
