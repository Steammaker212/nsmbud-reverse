/* sub_6028F834
 * address: 0x6028F834   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6028F834(int a1)
{
  StateMethodExecuter *result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 40));
  result = *(StateMethodExecuter **)(FIELD_U32(a1, 108) + 1724984);
  if ( (int)result > 2960 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C8F7F4);
  return result;
}
