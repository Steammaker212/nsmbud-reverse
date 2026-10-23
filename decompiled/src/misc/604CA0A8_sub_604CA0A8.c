/* sub_604CA0A8
 * address: 0x604CA0A8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CA0A8(StateMethodExecuter *result)
{
  if ( !BYTE2(result[403].owner) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA3418);
  return result;
}
