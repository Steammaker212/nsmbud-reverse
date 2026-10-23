/* DryBones__dtor_318040
 * address: 0x60318040   size: 132   group: misc
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
void __fastcall DryBones__dtor_318040(int a1)
{
  ActiveCollider *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = DryBones_vtable;
  v2 = (ActiveCollider *)(a1 + 6652);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7260));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6956));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
