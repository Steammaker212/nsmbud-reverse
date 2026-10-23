/* sub_606F17C4
 * address: 0x606F17C4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606F17C4(StateMethodExecuter *result)
{
  float v1; // s0

  v1 = *(float *)&result[9].vtable;
  if ( v1 > FIELD_F32(dword_60CC6484, 40) && v1 < FIELD_F32(dword_60CC6484, 48) )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBC2BC);
  return result;
}
