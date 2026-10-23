/* HammerBros__dtor
 * address: 0x602CCF64   size: 160   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267498
// 
// Overridden by: None
void __fastcall HammerBros::~HammerBros(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = &BrosBase_vtable;
  v2 = a1 + 6760;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12124));
  CollisionMgr_dtor(v2);
  FIELD_U32(a1, 6616) = EffectWrapper_vtable;
  sub_60237560(a1 + 6616);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6616));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 = &CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
