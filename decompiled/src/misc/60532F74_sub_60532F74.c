/* sub_60532F74
 * address: 0x60532F74   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60532F74(StateMethodExecuter *result)
{
  StateMgr *v1; // r0
  int *v2; // r1

  if ( FIELD_U8(dword_60C99DEC, 524) )
  {
    LOWORD(result[6968].currentState) = 0;
    HIBYTE(result[6968].currentState) = 0;
    BYTE2(result[6969].currentState) = 1;
  }
  else
  {
    v1 = (StateMgr *)&result[3];
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v2 = &dword_60CAAEA4;
    else
      v2 = &dword_60CAAE24;
    return StateMgr__changeState(v1, (StateBase *)v2);
  }
  return result;
}
