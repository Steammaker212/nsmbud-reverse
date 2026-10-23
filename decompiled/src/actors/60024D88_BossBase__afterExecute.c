/* BossBase__afterExecute
 * address: 0x60024D88   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003418
// 
// Overridden by:
//   - 0x6006FEA4 : FinalBowser
//   - 0x600CE708 : BowserJrBase
//   - 0x600B1A88 : KoopalingBase
int __fastcall BossBase__afterExecute(BossBase *this, int arg)
{
  int *v4; // r0
  int v5; // r1
  int v6; // t1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  float y; // r1
  Vec2 screenPos; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v6 = FIELD_U32(this, 0x18AC);
  v4 = &FIELD_U32(this, 0x18AC);
  v5 = v6;
  if ( v6 >= 1 )
    *v4 = v5 - 1;
  v7 = FIELD_U32(this, 0x18B0);
  if ( v7 > 0 )
    FIELD_U32(this, 0x18B0) = v7 - 1;
  v8 = FIELD_U32(this, 0x18B4);
  if ( v8 >= 1 )
    FIELD_U32(this, 0x18B4) = v8 - 1;
  v9 = FIELD_U32(this, 0x18B8);
  if ( v9 >= 1 )
    FIELD_U32(this, 0x18B8) = v9 - 1;
  if ( arg == 2 )
  {
    y = FIELD_U32(this, 0x0)._._._.position.y;
    position.x = FIELD_U32(this, 0x0)._._._.position.x;
    position.y = y;
    mapPositionToScreen(&screenPos, &position);
    MovingSoundActor_setPosition(&FIELD_U32(this, 0x18BC), &screenPos);
  }
  CollisionActor__afterExecute(&FIELD_U32(this, 0x0)._._, arg);
  return (*(int (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3E0))(this);
}
