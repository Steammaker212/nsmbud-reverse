/* sub_6028FB20
 * address: 0x6028FB20   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6028FB20(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 40));
  v2 = FIELD_U32(a1, 104);
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C8F854);
  result = (StateMethodExecuter *)(v2 - 1);
  FIELD_U32(a1, 104) = result;
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C8F854);
  return result;
}
