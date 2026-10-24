/* sub_6051E8CC
 * address: 0x6051E8CC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6051E8CC(StateMethodExecuter *result)
{
  int currentState; // r1
  int v2; // r2
  int v3; // r1

  if ( HIBYTE(result[395].currentState) )
  {
    currentState = FIELD_U32(result + (394) * 12, 0x8);
    switch ( currentState )
    {
      case 2:
        return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA90F4);
      case 1:
        *((_BYTE *)result[1253].vtable + 64) &= ~1u;
        *((_BYTE *)FIELD_U32(result + (1253) * 12, 0x4) + 64) &= ~1u;
        LOBYTE(result[1253].currentState) = 1;
        return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA90B4);
      case 0:
        *((_BYTE *)result[1253].vtable + 64) &= ~1u;
        *((_BYTE *)FIELD_U32(result + (1253) * 12, 0x4) + 64) &= ~1u;
        LOBYTE(result[1253].currentState) = 1;
        return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA9094);
    }
    return result;
  }
  if ( !BYTE2(result[396].vtable) && !BYTE2(result[395].currentState) )
  {
    v2 = 0;
    HIBYTE(result[395].currentState) = 0;
    if ( result[1252].currentState < 5u )
      v2 = result[1252].currentState;
    v3 = *((_DWORD *)&result[1084].owner + 101 * v2);
    if ( (v3 & 0x140) != 0 )
    {
      if ( LOBYTE(result[1252].owner) )
        return result;
    }
    else
    {
      if ( (v3 & 0x10080) == 0 )
      {
        if ( (v3 & 0x4000) != 0 )
          return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA90D4);
        return result;
      }
      if ( !LOBYTE(result[1252].owner) )
        return result;
    }
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA9074);
  }
  return result;
}
