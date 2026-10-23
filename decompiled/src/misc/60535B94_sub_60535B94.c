/* sub_60535B94
 * address: 0x60535B94   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60535B94(StateMethodExecuter *result)
{
  if ( BYTE2(result[4375].owner) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB144);
  if ( HIBYTE(result[1395].vtable) && result[1394].vtable == (void *)11 )
  {
    BYTE1(result[4375].owner) = 1;
    result[4].owner = &dword_60CAB184;
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAAF44);
  }
  else if ( !BYTE2(result[1395].owner) && !BYTE2(result[4218].currentState) )
  {
    if ( (BYTE1(result[6967].vtable) & 0x40) != 0 )
    {
      BYTE1(result[4375].owner) = 1;
      result[1394].vtable = (void *)11;
      result[4].owner = &dword_60CAB184;
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAAF24);
    }
    else if ( result[4372].currentState )
    {
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB1C4);
    }
  }
  return result;
}
