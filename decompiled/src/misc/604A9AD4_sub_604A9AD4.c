/* sub_604A9AD4
 * address: 0x604A9AD4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604A9AD4(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v5; // r2
  int v6; // r1
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 279736);
  if ( v2 < 1 )
  {
LABEL_8:
    v6 = 0;
  }
  else
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = 0;
      if ( v3 < 4 )
        v4 = v3;
      v5 = a1 + 20556 * v4;
      if ( FIELD_U8(v5, 24276) )
      {
        if ( FIELD_U32(v5, 24228) == 6 )
          break;
      }
      if ( (int)++v3 >= v2 )
        goto LABEL_8;
    }
    v6 = 1;
  }
  result = (StateMethodExecuter *)sub_604ABF6C(a1, v6);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U8(a1, 56) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA15B0);
  }
  return result;
}
