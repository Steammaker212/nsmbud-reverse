/* sub_60654FF4
 * address: 0x60654FF4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60654FF4(int a1)
{
  StateMethodExecuter *result; // r0
  StateMethodExecuter *v3; // r5

  result = (StateMethodExecuter *)sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
  v3 = result;
  if ( result )
  {
    result = (StateMethodExecuter *)sub_605BF550(a1 + 7448);
    if ( result >= v3 )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB63C4);
  }
  return result;
}
