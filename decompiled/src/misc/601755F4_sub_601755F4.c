/* sub_601755F4
 * address: 0x601755F4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601755F4(int a1)
{
  StateMethodExecuter *result; // r0

  ((void (*)(void))loc_60176120)();
  result = *(StateMethodExecuter **)(a1 + 608);
  if ( !result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C88D38);
  }
  return result;
}
