/* sub_603E7224
 * address: 0x603E7224   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E7224(StateMethodExecuter *result)
{
  if ( FIELD_U8(dword_60CC62E4, 112) )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (14) * 12, 0x4), (StateBase *)&dword_60C997F4);
  return result;
}
