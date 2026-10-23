/* sub_60666E78
 * address: 0x60666E78   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60666E78(StateMethodExecuter *result)
{
  if ( FIELD_U64(EventMgr__instance, 16) )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB6C74);
  return result;
}
