/* sub_6055B734
 * address: 0x6055B734   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055B734(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)FIELD_U8(a1, 4650);
  if ( !result )
  {
    if ( FIELD_U32(a1, 13312) == 1 )
    {
      FIELD_U8(a1, 13308) = 0;
      sub_60502548(a1 + 3608);
      FIELD_U8(dword_60C99DEC, 36) = 1;
      v3 = &dword_60CADBF4;
    }
    else
    {
      v3 = &dword_60CADC74;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v3);
  }
  return result;
}
