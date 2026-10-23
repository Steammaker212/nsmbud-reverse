/* sub_6053CBC8
 * address: 0x6053CBC8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053CBC8(StateMethodExecuter *result)
{
  if ( dword_60C99DD0 )
  {
    if ( FIELD_U32(dword_60C99DD0, 3796) == 3 )
    {
      FIELD_U32(dword_60C99DD0, 3780) |= 2u;
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB8F4);
    }
  }
  return result;
}
