/* sub_60490828
 * address: 0x60490828   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60490828(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_605054F0(FIELD_U32(a1, 68));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C9F780);
  return result;
}
