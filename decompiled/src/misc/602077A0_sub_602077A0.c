/* sub_602077A0
 * address: 0x602077A0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602077A0(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = FIELD_U32(result + (29) * 12, 0x8) - 1;
  FIELD_U32(result + (29) * 12, 0x8) = v1;
  if ( !v1 )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (24) * 12, 0x8), (StateBase *)&unk_60C8C72C);
  return result;
}
