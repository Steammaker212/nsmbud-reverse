/* FixedIcicle__dtor
 * address: 0x60624604   size: 100   group: misc
 * sym: FixedIcicle::~FixedIcicle() as D2
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
Actor *__fastcall FixedIcicle__dtor(int a1)
{
  *(_DWORD *)a1 = FixedIcicle_vtable;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6308));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
