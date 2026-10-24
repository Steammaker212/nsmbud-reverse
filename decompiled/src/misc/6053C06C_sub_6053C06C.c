/* sub_6053C06C
 * address: 0x6053C06C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053C06C(StateMethodExecuter *result)
{
  if ( BYTE2(result[4373].currentState) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB7B4);
  if ( HIBYTE(result[1393].owner) && result[1392].owner == (void *)6 )
  {
    BYTE1(result[4373].currentState) = 1;
    FIELD_U32(result + (4) * 12, 0x4) = &dword_60CAB7F4;
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB5D4);
  }
  else if ( !BYTE2(result[1393].currentState) && !BYTE2(result[4217].vtable) )
  {
    if ( (result[6961].currentState & 0x4000) != 0 )
    {
      BYTE1(result[4373].currentState) = 1;
      result[1392].owner = (void *)6;
      FIELD_U32(result + (4) * 12, 0x4) = &dword_60CAB7F4;
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB5B4);
    }
    else if ( result[4371].vtable )
    {
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB834);
    }
  }
  return result;
}
