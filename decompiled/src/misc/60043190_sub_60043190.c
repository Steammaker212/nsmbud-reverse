/* sub_60043190
 * address: 0x60043190   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60043190(int a1, int a2, int a3)
{
  Actor *v3; // r5
  int ProfileId; // r0
  char v6; // r12
  int v7; // r4
  int v8; // r4
  StateBase *CurrentState; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r5
  int (__fastcall ***v14)(_DWORD, int *); // r5
  int v15; // r0
  StateMgr *v16; // r5
  StateBase *v17; // r0
  int v18; // r6
  StateBase *v19; // r0
  int v20; // r5
  StateBase *v21; // r0
  int v22; // r5

  v3 = *(Actor **)(a3 + 64);
  ProfileId = Actor__getProfileId(v3);
  if ( ProfileId == 392 )
  {
    if ( ((unsigned int)&dword_60C7B39C & ~(1610887624 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    if ( v3 )
    {
      v7 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C7B398);
      if ( v7 )
        v7 = (int)v3;
    }
    else
    {
      v7 = 0;
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v10 == (*(int (**)(void))(stru_60C92664 + 8))()
      || (v11 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
          v12 == (*(int (**)(void))(stru_60C92684 + 8))()) )
    {
      sub_602EE7B8(v7, FIELD_U32(v7, 80), -1);
      sub_602EE940(v7);
      return 1;
    }
  }
  else if ( ProfileId == 521 )
  {
    if ( ((unsigned int)&dword_60C803F0 & ~(1610887768 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
    {
      dword_60C803EC = (int)&off_60BC321C;
      _cxa_guard_release(&dword_60C803F0);
    }
    if ( v3 )
    {
      v8 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C803EC);
      if ( v8 )
        v8 = (int)v3;
    }
    else
    {
      v8 = 0;
    }
    v14 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
    if ( ((unsigned int)&dword_60C80058 & ~(1610888048 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
    {
      dword_60C80054 = (int)&off_60BC2CD4;
      _cxa_guard_release(&dword_60C80058);
    }
    if ( v14 )
    {
      v15 = (**v14)(v14, &dword_60C80054);
      if ( v15 )
        v15 = (int)v14;
    }
    else
    {
      v15 = 0;
    }
    v16 = (StateMgr *)(v15 + 6084);
    v17 = StateMgr__getCurrentState((StateMgr *)(v15 + 6084));
    v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
    if ( v18 == (*(int (**)(void))(dword_60C80248 + 8))()
      || (v19 = StateMgr__getCurrentState(v16),
          v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
          v20 == (*(int (**)(void))(dword_60C801A8 + 8))()) )
    {
      v21 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
      v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
      if ( v22 == (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))() )
        sub_6025DE4C(v8);
    }
  }
  return 1;
}
