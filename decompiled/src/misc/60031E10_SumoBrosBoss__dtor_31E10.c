/* SumoBrosBoss__dtor_31E10
 * address: 0x60031E10   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600263A8
// 
// Overridden by: None
void __fastcall SumoBrosBoss__dtor_31E10(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60BC1B58;
  v2 = (_DWORD *)(a1 + 6644);
  FIELD_U32(a1, 7212) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7212);
  sub_60237560(a1 + 7212);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 7108) = EffectWrapper_vtable;
  sub_60237560(a1 + 7108);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7108));
  *(_DWORD *)a1 = &BossBase_vtable;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6720));
  PlayerLookTarget_vf0(v2);
  sub_60026BFC((_DWORD *)(a1 + 6332));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
