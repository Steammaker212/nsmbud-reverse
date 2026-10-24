/* sub_60485764
 * address: 0x60485764   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60485764(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_6047482C(FIELD_U32(a1, 4), 0);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 532), (StateBase *)&dword_60C9F300);
  if ( *(float *)&FIELD_U32(result + (3) * 12, 0x8) == 0.0 )
  {
    result = (StateMethodExecuter *)HIBYTE(result[4].vtable);
    if ( ((unsigned __int8)result & 1) == 0 )
      return StateMgr__changeState((StateMgr *)(a1 + 532), (StateBase *)&dword_60C9F300);
  }
  return result;
}
