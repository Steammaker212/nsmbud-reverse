/* GoombaBase__dtor
 * address: 0x6033B5CC   size: 116   group: actors
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
Actor *__fastcall GoombaBase__dtor(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = &GoombaBase_vtable;
  v2 = a1 + 6312;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6380));
  nullsub_407(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
