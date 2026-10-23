/* sub_600ED2A0
 * address: 0x600ED2A0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ED2A0(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r6
  StateBase *v14; // r0
  int v15; // r6
  StateBase *v16; // r0
  int v17; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C85234 + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*((int (**)(void))Enemy__StateID_JumpKill._._.vtable + 2))();
    if ( v7 != result )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      result = (*(int (**)(void))(dword_60C83464 + 8))();
      if ( v9 != result )
      {
        v10 = StateMgr__getCurrentState(v2);
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        result = (*((int (**)(void))stru_60C7F5D0._._.vtable + 2))();
        if ( v11 != result )
        {
          v12 = StateMgr__getCurrentState(v2);
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          result = (*(int (**)(void))(dword_60C83488 + 8))();
          if ( v13 != result )
          {
            v14 = StateMgr__getCurrentState(v2);
            v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
            result = (*((int (**)(void))stru_60C7F618._._.vtable + 2))();
            if ( v15 != result )
            {
              v16 = StateMgr__getCurrentState(v2);
              v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
              result = (*((int (**)(void))stru_60C7F63C._._.vtable + 2))();
              if ( v17 != result )
              {
                CollisionMgr_process((_BYTE *)(a1 + 648));
                result = FIELD_U8(a1, 2872);
                if ( (result & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
                {
                  FIELD_U32(a1, 124) = 0;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
