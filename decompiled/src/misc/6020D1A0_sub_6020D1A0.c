/* sub_6020D1A0
 * address: 0x6020D1A0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020D1A0(int a1)
{
  StateMethodExecuter *result; // r0

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CC4C);
  result = (StateMethodExecuter *)dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)sub_6019112C(dword_60C8996C);
    if ( result == (StateMethodExecuter *)36 )
    {
      if ( sub_601916EC(dword_60C8996C) == 32 )
        StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8CC8C);
      return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
    else if ( result == (StateMethodExecuter *)52 )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CD6C);
    }
  }
  return result;
}
