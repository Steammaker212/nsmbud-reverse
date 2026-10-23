/* sub_6051EB08
 * address: 0x6051EB08   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6051EB08(StateMethodExecuter *result)
{
  int owner_low; // r1
  StateMgr *v2; // r0
  int *v3; // r1

  if ( !BYTE2(result[395].currentState) )
  {
    owner_low = LOBYTE(result[1252].owner);
    v2 = (StateMgr *)&result[2];
    if ( owner_low )
      v3 = &dword_60CA9094;
    else
      v3 = &dword_60CA90B4;
    return StateMgr__changeState(v2, (StateBase *)v3);
  }
  return result;
}
