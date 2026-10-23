/* sub_602083C0
 * address: 0x602083C0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602083C0(int a1)
{
  StateMethodExecuter *result; // r0

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C7F4);
  result = (StateMethodExecuter *)dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)sub_6019112C(dword_60C8996C);
    if ( result == (StateMethodExecuter *)52 )
      return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8C874);
  }
  return result;
}
