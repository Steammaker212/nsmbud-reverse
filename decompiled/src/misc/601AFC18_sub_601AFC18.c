/* sub_601AFC18
 * address: 0x601AFC18   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601AFC18(_DWORD *a1)
{
  StateMethodExecuter *result; // r0

  if ( sub_60185EA8((int)a1) )
  {
    result = (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD *))(*a1 + 156))(a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      sub_601B126C(dword_60C8A8C0, a1[88]);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 71), (StateBase *)&unk_60C8A7AC);
    }
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 71), (StateBase *)&unk_60C8A7AC);
  }
  return result;
}
