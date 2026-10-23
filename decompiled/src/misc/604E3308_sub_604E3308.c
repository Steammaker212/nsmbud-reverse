/* sub_604E3308
 * address: 0x604E3308   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E3308(StateMethodExecuter *result)
{
  int v1; // r3
  _BYTE *v2; // lr
  _DWORD *v3; // r4
  void *owner; // r1
  bool v5; // zf
  StateMgr *v6; // r0

  if ( !BYTE1(result[608].currentState) || result[607].owner == (void *)2 )
  {
    v1 = BYTE1(result[917].vtable);
    if ( (!BYTE1(result[917].vtable) || result[915].currentState == 2)
      && (!BYTE1(result[1225].owner) || result[1224].vtable == (void *)2) )
    {
      v2 = (char *)&result[1533].currentState + 1;
      if ( !BYTE1(result[1533].currentState) || result[1532].owner == (void *)2 )
      {
        v3 = (_DWORD *)dword_60C99DEC;
        if ( BYTE1(result[608].currentState) )
        {
          FIELD_U32(dword_60C99DEC, 96) = result[606].owner;
          v1 = BYTE1(result[917].vtable);
        }
        if ( v1 )
          v3[42] = result[914].currentState;
        if ( BYTE1(result[1225].owner) )
          v3[60] = result[1223].vtable;
        owner = (void *)(unsigned __int8)*v2;
        v5 = owner == 0;
        if ( *v2 )
          owner = result[1531].owner;
        v6 = (StateMgr *)&result[2];
        if ( !v5 )
          v3[78] = owner;
        return StateMgr__changeState(v6, (StateBase *)&dword_60CA584C);
      }
    }
  }
  return result;
}
