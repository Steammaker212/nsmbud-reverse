/* Amp__collisionPenguinSlide
 * address: 0x602593EC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A675C
// 
// Overridden by: None
int __fastcall Amp__collisionPenguinSlide(int a1, int a2, int a3)
{
  StateMgr *v6; // r7
  StateBase *CurrentState; // r0
  int v8; // r5
  StateBase *v9; // r0
  int v10; // r5

  v6 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C8E080 + 8))()
    && (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a3 + 64) + 1168))(FIELD_U32(a3, 64), a1, 13) == 1 )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8E0A0);
  }
  v9 = StateMgr__getCurrentState(v6);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C8E0C0 + 8))() )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 280))(a1, a2, a3);
  else
    return 1;
}
