/* BrosBase__dtor
 * address: 0x60263008   size: 156   group: projectile
 * sym: BrosBase::~BrosBase() as D2
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
Actor *__fastcall BrosBase__dtor(Actor *a1)
{
  int *p_childCount; // r5

  FIELD_U32(a1, 0x0) = (int)BrosBase_vtable;
  p_childCount = &a1[84].childCount;
  ActiveCollider_dtor((ActiveCollider *)&a1[151].field_2C);
  CollisionMgr_dtor((int)p_childCount);
  a1[82].parent = (Actor *)EffectWrapper_vtable;
  sub_60237560((int)&a1[82].parent);
  sead__IDisposer__dtor(&a1[82].parent);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
