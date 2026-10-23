/* sub_6049EBEC
 * address: 0x6049EBEC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049EBEC(StateMethodExecuter *result)
{
  int currentState; // r2
  _BYTE *vtable; // r2
  StateMethodExecuter *v3; // r4
  _BYTE *owner; // r2
  void **p_owner; // lr
  int v6; // r2
  int *p_currentState; // r12
  _BYTE *v8; // r1
  _BYTE *v9; // r1
  _BYTE *v10; // r1
  _BYTE *v11; // r1

  currentState = result[1689].currentState;
  if ( FIELD_U8(currentState, 2689) )
    FIELD_U8(currentState, 2695) = 1;
  v3 = result + 1690;
  vtable = result[1690].vtable;
  if ( vtable[2689] )
    vtable[2695] = 1;
  p_owner = &result[1690].owner;
  owner = result[1690].owner;
  if ( owner[2689] )
    owner[2695] = 1;
  p_currentState = &result[1690].currentState;
  v6 = result[1690].currentState;
  if ( FIELD_U8(v6, 2689) )
    FIELD_U8(v6, 2695) = 1;
  v8 = (_BYTE *)result[1689].currentState;
  if ( !v8[2689] || !v8[2691] && !v8[2702] && !v8[2690] )
  {
    v9 = FIELD_U32(v3, 0x0);
    if ( !*((_BYTE *)FIELD_U32(v3, 0x0) + 2689) || !v9[2691] && !v9[2702] && !v9[2690] )
    {
      v10 = *p_owner;
      if ( !*((_BYTE *)*p_owner + 2689) || !v10[2691] && !v10[2702] && !v10[2690] )
      {
        v11 = (_BYTE *)*p_currentState;
        if ( !*(_BYTE *)(*p_currentState + 2689) || !v11[2691] && !v11[2702] && !v11[2690] )
          return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0E8C);
      }
    }
  }
  return result;
}
