/* DryBones__collisionEnemy
 * address: 0x603158DC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D50
// 
// Overridden by: None
void __fastcall DryBones__collisionEnemy(Enemy *this)
{
  float lastCollisionOffsetX; // s0
  int direction; // r0
  StateBase *currentState; // r0
  int currentStateId; // r5

  lastCollisionOffsetX = FIELD_F32(this, 0x178);
  direction = FIELD_U32(this, 0x50);
  if ( lastCollisionOffsetX > 0.0 && direction == 1 || lastCollisionOffsetX < 0.0 && !direction )
  {
    currentState = StateMgr__getCurrentState(&FIELD_U32(this, 0x17C4));
    currentStateId = (*((int (__fastcall **)(StateBase *))FIELD_U32(currentState, 0x0) + 2))(currentState);// currentState->getId()
    if ( currentStateId == (*((int (**)(void))DryBones_StateId_Walk._.vtable + 2))() )// DryBones_StateId_Walk->getId()
      (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(this, 0x0) + 192))(this, &DryBones_StateId_Turn);
  }
}
