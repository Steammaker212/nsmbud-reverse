/* sub_604C23C4
 * address: 0x604C23C4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C23C4(int a1)
{
  int *v2; // r1
  StateMethodExecuter *result; // r0
  bool v4; // zf

  if ( sub_601916EC(dword_60C8996C) == 51 )
  {
    v2 = &dword_60CA2C0C;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v2);
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 14162);
  v4 = result == 0;
  if ( FIELD_U8(a1, 14162) )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 14187);
    v4 = result == 0;
  }
  if ( !v4 )
  {
    result = (StateMethodExecuter *)sub_60190968(dword_60C8996C);
    if ( !result )
    {
      v2 = &dword_60CA2C2C;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v2);
    }
  }
  return result;
}
