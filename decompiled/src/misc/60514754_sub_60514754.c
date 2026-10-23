/* sub_60514754
 * address: 0x60514754   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60514754(StateMethodExecuter *result)
{
  void *vtable; // r2
  int currentState; // r3
  __int16 v3; // r2
  StateMethodExecuter *owner; // r3
  _DWORD *p_owner; // r4
  StateMethodExecuter *v6; // r12
  int v7; // r1
  StateMethodExecuter *v8; // lr

  if ( BYTE2(result[386].owner) )
    return result;
  if ( HIBYTE(result[386].owner) )
  {
    if ( !LOBYTE(result[386].owner) )
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA8648);
    return result;
  }
  vtable = result[1247].vtable;
  if ( ((unsigned __int16)vtable & 0x4000) != 0
    || (currentState = result[1246].currentState, (currentState & 0x4000) != 0) )
  {
    result[385].owner = result[1074].owner;
    return (StateMethodExecuter *)sub_60502694((int)&result[299].currentState);
  }
  v3 = (unsigned __int16)vtable | currentState;
  if ( (v3 & 0x2000) != 0 )
    return (StateMethodExecuter *)sub_60502694((int)&result[299].currentState);
  if ( BYTE2(result[386].currentState) )
    return result;
  p_owner = &result[385].owner;
  owner = (StateMethodExecuter *)result[385].owner;
  v6 = (StateMethodExecuter *)result[1076].vtable;
  if ( v6 == owner )
  {
    if ( (v3 & 0x80) == 0 )
      return result;
    v7 = 12916;
LABEL_20:
    result = *(StateMethodExecuter **)((char *)&FIELD_U32(result, 0x0) + v7);
    *p_owner = result;
    return result;
  }
  v8 = (StateMethodExecuter *)result[1076].owner;
  if ( v8 == owner )
  {
    if ( (v3 & 0x40) != 0 )
    {
      *p_owner = v6;
      return result;
    }
    if ( (v3 & 0x80) != 0 )
    {
      v7 = 12920;
      goto LABEL_20;
    }
  }
  else
  {
    result = (StateMethodExecuter *)result[1076].currentState;
    if ( result == owner && (v3 & 0x40) != 0 )
      *p_owner = v8;
  }
  return result;
}
