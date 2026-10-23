/* sub_605E7B5C
 * address: 0x605E7B5C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E7B5C(StateMethodExecuter *result)
{
  char *vtable; // lr
  char *i; // r2
  int currentState; // r4
  int owner; // r1
  char *v5; // r1
  int v6; // r1

  if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    vtable = (char *)result[19].vtable;
    if ( vtable )
    {
      for ( i = 0; i != vtable; ++i )
      {
        currentState = result[18].currentState;
        owner = (int)result[18].owner;
        if ( (int)&i[currentState] >= owner )
          currentState -= owner;
        v5 = &i[currentState];
        v6 = *((_DWORD *)result[18].vtable + (_DWORD)v5);
        FIELD_U32(v6, 6264) |= 0x800000u;
      }
    }
    return StateMgr__changeState((StateMgr *)&result[27].currentState, (StateBase *)&dword_60CB1BE8);
  }
  return result;
}
