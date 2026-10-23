/* sub_60643510
 * address: 0x60643510   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60643510(StateMethodExecuter *result)
{
  if ( BYTE1(result[509].vtable) > (unsigned int)LOBYTE(result[509].vtable) )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB5AEC);
  return result;
}
