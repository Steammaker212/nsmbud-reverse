/* sub_6052544C
 * address: 0x6052544C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052544C(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 44, 3u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( FIELD_U8(a1, 4672) )
    {
      if ( FIELD_U8(a1, 4674) )
        v3 = (StateBase *)&unk_60CA9E84;
      else
        v3 = &stru_60CA9E64;
      return StateMgr__changeState((StateMgr *)(a1 + 24), v3);
    }
    else
    {
      return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9E64);
    }
  }
  return result;
}
