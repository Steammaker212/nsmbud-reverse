/* sub_607ED414
 * address: 0x607ED414   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607ED414(StateMethodExecuter *result)
{
  if ( !FIELD_U8(dword_60CAADA8, 83625) && !FIELD_U8(dword_60CAB438, 83565) )
  {
    if ( BYTE1(result[5563].owner) )
    {
      if ( FIELD_U32(dword_60CC6E04, 24) == 2 )
        return result;
      BYTE1(result[5563].owner) = 0;
    }
    return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC5D0C);
  }
  return result;
}
