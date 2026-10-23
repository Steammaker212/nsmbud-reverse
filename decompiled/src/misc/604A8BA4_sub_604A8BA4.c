/* sub_604A8BA4
 * address: 0x604A8BA4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604A8BA4(int a1)
{
  int v2; // r1
  StateMethodExecuter *result; // r0
  bool v4; // zf
  bool v5; // zf
  StateBase *v6; // r1

  v2 = 0;
  result = (StateMethodExecuter *)(a1 + 97958);
  while ( 1 )
  {
    if ( HIBYTE(result[-2].currentState) )
    {
      if ( BYTE1(result[-1].currentState) )
        break;
      v4 = BYTE1(result[-1].vtable) == 0;
      if ( !BYTE1(result[-1].vtable) )
        v4 = LOBYTE(FIELD_U32(result, 0x0)) == 0;
      if ( !v4 )
        break;
      v5 = HIBYTE(result[-1].currentState) == 0;
      if ( !HIBYTE(result[-1].currentState) )
        v5 = LOBYTE(result[-1].vtable) == 0;
      if ( !v5 )
        break;
    }
    ++v2;
    result += 249;
    if ( v2 >= 61 )
    {
      if ( *(_DWORD *)(sub_60834614(result) + 492) == 2 && FIELD_S32(a1, 279736) >= 3 )
      {
        FIELD_U8(a1, 56) = 1;
        v6 = (StateBase *)&unk_60CA1590;
      }
      else
      {
        FIELD_U8(a1, 56) = 1;
        v6 = (StateBase *)&unk_60CA1530;
      }
      return StateMgr__changeState((StateMgr *)(a1 + 40), v6);
    }
  }
  return result;
}
