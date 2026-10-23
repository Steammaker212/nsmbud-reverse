/* sub_60544510
 * address: 0x60544510   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60544510(StateMethodExecuter *result)
{
  unsigned int v1; // r1
  int v2; // r1

  v1 = FIELD_U32(dword_60C99DD0, 3796);
  if ( v1 <= 3 )
  {
    v2 = dword_60AF5A10[v1];
    if ( v2 == 1 )
    {
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC1FC);
    }
    else if ( !v2 )
    {
      result[3].owner = &dword_60CAC23C;
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC19C);
    }
  }
  return result;
}
