/* GoombaBase__dtor_33E53C
 * address: 0x6033E53C   size: 120   group: actors
 * sym: GoombaBase::~GoombaBase() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A3EA8
// 
// Overridden by:
//   - 0x6033B64C : Goomba
//   - 0x6036420C : ParaGoomba
void __fastcall GoombaBase__dtor_33E53C(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = &GoombaBase_vtable;
  v2 = a1 + 6312;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6380));
  nullsub_407(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
