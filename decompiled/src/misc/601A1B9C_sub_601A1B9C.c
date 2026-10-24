/* sub_601A1B9C
 * address: 0x601A1B9C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A1B9C(StateMethodExecuter *result)
{
  if ( !FIELD_U8(dword_60C99DD0, 3793) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (238) * 12, 0x8), (StateBase *)&dword_60C89E1C);
  return result;
}
