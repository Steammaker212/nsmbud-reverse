/* Amp__dtor_259C7C
 * address: 0x60259C7C   size: 160   group: misc
 * sym: Amp::~Amp() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A3EA8
// 
// Overridden by: None
void __fastcall Amp__dtor_259C7C(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = Amp_vtable;
  v2 = (_DWORD *)(a1 + 6504);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6580));
  LightSource__dtor(v2);
  FIELD_U32(a1, 6316) = EffectWrapper_vtable;
  sub_60237560(a1 + 6316);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6316));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
