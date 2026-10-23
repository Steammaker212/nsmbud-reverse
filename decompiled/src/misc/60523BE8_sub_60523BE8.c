/* sub_60523BE8
 * address: 0x60523BE8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60523BE8(int a1)
{
  StateMethodExecuter *result; // r0
  _DWORD *v3; // r0
  StateBase *v4; // r1

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    v3 = (_DWORD *)(a1 + 4664);
    if ( FIELD_U8(a1, 4672) )
    {
      *v3 = 0;
      v4 = (StateBase *)&unk_60CA9AE4;
    }
    else
    {
      *v3 = 2;
      v4 = (StateBase *)&unk_60CA9B04;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), v4);
  }
  return result;
}
