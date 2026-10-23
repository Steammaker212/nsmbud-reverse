/* ShellEnemy__collisionThrowableObject
 * address: 0x603A1364   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60272A04
// 
// Overridden by: None
int __fastcall ShellEnemy__collisionThrowableObject(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v5; // r7
  int v6; // r7

  if ( !FIELD_U8(a1, 6392)
    || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v5 != (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))())
    || (v6 = FIELD_U32(a3, 64)) == 0
    || Actor__getProfileId(*(Actor **)(a3 + 64)) != 392
    || !FIELD_U8(v6, 7531) )
  {
    JUMPOUT(0x60272A04);
  }
  return 0;
}
