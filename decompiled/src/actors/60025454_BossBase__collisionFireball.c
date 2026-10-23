/* BossBase__collisionFireball
 * address: 0x60025454   size: 460   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6AB8
// 
// Overridden by:
//   - 0x60072178 : FinalBowser
//   - 0x600C6424 : Bowser
signed int __fastcall BossBase__collisionFireball(BossBase *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  int *v5; // r6
  int v6; // r7
  void (__fastcall *v7)(BossBase *, int); // r5
  int v8; // r0
  StageActor *other_2; // r5
  int v10; // r4
  StageActor *other_1; // r0
  float otherPosX; // r1
  float otherPosY; // r0
  Vec2 screenPos; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( (*(int (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x380))(this) == 1
    || (v5 = &FIELD_U32(this, 0x189C),
        v6 = FIELD_U32(this, 0x189C),
        v7 = *(void (__fastcall **)(BossBase *, int))(FIELD_U32(this, 0x0) + 0x2DC),
        v8 = (*(int (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x2E0))(this),
        v7(this, v8),
        FIELD_U32(this, 0x189C) >= v6) )
  {
    v10 = Global_BasicSoundActor2;
    other_1 = FIELD_U32(acOther, 0x40);
    otherPosX = FIELD_F32(other_1, 0x6C);
    otherPosY = FIELD_F32(other_1, 0x70);
    position.x = otherPosX;
    position.y = otherPosY;
    mapPositionToScreen(&screenPos, &position);
    BasicSoundActor2_play(v10, "SE_OBJ_FIREBALL_DISAPP", &screenPos.x, 0);
  }
  else
  {
    FIELD_U32(this, 0x18A4) = (*(int (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x30C))(this);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x300))(this);
    other_2 = FIELD_U32(acOther, 0x40);
    if ( *v5 <= 0 )
    {
      *v5 = 0;
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x398))(this);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x3C0))(this);
      (*(void (__fastcall **)(BossBase *, StageActor *))(FIELD_U32(this, 0x0) + 0x334))(this, other_2);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x370))(this);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x320))(this);
    }
    else
    {
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x398))(this);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x3BC))(this);
      (*(void (__fastcall **)(BossBase *, StageActor *))(FIELD_U32(this, 0x0) + 0x330))(this, other_2);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0) + 0x36C))(this);
    }
  }
  return 1;
}
