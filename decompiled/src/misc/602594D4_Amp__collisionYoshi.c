/* Amp__collisionYoshi
 * address: 0x602594D4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D78
// 
// Overridden by: None
int __fastcall Amp__collisionYoshi(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v6; // r6
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8E080 + 8))();
  if ( v6 == result )
  {
    result = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a3 + 64) + 1168))(FIELD_U32(a3, 64), a1, 13);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8E0A0);
  }
  return result;
}
