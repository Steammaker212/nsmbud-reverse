/* sub_6049CF50
 * address: 0x6049CF50   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049CF50(StateMethodExecuter *result)
{
  int currentState; // lr
  unsigned int v2; // r2
  unsigned int v3; // r3
  _BYTE *v4; // r3
  bool v5; // zf
  int *p_currentState; // r1
  StateMgr *v7; // r0
  int *v8; // r1

  currentState = result[1874].currentState;
  if ( currentState < 1 )
  {
LABEL_11:
    p_currentState = &result[1865].currentState;
    v7 = (StateMgr *)&result[2];
    if ( FIELD_U8(dword_60C99DEC, 522) )
    {
      *((_BYTE *)p_currentState + 5) = 1;
      *((_BYTE *)p_currentState + 4) = 1;
      *((_BYTE *)p_currentState + 3) = 1;
      *((_BYTE *)p_currentState + 2) = 1;
      *((_BYTE *)p_currentState + 1) = 1;
      *(_BYTE *)p_currentState = 1;
      *((_BYTE *)p_currentState + 6) = 1;
      v8 = &dword_60CA0C0C;
    }
    else
    {
      *((_BYTE *)p_currentState + 5) = 0;
      *((_BYTE *)p_currentState + 4) = 0;
      *((_BYTE *)p_currentState + 3) = 0;
      *((_BYTE *)p_currentState + 2) = 0;
      *((_BYTE *)p_currentState + 1) = 0;
      *(_BYTE *)p_currentState = 0;
      *((_BYTE *)p_currentState + 6) = 0;
      v8 = &dword_60CA0C2C;
    }
    return StateMgr__changeState(v7, (StateBase *)v8);
  }
  else
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = 0;
      if ( v2 < 4 )
        v3 = v2;
      v4 = (_BYTE *)*(&result[1689].currentState + v3);
      v5 = v4[2691] == 0;
      if ( !v4[2691] )
        v5 = v4[2701] == 0;
      if ( !v5 || v4[2690] )
        break;
      if ( (int)++v2 >= currentState )
        goto LABEL_11;
    }
  }
  return result;
}
