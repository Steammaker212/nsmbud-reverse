/* sub_60105808
 * address: 0x60105808   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60105808(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1
  void *v5; // r1

  v4 = FIELD_U32(a1, 6676);
  result = (StateMethodExecuter *)(a1 + 6676);
  v3 = v4;
  if ( !v4 || (v5 = (void *)(v3 - 1), (FIELD_U32(result, 0x0) = v5) == 0) )
  {
    sub_6010672C(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C861D0);
  }
  return result;
}
