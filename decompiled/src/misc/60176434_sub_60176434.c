/* sub_60176434
 * address: 0x60176434   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60176434(int a1)
{
  int v2; // r5
  StateBase *v3; // r1

  if ( FIELD_U32(dword_60CC6D78, 412) == FIELD_U32(a1, 240) )
  {
    v2 = FIELD_U32(dword_60CC6D78, 424);
    if ( sub_6040E460((unsigned __int8)v2) == 1 )
    {
      if ( v2 == sub_6021FF4C(FIELD_U32(a1, 240), FIELD_U32(a1, 352)) )
      {
        FIELD_U8(a1, 628) = 1;
        v3 = &stru_60C88D38;
      }
      else
      {
        FIELD_U8(a1, 628) = 0;
        v3 = &stru_60C88C78;
      }
    }
    else
    {
      v3 = (StateBase *)&dword_60C88C38;
    }
  }
  else
  {
    v3 = (StateBase *)&dword_60C88C38;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 284), v3);
}
