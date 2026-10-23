/* sub_601E26AC
 * address: 0x601E26AC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E26AC(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_6018EA74();
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U32(a1, 332) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C894E0);
  }
  return result;
}
