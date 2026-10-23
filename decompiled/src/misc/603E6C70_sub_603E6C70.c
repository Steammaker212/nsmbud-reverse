/* sub_603E6C70
 * address: 0x603E6C70   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E6C70(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)sub_60779FD8(dword_60CBFA90);
  if ( result == (StateMethodExecuter *)1 )
  {
    if ( FIELD_U32(a1, 36) )
      v3 = &dword_60C99774;
    else
      v3 = &dword_60C99754;
    return StateMgr__changeState((StateMgr *)(a1 + 172), (StateBase *)v3);
  }
  return result;
}
