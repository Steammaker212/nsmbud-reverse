/* Pokey__dtor_384AFC
 * address: 0x60384AFC   size: 172   group: misc
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
void __fastcall Pokey__dtor_384AFC(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BF3320;
  FIELD_U32(a1, 6428) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 6428);
  sub_60237560(a1 + 6428);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 6408) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6408));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6408));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
