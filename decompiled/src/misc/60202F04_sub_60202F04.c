/* sub_60202F04
 * address: 0x60202F04   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60202F04(int a1)
{
  StateMethodExecuter *result; // r0

  if ( !sub_60185EA8(a1)
    || (result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 156))(a1),
        result == (StateMethodExecuter *)1) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8C4B8);
  }
  return result;
}
