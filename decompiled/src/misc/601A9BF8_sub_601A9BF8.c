/* sub_601A9BF8
 * address: 0x601A9BF8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A9BF8(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    if ( !sub_60185EA8(a1)
      || (result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 156))(a1),
          result == (StateMethodExecuter *)1) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8A48C);
    }
  }
  return result;
}
