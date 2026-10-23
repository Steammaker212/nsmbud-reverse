/* sub_60557DE4
 * address: 0x60557DE4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60557DE4(StateMethodExecuter *result)
{
  if ( !BYTE1(result[307].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD6B8);
  return result;
}
