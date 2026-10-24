/* sub_604AFD68
 * address: 0x604AFD68   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AFD68(StateMgr *a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C((int)&FIELD_U32(a1 + (1) * 16, 0x4), 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
    return StateMgr__changeState(a1 + 382, (StateBase *)&dword_60CA19B4);
  return result;
}
