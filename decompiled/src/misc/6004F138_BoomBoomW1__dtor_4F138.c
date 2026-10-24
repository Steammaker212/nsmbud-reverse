/* BoomBoomW1__dtor_4F138
 * address: 0x6004F138   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BoomBoomBase : 0x600538B4
// 
// Overridden by: None
void __fastcall BoomBoomW1__dtor_4F138(Actor *a1)
{
  ActiveCollider *v2; // r8
  int *v3; // r6
  Actor *v4; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BC3258;
  v2 = (ActiveCollider *)&a1[84];
  a1[103].field_2C = (int)EffectWrapper_vtable;
  v3 = &a1[103].field_2C;
  sub_60237560((int)&a1[103].field_2C);
  sead__IDisposer__dtor(v3);
  a1[102].settings1 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[102].settings1);
  sead__IDisposer__dtor(&a1[102].settings1);
  a1[100].field_4C = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[100].field_4C);
  sead__IDisposer__dtor(&a1[100].field_4C);
  a1[99].field_34 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[99].field_34);
  sead__IDisposer__dtor(&a1[99].field_34);
  FIELD_U32(a1, 0x0) = (int)BoomBoomBase_vtable;
  sub_60026BFC(&a1[94].id);
  a1[91].field_4C = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[91].field_4C);
  sead__IDisposer__dtor(&a1[91].field_4C);
  a1[90].field_34 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[90].field_34);
  sead__IDisposer__dtor(&a1[90].field_34);
  FIELD_U32(a1, 0x0) = (int)&BossBase_vtable;
  ActiveCollider_dtor(v2);
  PlayerLookTarget_vf0(&a1[83].heap);
  sub_60026BFC(&a1[79].profile);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  v4 = StageActor__dtor(a1);
  operator_delete(v4);
}
