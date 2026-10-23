/* sub_604D75E4
 * address: 0x604D75E4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D75E4(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 4682);
  if ( !result )
  {
    FIELD_U32(a1, 6124) = FIELD_U32(a1, 6128);
    sub_60502548(a1 + 3640);
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA4058);
  }
  return result;
}
