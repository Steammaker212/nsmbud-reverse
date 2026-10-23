/* sub_607F40B8
 * address: 0x607F40B8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F40B8(StateMethodExecuter *result)
{
  unsigned int v1; // r2
  int v2; // r2

  v1 = FIELD_U32(dword_60C99DD0, 3796);
  if ( v1 <= 3 )
  {
    v2 = dword_60AF5A10[v1];
    if ( v2 == 1 )
    {
      FIELD_U32(dword_60C99DD0, 3780) |= 1u;
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CC6200);
    }
    else if ( !v2 )
    {
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CC61E0);
    }
  }
  return result;
}
