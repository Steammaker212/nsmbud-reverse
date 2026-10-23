/* KoopalingBase__beforeExecute
 * address: 0x600B1560   size: 228   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024CEC
// 
// Overridden by: None
int __fastcall KoopalingBase__beforeExecute(BossBase *a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  float v7; // s0

  v2 = 0;
  if ( BossBase__beforeExecute(a1) == 1 )
  {
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0)._.states.manager);
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*(int (**)(void))(dword_60C832FC + 8))() )
    {
      v5 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0)._.states.manager);
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      if ( v6 != (*(int (**)(void))(dword_60C83440 + 8))() )
      {
        v7 = (*(float (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 1096))(a1);
        FIELD_U32(a1, 0x0)._._._.scale.x = v7;
        FIELD_U32(a1, 0x0)._._._.scale.y = v7;
        FIELD_U32(a1, 0x0)._._._.scale.z = v7;
      }
    }
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 1064))(a1);
    v2 = 1;
    if ( FIELD_U32(a1, 0x189C) >= 1 )
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 1136))(a1);
  }
  return v2;
}
