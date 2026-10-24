/* sub_6052A18C
 * address: 0x6052A18C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052A18C(StateMethodExecuter *result)
{
  if ( (*((_BYTE *)FIELD_U32(result + (4) * 12, 0x0) + 44) & 1) != 0 )
  {
    *((_BYTE *)FIELD_U32(result + (3) * 12, 0x0) + 64) &= ~1u;
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CAA284);
  }
  return result;
}
