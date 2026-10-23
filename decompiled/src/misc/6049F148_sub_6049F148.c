/* sub_6049F148
 * address: 0x6049F148   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049F148(StateMethodExecuter *result)
{
  void *owner; // r1
  StateMgr *v2; // r0
  int *v3; // r1

  if ( !BYTE1(result[1875].owner) )
  {
    owner = result[1873].owner;
    v2 = (StateMgr *)&result[2];
    if ( owner == (void *)2 )
      v3 = &dword_60CA0D6C;
    else
      v3 = &dword_60CA0F4C;
    return StateMgr__changeState(v2, (StateBase *)v3);
  }
  return result;
}
