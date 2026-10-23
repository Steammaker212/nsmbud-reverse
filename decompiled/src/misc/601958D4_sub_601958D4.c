/* sub_601958D4
 * address: 0x601958D4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601958D4(int a1)
{
  StateMethodExecuter *result; // r0

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89B90);
  result = (StateMethodExecuter *)dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)sub_6019112C(dword_60C8996C);
    if ( result == (StateMethodExecuter *)156 )
      return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89BD0);
  }
  return result;
}
