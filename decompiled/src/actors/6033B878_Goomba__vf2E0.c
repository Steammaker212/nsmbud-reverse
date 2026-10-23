/* Goomba__vf2E0
 * address: 0x6033B878   size: 136   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5E0
// 
// Overridden by: None
bool __fastcall Goomba__vf2E0(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  _BOOL4 result; // r0
  StateBase *v6; // r0
  int v7; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60C942FC + 8))();
  result = 1;
  if ( v3 != v4 )
  {
    v6 = StateMgr__getCurrentState(v1);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    return v7 == (*(int (**)(void))(dword_60C942DC + 8))();
  }
  return result;
}
