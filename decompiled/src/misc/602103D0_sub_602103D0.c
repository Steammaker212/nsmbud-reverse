/* sub_602103D0
 * address: 0x602103D0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602103D0(int a1)
{
  StateMethodExecuter *result; // r0

  if ( !sub_60185EA8(a1)
    || (result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1),
        result == (StateMethodExecuter *)1) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CF34);
  }
  return result;
}
