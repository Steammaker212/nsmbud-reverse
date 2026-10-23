/* sub_6049E554
 * address: 0x6049E554   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049E554(StateMethodExecuter *result)
{
  void *owner; // r1
  StateMgr *v2; // r0
  int *v3; // r1

  if ( !BYTE1(result[1875].vtable) )
  {
    owner = result[1873].owner;
    v2 = (StateMgr *)&result[2];
    if ( owner == (void *)2 )
      v3 = &dword_60CA0DCC;
    else
      v3 = &dword_60CA0C8C;
    return StateMgr__changeState(v2, (StateBase *)v3);
  }
  return result;
}
