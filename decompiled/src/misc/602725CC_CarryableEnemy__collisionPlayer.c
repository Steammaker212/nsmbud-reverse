/* CarryableEnemy__collisionPlayer
 * address: 0x602725CC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D54
// 
// Overridden by:
//   - 0x6039FF68 : ShellEnemy
int __fastcall CarryableEnemy__collisionPlayer(int *this, ActiveCollider *acThis, ActiveCollider *acOther)
{
  StateMgr *v6; // r7
  StateBase *CurrentState; // r0
  int v8; // r4
  int (__fastcall *v9)(int *, ActiveCollider *, ActiveCollider *); // r3
  StateBase *v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r1

  v6 = (StateMgr *)(this + 1521);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(this + 1521));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C8EA94 + 8))() )
  {
    v9 = *(int (__fastcall **)(int *, ActiveCollider *, ActiveCollider *))(*this + 640);
  }
  else
  {
    v10 = StateMgr__getCurrentState(v6);
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
    v12 = (*((int (**)(void))stru_60C8EA70._.vtable + 2))();
    v13 = *this;
    if ( v11 == v12 )
      v9 = *(int (__fastcall **)(int *, ActiveCollider *, ActiveCollider *))(v13 + 0x284);
    else
      v9 = *(int (__fastcall **)(int *, ActiveCollider *, ActiveCollider *))(v13 + 0x27C);
  }
  return v9(this, acThis, acOther);
}
