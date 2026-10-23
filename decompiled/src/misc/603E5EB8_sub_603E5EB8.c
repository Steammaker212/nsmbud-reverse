/* sub_603E5EB8
 * address: 0x603E5EB8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E5EB8(int a1)
{
  char v1; // r12
  int v3; // r0
  StateMethodExecuter *result; // r0
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int v6; // r0

  v3 = FIELD_U32(a1, 48);
  if ( !v3 || (result = (StateMethodExecuter *)(v3 - 1), (FIELD_U32(a1, 48) = result) == 0) )
  {
    v5 = *(int (__fastcall ****)(_DWORD, int *))(dword_60C96478 + 104);
    if ( ((unsigned int)&dword_60C965B4 & ~(1614700280 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
    {
      dword_60C965B0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C965B4);
    }
    if ( v5 )
    {
      v6 = (**v5)(v5, &dword_60C965B0);
      if ( v6 )
        v6 = (int)v5;
    }
    else
    {
      v6 = 0;
    }
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)v6 + 192))(v6, &unk_60C97540);
    return StateMgr__changeState((StateMgr *)(a1 + 76), (StateBase *)&dword_60C99660);
  }
  return result;
}
