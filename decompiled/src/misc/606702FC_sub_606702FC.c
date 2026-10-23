/* sub_606702FC
 * address: 0x606702FC   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606702FC(int a1)
{
  int *v1; // r0
  int v2; // t1
  StateMgr *v3; // r4
  StateBase *CurrentState; // r5
  int v5; // r6
  int *v6; // r1
  int v7; // r6
  int v8; // r6
  int v9; // r6
  int v10; // r6
  int v11; // r6
  int v12; // r6
  int v13; // r5
  StateMethodExecuter *result; // r0

  FIELD_U8(a1, 8267) = 1;
  v2 = FIELD_U32(a1, 8260);
  v1 = (int *)(a1 + 8260);
  v3 = (StateMgr *)(v1 - 544);
  *v1 = v2 ^ 1;
  *(v1 - 2) = dword_60B07AFC[v2 ^ 1];
  CurrentState = StateMgr__getCurrentState((StateMgr *)v1 - 136);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60CB7148 + 8))() )
  {
    v6 = &dword_60CB71C8;
  }
  else
  {
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*(int (**)(void))(dword_60CB7168 + 8))() )
    {
      v6 = &dword_60CB7228;
    }
    else
    {
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v8 == (*(int (**)(void))(dword_60CB7188 + 8))() )
      {
        v6 = &dword_60CB7208;
      }
      else
      {
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v9 == (*(int (**)(void))(dword_60CB71A8 + 8))() )
        {
          v6 = &dword_60CB71E8;
        }
        else
        {
          v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v10 == (*(int (**)(void))(dword_60CB71C8 + 8))() )
          {
            v6 = &dword_60CB7148;
          }
          else
          {
            v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
            if ( v11 == (*(int (**)(void))(dword_60CB7228 + 8))() )
            {
              v6 = &dword_60CB7168;
            }
            else
            {
              v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
              if ( v12 == (*(int (**)(void))(dword_60CB7208 + 8))() )
              {
                v6 = &dword_60CB7188;
              }
              else
              {
                v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
                result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CB71E8 + 8))();
                if ( (StateMethodExecuter *)v13 != result )
                  return result;
                v6 = &dword_60CB71A8;
              }
            }
          }
        }
      }
    }
  }
  return StateMgr__changeState(v3, (StateBase *)v6);
}
