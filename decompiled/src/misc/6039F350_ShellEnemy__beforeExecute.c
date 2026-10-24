/* ShellEnemy__beforeExecute
 * address: 0x6039F350   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60271DD4
// 
// Overridden by: None
signed int __fastcall ShellEnemy__beforeExecute(Enemy *a1)
{
  signed int v2; // r1
  signed int result; // r0
  float z; // r2
  float v5; // r2
  float v6; // r1
  float v7; // r1
  float x; // r1
  float y; // r1
  StateBase *CurrentState; // r0
  int v11; // r6
  ActiveColliderNode *v12; // s2

  v2 = CarryableEnemy__beforeExecute(&FIELD_U32(a1, 0x0));
  result = 0;
  if ( v2 == 1 )
  {
    if ( LODWORD(a1[1]._._._.speed.y) )
    {
      z = a1[1]._._._.speed.z;
      if ( z == 0.0 || (LODWORD(v5) = LODWORD(z) - 1, a1[1]._._._.speed.z = v5, v5 == 0.0) )
      {
        FIELD_U32(a1, 0x100) = 0;
        a1[1]._._._.speed.y = 0.0;
      }
    }
    v6 = a1[1]._._._.position.z;
    if ( v6 == 0.0 || (LODWORD(v7) = LODWORD(v6) - 1, a1[1]._._._.position.z = v7, v7 == 0.0) )
      a1[1]._._._.speed.x = 0.0;
    x = a1[1]._._._.maxSpeed.x;
    if ( x != 0.0 )
      LODWORD(a1[1]._._._.maxSpeed.x) = LODWORD(x) - 1;
    y = a1[1]._._._.maxSpeed.y;
    if ( y != 0.0 )
      LODWORD(a1[1]._._._.maxSpeed.y) = LODWORD(y) - 1;
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v11 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      a1[1]._._._.aCollider.node4.prev = 0;
      *(double *)&FIELD_U32(a1 + (1) * 6300, 0xE4) = ((double (__fastcall *)(ActiveColliderNode **))a1[1]._._._.aCollider.createNode.prev->owner)(&a1[1]._._._.aCollider.createNode.prev);
      a1[1]._._._.aCollider.node3.prev = v12;
    }
    ActorScaler_execute((ActorScaler *)&a1[1]._._._.aCollider.createNode.prev);
    HIBYTE(FIELD_U32(a1, 0x17A8)) = *(_DWORD *)&FIELD_U8(a1, 0x288)[2224] & 1;
    return 1;
  }
  return result;
}
