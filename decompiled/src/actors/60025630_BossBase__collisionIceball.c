/* BossBase__collisionIceball
 * address: 0x60025630   size: 236   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by:
//   - 0x6007225C : FinalBowser
//   - 0x600C6440 : Bowser
signed int __fastcall BossBase__collisionIceball(BossBase *this)
{
  int v2; // r5
  float x; // r0
  float y; // r1
  float v5; // r0
  float v6; // r1

  v2 = 0;
  if ( !(*(int (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 892))(this) )
  {
    FIELD_U32(this, 0x18A4) = 0;
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x308))(this);
    v2 = 1;
    if ( !LOBYTE(FIELD_U32(this, 0x0).freezeMgr.field_44) )
    {
      x = FIELD_U32(this, 0x0)._._._.position.x;
      y = FIELD_U32(this, 0x0)._._._.position.y;
      FIELD_U32(this, 0x1B8C).z = FIELD_U32(this, 0x0)._._._.position.z;
      FIELD_U32(this, 0x1B8C).y = y;
      FIELD_U32(this, 0x1B8C).x = x;
      v5 = FIELD_U32(this, 0x0)._._._.speed.x;
      v6 = FIELD_U32(this, 0x0)._._._.speed.y;
      FIELD_U32(this, 0x1B98).z = FIELD_U32(this, 0x0)._._._.speed.z;
      FIELD_U32(this, 0x1B98).y = v6;
      FIELD_U32(this, 0x1B98).x = v5;
      FIELD_F32(this, 0x1BA4) = FIELD_U32(this, 0x0)._._._.field_64;
      FIELD_F32(this, 0x1BA8) = FIELD_U32(this, 0x0)._._._.xAcceleration;
      FIELD_U32(this, 0x1BAC) = LOWORD(FIELD_U32(this, 0x0).field_1884);
      FIELD_U32(this, 0x1BB0) = HIWORD(FIELD_U32(this, 0x0).field_1884);
      StateMgrExt_changeState(&FIELD_U32(this, 0x0)._.states.manager, &Enemy_StateId_Frozen._._);
    }
  }
  return v2;
}
