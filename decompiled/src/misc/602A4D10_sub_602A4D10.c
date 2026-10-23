/* sub_602A4D10
 * address: 0x602A4D10   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602A4D10(int a1)
{
  StateMethodExecuter *result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  result = *(StateMethodExecuter **)(dword_60C995D0 + 32);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C9061C);
  return result;
}
