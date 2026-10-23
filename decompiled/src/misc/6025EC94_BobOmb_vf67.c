/* BobOmb_vf67
 * address: 0x6025EC94   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf67(Enemy *a1, int a2, ActiveCollider *a3)
{
  int v6; // r5
  StateBase *CurrentState; // r0
  int v8; // r6
  int result; // r0
  StateBase *v10; // r0
  int v11; // r5
  StateBase *v12; // r0
  int v13; // r5
  float v14; // s0

  v6 = Enemy__processCollision(a1, (ActiveCollider *)a2, a3, 0);
  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 )
  {
    result = (*((int (**)(void))stru_60C8E1CC._.vtable + 2))();
    if ( v8 != result )
      return Enemy_killYoshi(a1, FIELD_U32(a3, 0x40));
  }
  else if ( v8 == (*(int (**)(void))(dword_60C8EA94 + 8))()
         || (v10 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4)),
             v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
             v11 == (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))())
         || (v12 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4)),
             v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12),
             v13 == (*(int (**)(void))(dword_60C8E2E0 + 8))()) )
  {
    result = FIELD_U8(a3, 0x94);
    if ( (unsigned __int8)result <= 3u )
    {
      v14 = FIELD_F32(a2, 184);
      FIELD_U32(a1, 0x50) = v14 < 0.0;
      FIELD_U8(a1, 0x54) = result;
      *(&FIELD_U32(a1, 0x17FC) + result) = 32;
      return (*(int (__fastcall **)(Enemy *, int *, float))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C8E2E0, v14);
    }
  }
  else
  {
    return Enemy__collisionYoshi(a1, a2, a3);
  }
  return result;
}
