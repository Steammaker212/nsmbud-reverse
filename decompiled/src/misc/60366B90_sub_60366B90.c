/* sub_60366B90
 * address: 0x60366B90   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60366B90(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  void *v4; // r1

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  result = (StateMethodExecuter *)(a1 + 6116);
  v3 = FIELD_U32(a1, 6116);
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C95C70);
  v4 = (void *)(v3 - 1);
  FIELD_U32(result, 0x0) = v4;
  if ( !v4 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C95C70);
  return result;
}
