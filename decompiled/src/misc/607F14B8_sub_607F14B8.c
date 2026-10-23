/* sub_607F14B8
 * address: 0x607F14B8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F14B8(StateMethodExecuter *result)
{
  int *v1; // r1

  if ( FIELD_U32(dword_60C99E2C, 615724) == 1 )
  {
    if ( FIELD_U8(dword_60C99E2C, 638276) )
    {
      v1 = &dword_60CC5F68;
    }
    else
    {
      if ( !FIELD_U8(dword_60C99E2C, 638277) )
        return result;
      v1 = &dword_60CC5F88;
    }
  }
  else
  {
    v1 = &dword_60CC5FA8;
  }
  return StateMgr__changeState((StateMgr *)&result[17].currentState, (StateBase *)v1);
}
