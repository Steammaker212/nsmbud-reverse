/* sub_601A5060
 * address: 0x601A5060   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A5060(int a1)
{
  StateMethodExecuter *result; // r0

  Animation_update(**(_DWORD **)(FIELD_U32(a1, 304) + 12));
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 304) + 28));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 304));
  result = (StateMethodExecuter *)FIELD_U8(dword_60C8D408, 1446);
  if ( FIELD_U8(dword_60C8D408, 1446) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8A0C0);
  return result;
}
