/* sub_6055A7F8
 * address: 0x6055A7F8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055A7F8(StateMethodExecuter *result)
{
  if ( *((_BYTE *)result[296].vtable + 16) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADAAC);
  return result;
}
