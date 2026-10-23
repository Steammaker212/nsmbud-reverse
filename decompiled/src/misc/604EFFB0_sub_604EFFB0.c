/* sub_604EFFB0
 * address: 0x604EFFB0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EFFB0(StateMethodExecuter *result)
{
  int vtable; // r1

  vtable = (int)result[6206].vtable;
  result[6206].vtable = (void *)(vtable - 1);
  if ( vtable <= 1 )
    return StateMgr__changeState((StateMgr *)&result[3542], (StateBase *)&dword_60CA6560);
  return result;
}
