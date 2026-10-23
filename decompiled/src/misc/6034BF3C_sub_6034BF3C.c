/* sub_6034BF3C
 * address: 0x6034BF3C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034BF3C(int a1, int a2, int a3)
{
  int v6; // r7
  int ProfileId; // r0
  StateBase *CurrentState; // r0
  int v9; // r5
  StateBase *v11; // r0
  int v12; // r5
  StateBase *v13; // r0
  int v14; // r5

  v6 = FIELD_U32(a3, 64);
  if ( !v6 )
    return ShellEnemy__collisionThrowableObject(a1, a2, a3);
  ProfileId = Actor__getProfileId(*(Actor **)(a3 + 64));
  if ( ProfileId == 392 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 != (*(int (**)(void))(dword_60C94C80 + 8))() || !FIELD_U8(v6, 7531) )
      return ShellEnemy__collisionThrowableObject(a1, a2, a3);
  }
  else
  {
    if ( ProfileId != 779 && ProfileId != 780 )
      return ShellEnemy__collisionThrowableObject(a1, a2, a3);
    if ( ProfileId == 779 )
      SE_OBJ_ICICLE_BREAK_ref_61FDF4(v6, 1);
    else
      SE_OBJ_ICICLE_BREAK_ref_623CB0(v6, 1);
    if ( !FIELD_U32(a1, 6352) )
    {
      v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      if ( v12 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
        return ShellEnemy__collisionThrowableObject(a1, a2, a3);
      v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
      if ( v14 == (*(int (**)(void))(dword_60C8EA94 + 8))() )
        return ShellEnemy__collisionThrowableObject(a1, a2, a3);
    }
  }
  return 0;
}
