/* sub_605449F8
 * address: 0x605449F8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605449F8(StateMethodExecuter *result)
{
  if ( !FIELD_U8(dword_60C99E2C, 638272) )
  {
    if ( FIELD_U32(dword_60C99E2C, 638252) == 3 )
    {
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC21C);
    }
    else
    {
      result[2789].currentState = 3;
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC2FC);
    }
  }
  return result;
}
