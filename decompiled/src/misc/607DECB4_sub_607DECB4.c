/* sub_607DECB4
 * address: 0x607DECB4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607DECB4(StateMethodExecuter *result)
{
  if ( !LOBYTE(FIELD_U32(result + (328) * 12, 0x8)) )
    ++FIELD_U32(result + (329) * 12, 0x0);
  if ( LOBYTE(FIELD_U32(result + (329) * 12, 0x4)) )
  {
    if ( FIELD_U32(result + (329) * 12, 0x0) >= (void *)0xB4 )
      return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (17) * 12, 0x8), (StateBase *)&dword_60CC5794);
  }
  return result;
}
