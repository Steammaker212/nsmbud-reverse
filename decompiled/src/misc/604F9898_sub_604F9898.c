/* sub_604F9898
 * address: 0x604F9898   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F9898(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 40, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U8(a1, 3688) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA6F14);
  }
  return result;
}
