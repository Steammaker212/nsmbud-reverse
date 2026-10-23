/* sub_604FFBF4
 * address: 0x604FFBF4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604FFBF4(StateMethodExecuter *result)
{
  _DWORD *p_currentState; // r1
  int currentState; // r3
  StateMgr *v3; // r4
  StateBase *v4; // r0
  int v5; // r5
  float *vtable; // r3
  int v7; // r12
  int v8; // r4
  float v9; // s2

  if ( LOBYTE(result[1334].owner) )
  {
    p_currentState = &result[1333].currentState;
    currentState = result[1333].currentState;
    if ( BYTE1(result[1334].owner) )
    {
      if ( currentState )
      {
        if ( (int)result[1334].vtable >= 0 )
        {
          *p_currentState = currentState - 1;
          if ( currentState <= 1 )
          {
            v3 = (StateMgr *)&result[3];
            v4 = StateMgr__getCurrentState((StateMgr *)&result[3]);
            v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
            result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CA73A8 + 8))();
            if ( (StateMethodExecuter *)v5 == result )
              return StateMgr__changeState(v3, (StateBase *)&dword_60CA73C8);
          }
        }
      }
    }
    else if ( currentState )
    {
      *p_currentState = currentState - 1;
      return (StateMethodExecuter *)(currentState - 1);
    }
    else
    {
      vtable = (float *)result[1245].vtable;
      v7 = *((_DWORD *)vtable + 8);
      v8 = *((_DWORD *)vtable + 6);
      v9 = vtable[7] + *(float *)&result[1333].vtable;
      if ( v9 >= (float)-*(float *)&result[1332].owner )
      {
        v9 = -*(float *)&result[1332].owner;
        BYTE1(result[1334].owner) = 1;
        *p_currentState = result[1334].vtable;
      }
      *((_DWORD *)vtable + 6) = v8;
      vtable[7] = v9;
      *((_DWORD *)vtable + 8) = v7;
      result = (StateMethodExecuter *)(*((unsigned __int8 *)vtable + 64) | 0x10);
      *((_BYTE *)vtable + 64) = (_BYTE)result;
    }
  }
  return result;
}
