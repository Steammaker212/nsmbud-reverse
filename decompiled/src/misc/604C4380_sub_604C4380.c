/* sub_604C4380
 * address: 0x604C4380   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C4380(StateMethodExecuter *result)
{
  StateMgr *v1; // r0
  int *v2; // r1
  int v3; // r1

  if ( !LOBYTE(result[1157].currentState)
    && !BYTE1(result[1157].currentState)
    && !BYTE2(result[1157].currentState)
    && !HIBYTE(result[1157].currentState)
    && !LOBYTE(result[1158].vtable)
    && !BYTE1(result[1158].vtable)
    && !BYTE2(result[1158].vtable)
    && !HIBYTE(result[1158].vtable)
    && !LOBYTE(result[1158].owner)
    && !BYTE1(result[1158].owner)
    && !BYTE2(result[1158].owner)
    && !HIBYTE(result[1158].owner) )
  {
    if ( FIELD_U8(dword_60C89E18, 254212) )
    {
      v1 = (StateMgr *)&result[2];
      v2 = &dword_60CA2EAC;
    }
    else
    {
      v3 = BYTE2(result[1180].owner);
      v1 = (StateMgr *)&result[2];
      if ( v3 )
        v2 = &dword_60CA2E8C;
      else
        v2 = &dword_60CA2C0C;
    }
    return StateMgr__changeState(v1, (StateBase *)v2);
  }
  return result;
}
