/* sub_604986CC
 * address: 0x604986CC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604986CC(int a1)
{
  _BYTE *v2; // r5
  StateMethodExecuter *result; // r0

  v2 = (_BYTE *)(a1 + 146857);
  if ( FIELD_U8(a1, 146857) )
  {
    result = (StateMethodExecuter *)sub_60499A20(a1);
    if ( !result )
    {
      result = (StateMethodExecuter *)FIELD_U8(a1, 4690);
      if ( !FIELD_U8(a1, 4690) )
      {
        sub_605025FC(a1 + 3648);
        FIELD_U16(a1, 4700) = 0;
        result = (StateMethodExecuter *)sub_6047EABC((_DWORD *)(a1 + 3688));
        *v2 = 0;
      }
    }
  }
  else
  {
    FIELD_U8(a1, 56) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60CA06C0);
  }
  return result;
}
