/* sub_60404320
 * address: 0x60404320   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60404320(StateMethodExecuter *result)
{
  int v1; // r2
  int v2; // r1
  StateMgr *p_owner; // r2

  v1 = dword_60C99E70;
  if ( result[211].vtable == (void *)2 )
    v1 = -dword_60C99E70;
  v2 = (int)result[40].vtable + v1;
  result[40].vtable = (void *)v2;
  if ( v1 < 0 )
  {
    if ( v2 > 0 )
      return result;
  }
  else if ( v2 < 0 )
  {
    return result;
  }
  p_owner = (StateMgr *)&result[3].owner;
  result[40].vtable = 0;
  if ( HIBYTE(result[225].vtable) )
    return StateMgr__changeState(p_owner, (StateBase *)&dword_60C9A01C);
  else
    return StateMgr__changeState(p_owner, (StateBase *)&dword_60C99EBC);
}
