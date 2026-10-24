/* sub_605448C0
 * address: 0x605448C0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605448C0(StateMethodExecuter *result)
{
  if ( !LOBYTE(FIELD_U32(result + (389) * 12, 0x4)) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC29C);
  return result;
}
