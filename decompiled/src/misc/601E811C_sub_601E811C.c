/* sub_601E811C
 * address: 0x601E811C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E811C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_60190CEC(dword_60C8996C);
  if ( result == (StateMethodExecuter *)1 )
  {
    if ( sub_601906A4((_DWORD *)dword_60C8996C) == 1 )
    {
      return (StateMethodExecuter *)sub_60190978(dword_60C8996C);
    }
    else
    {
      if ( FIELD_U8(a1, 66) )
      {
        sub_601E7F30();
        FIELD_U8(a1, 66) = 0;
      }
      FIELD_U8(a1, 67) = 1;
      return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60C8B148);
    }
  }
  return result;
}
