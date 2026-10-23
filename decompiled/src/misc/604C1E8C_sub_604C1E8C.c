/* sub_604C1E8C
 * address: 0x604C1E8C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C1E8C(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    if ( (FIELD_U8(dword_60CC6D78, 44) & 8) != 0 )
    {
      v3 = &dword_60CA2ECC;
    }
    else
    {
      result = (StateMethodExecuter *)FIELD_U8(a1, 14181);
      if ( !FIELD_U8(a1, 14181) )
        return result;
      v3 = &dword_60CA2C0C;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
  }
  return result;
}
