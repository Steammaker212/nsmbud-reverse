/* sub_604C2FE8
 * address: 0x604C2FE8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C2FE8(StateMethodExecuter *result)
{
  int v1; // r1

  if ( ((int)result[534].vtable & 0x10F0) != 0
    || (v1 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 20), FIELD_F32(v1, 284) != 0.0)
    || FIELD_F32(v1, 288) != 0.0 )
  {
    BYTE1(result[1168].owner) = 0;
  }
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
    if ( LOBYTE(result[1182].owner) )
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA2D2C);
  }
  return result;
}
