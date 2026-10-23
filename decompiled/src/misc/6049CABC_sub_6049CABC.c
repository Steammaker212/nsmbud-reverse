/* sub_6049CABC
 * address: 0x6049CABC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049CABC(StateMethodExecuter *result)
{
  bool v1; // zf

  if ( !BYTE1(result[1875].vtable) )
  {
    v1 = FIELD_U8(dword_60C99DEC, 522) == 0;
    if ( FIELD_U8(dword_60C99DEC, 522) )
      v1 = BYTE1(result[1081].currentState) == 0;
    if ( v1 )
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0BEC);
  }
  return result;
}
