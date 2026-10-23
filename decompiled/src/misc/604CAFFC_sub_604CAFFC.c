/* sub_604CAFFC
 * address: 0x604CAFFC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CAFFC(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 4842);
  if ( !result )
  {
    sub_60502548(a1 + 3800);
    FIELD_U16(a1, 4852) = 0;
    sub_6047EABC((_DWORD *)(a1 + 3840));
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA3578);
  }
  return result;
}
