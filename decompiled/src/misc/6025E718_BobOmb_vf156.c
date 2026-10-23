/* BobOmb_vf156
 * address: 0x6025E718   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BobOmb_vf156(int a1, int a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  _DWORD *result; // r0
  StateBase *v8; // r0
  int v9; // r5
  float v10; // s0
  __int16 v11; // r2
  int v12; // r6

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
  {
    sub_60272570(a1, a2);
    return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E2E0);
  }
  else
  {
    v8 = StateMgr__getCurrentState(v4);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    if ( v9 == (*((int (**)(void))BobOmb_StateID_EnemyGenerator._.vtable + 2))() )
      CollisionMgr_process((_BYTE *)(a1 + 648), v10);
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    result = (_DWORD *)(a1 + 6456);
    if ( FIELD_S32(a1, 6456) <= 0 )
    {
      v11 = FIELD_U16(a1, 6364);
      if ( (v11 & 4) == 0 )
      {
        FIELD_U16(a1, 6364) = v11 | 4;
        *result = 240;
        v12 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
        sub_6041838C((ModelAnimation *)(v12 + 4));
        AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), 0);
        FIELD_U32(v12, 20) = 0;
        FIELD_U32(v12, 28) |= 2u;
        FIELD_U32(v12, 24) = 1065353216;
      }
      return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
    }
  }
  return result;
}
