/* sub_6049D080
 * address: 0x6049D080   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049D080(StateMethodExecuter *result)
{
  int *p_currentState; // r1
  int currentState; // r2
  void *vtable; // r2
  int v4; // r3
  __int16 v5; // r2

  p_currentState = &result[388].currentState;
  currentState = result[388].currentState;
  if ( !BYTE2(result[389].currentState) )
  {
    if ( HIBYTE(result[389].currentState) )
    {
      if ( currentState )
      {
        if ( (currentState | 1) == 3 )
          return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0C6C);
      }
      else
      {
        result[3].owner = &dword_60CA0FAC;
        return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0ECC);
      }
    }
    else
    {
      vtable = result[1693].vtable;
      if ( ((unsigned __int16)vtable & 0x4000) != 0 || (v4 = result[1827].currentState, (v4 & 0x4000) != 0) )
      {
        *p_currentState = 0;
        result[3].owner = &dword_60CA0FAC;
        return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0EAC);
      }
      else
      {
        v5 = (unsigned __int16)vtable | v4;
        if ( (v5 & 0x80) != 0 )
        {
          *p_currentState = 3;
          return (StateMethodExecuter *)3;
        }
        else if ( (v5 & 0x40) != 0 )
        {
          *p_currentState = 2;
          return (StateMethodExecuter *)2;
        }
        else if ( (v5 & 0x2000) != 0 )
        {
          result[3].owner = &dword_60CA0C6C;
          return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0C4C);
        }
      }
    }
  }
  return result;
}
