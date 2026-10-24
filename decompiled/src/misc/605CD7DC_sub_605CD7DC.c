/* sub_605CD7DC
 * address: 0x605CD7DC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CD7DC(StateMethodExecuter *result)
{
  if ( !LOBYTE(FIELD_U32(result + (7) * 12, 0x8)) )
  {
    *(_DWORD *)FIELD_U32(result + (3) * 12, 0x0) += FIELD_U32(result + (5) * 12, 0x4);
    if ( --LOBYTE(FIELD_U32(result + (9) * 12, 0x0)) == 0 )
      return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CB1004);
  }
  return result;
}
