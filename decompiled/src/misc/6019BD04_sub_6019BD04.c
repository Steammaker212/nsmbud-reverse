/* sub_6019BD04
 * address: 0x6019BD04   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6019BD04(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 12892);
  if ( result )
  {
    sub_6019EBD0(dword_60C89DF8);
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89D74);
  }
  return result;
}
