/* ShellEnemy__dtor_3A52F0
 * address: 0x603A52F0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60273774
// 
// Overridden by: None
void __fastcall ShellEnemy__dtor_3A52F0(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = ShellEnemy_vtable;
  FIELD_U32(a1, 6716) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 6716);
  sub_60237560(a1 + 6716);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 6612) = EffectWrapper_vtable;
  sub_60237560(a1 + 6612);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6612));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
