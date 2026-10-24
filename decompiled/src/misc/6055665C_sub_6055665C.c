/* sub_6055665C
 * address: 0x6055665C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055665C(StateMethodExecuter *result)
{
  int currentState; // r1
  StateMgr *v2; // r0
  int *v3; // r1

  if ( !LOBYTE(result[571].currentState) )
  {
    currentState = FIELD_U32(result + (570) * 12, 0x8);
    v2 = (StateMgr *)&result[2];
    if ( currentState )
      v3 = &dword_60CAD5C8;
    else
      v3 = &dword_60CAD588;
    return StateMgr__changeState(v2, (StateBase *)v3);
  }
  return result;
}
