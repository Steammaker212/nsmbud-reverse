/* sub_604F4FE4
 * address: 0x604F4FE4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F4FE4(int a1)
{
  _DWORD *v2; // r5
  StateMethodExecuter **v3; // r6
  StateMethodExecuter *result; // r0
  StateBase *v5; // r1

  v3 = (StateMethodExecuter **)(a1 + 9636);
  v2 = *(_DWORD **)(a1 + 9636);
  sub_6050229C(v2 + 930);
  sub_60473B58(v2, 0xEu, 0);
  result = *v3;
  if ( !BYTE2((*v3)[396].currentState) )
  {
    sub_60502548(&result[310]);
    result = (StateMethodExecuter *)(*v3)[483].currentState;
    if ( result == (StateMethodExecuter *)2 )
    {
      v5 = (StateBase *)&unk_60CA6A1C;
    }
    else
    {
      if ( result != (StateMethodExecuter *)1 )
        return result;
      v5 = (StateBase *)&unk_60CA69FC;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), v5);
  }
  return result;
}
