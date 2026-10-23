/* sub_600BEC64
 * address: 0x600BEC64   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600BEC64(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1

  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 7496);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6100));
  result = (StateMethodExecuter *)(a1 + 7416);
  v3 = FIELD_U32(a1, 7416);
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C83904);
  FIELD_U32(result, 0x0) = (void *)(v3 - 1);
  return result;
}
