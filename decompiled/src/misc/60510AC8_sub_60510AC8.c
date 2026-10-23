/* sub_60510AC8
 * address: 0x60510AC8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60510AC8(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)sub_60511ABC();
  if ( result == (StateMethodExecuter *)1 )
  {
    if ( FIELD_U32(a1, 11616) == 1 )
      v3 = &dword_60CA8200;
    else
      v3 = &dword_60CA8220;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v3);
  }
  return result;
}
