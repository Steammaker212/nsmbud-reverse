/* sub_60549C1C
 * address: 0x60549C1C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60549C1C(StateMethodExecuter *result)
{
  if ( LOBYTE(FIELD_U32(result + (299) * 12, 0x8)) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC7D0);
  return result;
}
