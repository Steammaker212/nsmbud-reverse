/* sub_601A1D18
 * address: 0x601A1D18   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A1D18(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60CC6E04, 24) != 2 )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (238) * 12, 0x8), (StateBase *)&dword_60C89EDC);
  return result;
}
