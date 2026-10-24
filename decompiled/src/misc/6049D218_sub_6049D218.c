/* sub_6049D218
 * address: 0x6049D218   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049D218(StateMethodExecuter *result)
{
  int currentState; // r2
  unsigned int vtable; // r2
  int v3; // r3
  int v4; // r2
  _BYTE *v5; // r2
  _BYTE *owner; // r2
  int v7; // r2

  currentState = result[388].currentState;
  if ( BYTE2(result[389].currentState) )
    return result;
  if ( HIBYTE(result[389].currentState) )
  {
    if ( currentState != 1 )
    {
      if ( !currentState )
      {
        FIELD_U32(result + (3) * 12, 0x4) = &dword_60CA0F6C;
        return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0ECC);
      }
      return result;
    }
    goto LABEL_11;
  }
  vtable = (unsigned int)result[1693].vtable;
  if ( (vtable & 0x4000) == 0 )
  {
    v3 = result[1827].currentState;
    if ( (v3 & 0x4000) == 0 )
    {
      if ( result[1874].currentState < 3 || ((vtable | v3) & 0x2000) == 0 )
        return result;
LABEL_11:
      FIELD_U32(result + (3) * 12, 0x4) = &dword_60CA0C6C;
      result[1873].owner = 0;
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0C4C);
    }
  }
  v4 = result[1689].currentState;
  if ( FIELD_U8(v4, 2689) )
    FIELD_U8(v4, 2695) = 1;
  v5 = result[1690].vtable;
  if ( v5[2689] )
    v5[2695] = 1;
  owner = result[1690].owner;
  if ( owner[2689] )
    owner[2695] = 1;
  v7 = result[1690].currentState;
  if ( FIELD_U8(v7, 2689) )
    FIELD_U8(v7, 2695) = 1;
  result[388].currentState = 0;
  FIELD_U32(result + (3) * 12, 0x4) = &dword_60CA0F6C;
  return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0EAC);
}
