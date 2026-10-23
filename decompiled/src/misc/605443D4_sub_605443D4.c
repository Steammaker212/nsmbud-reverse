/* sub_605443D4
 * address: 0x605443D4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605443D4(StateMethodExecuter *result)
{
  if ( !FIELD_U8(dword_60C89E18, 299212) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC1FC);
  return result;
}
