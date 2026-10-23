/* sub_604A88AC
 * address: 0x604A88AC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604A88AC(int a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // r6
  unsigned int v4; // r0
  StateMethodExecuter *result; // r0

  v2 = (_DWORD *)(a1 + 279736);
  if ( FIELD_S32(a1, 279736) < 1 )
  {
LABEL_7:
    FIELD_U8(a1, 56) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA1510);
  }
  else
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = 0;
      if ( v3 < 4 )
        v4 = v3;
      result = (StateMethodExecuter *)sub_604A4CB8(a1 + 20556 * v4 + 3732);
      if ( result )
        break;
      if ( (signed int)++v3 >= *v2 )
        goto LABEL_7;
    }
  }
  return result;
}
