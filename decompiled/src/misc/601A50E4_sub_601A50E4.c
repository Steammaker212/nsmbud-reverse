/* sub_601A50E4
 * address: 0x601A50E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A50E4(int a1)
{
  StateMethodExecuter *result; // r0
  bool v3; // zf

  Animation_update(**(_DWORD **)(FIELD_U32(a1, 304) + 12));
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 304) + 28));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 304));
  result = (StateMethodExecuter *)*(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 304) + 12) + 28);
  v3 = ((unsigned __int8)result & 0x20) == 0;
  if ( ((unsigned __int8)result & 0x20) == 0 )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 309);
    v3 = result == 0;
  }
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A080);
  return result;
}
