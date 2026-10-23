/* sub_606DDFDC
 * address: 0x606DDFDC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606DDFDC(StateMethodExecuter *result)
{
  int currentState; // r2
  char *vtable; // r3
  __int64 v3; // r2
  unsigned int v4; // lr
  unsigned int v5; // r12
  unsigned int v6; // r4
  int v7; // r5
  int currentState_high; // r2
  bool v9; // zf
  __int16 v10; // r2

  currentState = result[561].currentState;
  vtable = (char *)result[562].vtable;
  if ( currentState < 0 )
  {
    v6 = 0;
    v5 = (unsigned __int64)(result[561].currentState + (__int64)(int)vtable) >> 32;
    LODWORD(v3) = &vtable[result[561].currentState];
    v4 = v3;
    v3 = (unsigned int)v3;
  }
  else
  {
    if ( !currentState )
    {
      v7 = 0;
      goto LABEL_9;
    }
    v4 = 0;
    v5 = 0;
    v3 = currentState - (__int64)(int)vtable;
    v6 = v3;
  }
  v7 = __SPAIR64__(v5, v4) < __SPAIR64__(HIDWORD(v3), v6);
  if ( __SPAIR64__(v5, v4) < __SPAIR64__(HIDWORD(v3), v6) )
    v7 = v3;
  result[561].currentState = v7;
LABEL_9:
  result[13].owner = (char *)result[13].owner + v7;
  currentState_high = HIWORD(result[565].currentState);
  v9 = currentState_high == 0;
  if ( HIWORD(result[565].currentState) )
  {
    v10 = currentState_high - 1;
    HIWORD(result[565].currentState) = v10;
    v9 = v10 == 0;
  }
  if ( v9 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBBC2C);
  return result;
}
