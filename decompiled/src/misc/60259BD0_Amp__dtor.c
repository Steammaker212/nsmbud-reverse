/* Amp__dtor
 * address: 0x60259BD0   size: 156   group: misc
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
Actor *__fastcall Amp__dtor(Amp *a1)
{
  LightSource *lightRelated3; // r5

  FIELD_U32(a1, 0x0)._._._._.vtable = (int)Amp_vtable;
  lightRelated3 = &FIELD_U32(a1, 0x1968);
  ActiveCollider_dtor(&FIELD_U32(a1, 0x19B4));
  LightSource__dtor(lightRelated3);
  FIELD_U32(a1, 0x18AC)._.vtable = (int)EffectWrapper_vtable;
  sub_60237560((int)&FIELD_U32(a1, 0x18AC));
  sead__IDisposer__dtor(&FIELD_U32(a1, 0x18AC)._.vtable);
  FIELD_U32(a1, 0x0)._._._._.vtable = (int)&Enemy__vtable;
  sub_602F36E0(&FIELD_U32(a1, 0x0).freezeMgr);
  FIELD_U32(a1, 0x0)._._._._.vtable = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)FIELD_U32(a1, 0x0)._._.collisionMgr);
  return StageActor__dtor(&FIELD_U32(a1, 0x0)._._._._);
}
