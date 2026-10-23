/* FireballBase_dtor
 * address: 0x60136F64   size: 128   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall FireballBase_dtor(FireballBase *this)
{
  LightSource *p_lightRelated3; // r5

  FIELD_U32(this, 0x0)._._._.vtable = (int)FireballBase_vtable;
  p_lightRelated3 = &FIELD_U32(this, 0x18DC);
  ActiveCollider_dtor(&FIELD_U32(this, 0x1924));
  LightSource__dtor(p_lightRelated3);
  FIELD_U32(this, 0x1874)._.vtable = (int)EffectWrapper_vtable;
  sub_60237560((int)&FIELD_U32(this, 0x1874));
  sead__IDisposer__dtor(&FIELD_U32(this, 0x1874)._.vtable);
  FIELD_U32(this, 0x0)._._._.vtable = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(FIELD_U32(this, 0x0)._.collisionMgr);
  return StageActor__dtor(&FIELD_U32(this, 0x0)._._._);
}
