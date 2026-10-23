/* KaniboTama__dtor
 * address: 0x60311B24   size: 128   group: misc
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
Actor *__fastcall KaniboTama__dtor(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = KaniboTama__vtable;
  FIELD_U32(a1, 6304) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 6304);
  sub_60237560(a1 + 6304);
  sead__IDisposer__dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
