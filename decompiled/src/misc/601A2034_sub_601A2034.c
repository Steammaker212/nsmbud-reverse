/* sub_601A2034
 * address: 0x601A2034   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A2034(StateMgr *a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)dword_60C99DD0;
  if ( !FIELD_U8(dword_60C99DD0, 3793) )
  {
    if ( FIELD_U32(dword_60C99DD0, 3668) && sub_604B6F58() == 1 )
      v3 = &dword_60C89EBC;
    else
      v3 = &dword_60C89E1C;
    return StateMgr__changeState(a1 + 179, (StateBase *)v3);
  }
  return result;
}
