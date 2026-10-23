/* Goomba__collisionEnemy
 * address: 0x6033AC8C   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033C7BC
// 
// Overridden by: None
Enemy *__fastcall Goomba__collisionEnemy(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  Enemy *result; // r0

  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (Enemy *)(*(int (**)(void))(dword_60C943BC + 8))();
  if ( (Enemy *)v7 != result )
    return GoombaBase__collisionEnemy(a1, a2, a3);
  return result;
}
