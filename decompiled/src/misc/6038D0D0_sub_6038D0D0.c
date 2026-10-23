/* sub_6038D0D0
 * address: 0x6038D0D0   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6038D0D0(int a1, int a2, int a3)
{
  char v3; // r12
  Actor *v4; // r4
  Actor *v5; // r6
  int v6; // r5
  int ProfileId; // r0
  char v8; // r12
  bool v9; // zf
  int v10; // r6
  StateBase *CurrentState; // r0
  int v12; // r5

  v4 = *(Actor **)(a3 + 64);
  v5 = *(Actor **)(a2 + 64);
  if ( ((unsigned int)&dword_60C86B40 & ~(1614336236 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
  {
    dword_60C86B3C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C86B40);
  }
  if ( v5 )
  {
    v6 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v5, 0x0))(v5, &dword_60C86B3C);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  Actor__getProfileId(v5);
  ProfileId = Actor__getProfileId(v4);
  if ( ProfileId == 816 || ProfileId == 818 )
  {
    if ( ((unsigned int)&dword_60C86B40 & ~(1614336620 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
    {
      dword_60C86B3C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C86B40);
    }
    if ( v4 )
    {
      v10 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60C86B3C);
      if ( v10 )
        v10 = (int)v4;
    }
    else
    {
      v10 = 0;
    }
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60C98504);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v10 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v12 != (*(int (__fastcall **)(int *))(dword_60C98504 + 8))(&dword_60C98504) )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v10 + 192))(v10, &dword_60C98504);
  }
  else
  {
    v9 = ProfileId == 530;
    if ( ProfileId != 530 )
      v9 = ProfileId == 532;
    if ( v9 || ProfileId == 538 )
    {
      if ( ((unsigned int)&dword_60C96174 & ~(1614336476 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C96174) )
      {
        dword_60C96170 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C96174);
      }
      if ( v4 )
      {
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60C96170) == 1 )
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60C98504);
      }
    }
  }
}
