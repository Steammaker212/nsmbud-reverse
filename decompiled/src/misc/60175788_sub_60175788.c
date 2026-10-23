/* sub_60175788
 * address: 0x60175788   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60175788(_DWORD *a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = a1[155];
  if ( v2 )
  {
    result = (StateMethodExecuter *)(v2 - 1);
    a1[155] = result;
    if ( !result )
      return (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD *))(*a1 + 152))(a1);
  }
  else
  {
    result = (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD *))(*a1 + 156))(a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 71), &stru_60C88D38);
    }
  }
  return result;
}
