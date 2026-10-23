/* sub_604DF968
 * address: 0x604DF968   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604DF968(StateMethodExecuter *result)
{
  if ( FIELD_U8(dword_60CC62E4, 112) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA5244);
  return result;
}
