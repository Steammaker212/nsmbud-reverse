/* sub_604A3DFC
 * address: 0x604A3DFC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604A3DFC(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_604A50D4();
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U8(a1, 40) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA10D0);
  }
  return result;
}
