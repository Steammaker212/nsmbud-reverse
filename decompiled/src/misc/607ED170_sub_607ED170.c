/* sub_607ED170
 * address: 0x607ED170   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607ED170(StateMethodExecuter *result)
{
  StateMgr *v1; // r0
  int *v2; // r1

  if ( !LOBYTE(result[5264].currentState) )
  {
    if ( HIBYTE(result[5264].currentState) )
    {
      v1 = (StateMgr *)&result[18];
      v2 = &dword_60CC5CCC;
    }
    else
    {
      v1 = (StateMgr *)&result[18];
      if ( FIELD_U32(dword_60C99DEC, 508) == 4 )
        v2 = &dword_60CC5D2C;
      else
        v2 = &dword_60CC5D6C;
    }
    return StateMgr__changeState(v1, (StateBase *)v2);
  }
  return result;
}
