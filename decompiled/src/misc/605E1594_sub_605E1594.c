/* sub_605E1594
 * address: 0x605E1594   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E1594(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 6265);
  if ( ((unsigned __int8)result & 0x20) == 0 )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 6260);
    if ( ((unsigned __int8)result & 2) == 0 )
    {
      result = (StateMethodExecuter *)sub_605DBD64(a1);
      if ( result == (StateMethodExecuter *)1 )
      {
        result = (StateMethodExecuter *)FIELD_U8(a1, 6266);
        if ( ((unsigned __int8)result & 2) == 0 )
        {
          FIELD_U32(a1, 8020) = 2;
          return StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB19E0);
        }
      }
    }
  }
  return result;
}
