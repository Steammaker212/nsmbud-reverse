/* sub_60513E00
 * address: 0x60513E00   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60513E00(int a1)
{
  StateMethodExecuter *result; // r0

  if ( FIELD_U8(a1, 5686) )
  {
    sub_60502548(a1 + 3588);
  }
  else
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 4628);
    if ( FIELD_U8(a1, 4628) )
      return result;
    if ( FIELD_U32(a1, 4616) == 1 )
    {
      FIELD_U8(a1, 5684) = 0;
      return (StateMethodExecuter *)5684;
    }
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA8558);
}
