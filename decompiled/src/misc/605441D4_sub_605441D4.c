/* sub_605441D4
 * address: 0x605441D4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605441D4(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60CC6E04, 24) != 2 && !FIELD_U8(dword_60C99DD0, 3793) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC0DC);
  return result;
}
