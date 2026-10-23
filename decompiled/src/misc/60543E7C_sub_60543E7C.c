/* sub_60543E7C
 * address: 0x60543E7C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60543E7C(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)dword_60CA059C;
  if ( !FIELD_U8(dword_60CA059C, 146856) )
  {
    if ( FIELD_U8(dword_60CA059C, 146852) )
    {
      v3 = &dword_60CAC21C;
    }
    else
    {
      FIELD_U32(a1, 33476) = 5;
      FIELD_U32(a1, 33472) = 5;
      FIELD_U16(a1, 33496) = 0;
      sub_60502548(a1 + 3632);
      FIELD_U16(a1, 4684) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3672));
      if ( FIELD_U8(a1, 33504) )
      {
        sub_608169AC(dword_60CC6B68);
        FIELD_U8(a1, 33504) = 0;
      }
      v3 = &dword_60CABF1C;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
  }
  return result;
}
