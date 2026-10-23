/* sub_604CB6A0
 * address: 0x604CB6A0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CB6A0(StateMethodExecuter *result)
{
  if ( result[7434].owner != (void *)9 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA3438);
  return result;
}
