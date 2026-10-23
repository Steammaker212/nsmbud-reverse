/* sub_604F4280
 * address: 0x604F4280   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F4280(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 40, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( FIELD_U32(a1, 9644) )
      v3 = (StateBase *)&unk_60CA68BC;
    else
      v3 = (StateBase *)&stru_60CA68DC;
    return StateMgr__changeState((StateMgr *)(a1 + 24), v3);
  }
  return result;
}
