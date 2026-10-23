/* sub_60488094
 * address: 0x60488094   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60488094(StateMethodExecuter *result)
{
  if ( !*((_BYTE *)result[1187].vtable + 10832) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, &stru_60C9F5A0);
  return result;
}
