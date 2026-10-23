/* sub_6038D5C8
 * address: 0x6038D5C8   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6038D5C8(int a1, int a2)
{
  char v2; // r12
  int v5; // r4
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int v7; // r8
  float v8; // r0
  char v9; // r12
  StateBase *CurrentState; // r0
  int v11; // r5
  char v12; // r12
  float v13[9]; // [sp+4h] [bp-24h] BYREF

  if ( FIELD_U32(a2, 136) == 15 )
    return;
  v5 = FIELD_U32(a2, 64);
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C86B48 & ~(1614337532 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
  {
    dword_60C86B44 = (int)&off_60BD0CA4;
    _cxa_guard_release(&dword_60C86B48);
  }
  if ( !v6 )
  {
    v7 = 0;
    if ( !v5 )
      return;
    goto LABEL_11;
  }
  v7 = (**v6)(v6, &dword_60C86B44);
  if ( v7 )
    v7 = (int)v6;
  if ( v5 )
  {
LABEL_11:
    if ( (unsigned __int8)(FIELD_U8(v5, 533) - 1) > 1u )
    {
      if ( Actor__getProfileId((Actor *)v5) == 816 || Actor__getProfileId((Actor *)v5) == 818 )
      {
        if ( ((unsigned int)&dword_60C86B48 & ~(1614338008 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
        {
          dword_60C86B44 = (int)&off_60BD0CA4;
          _cxa_guard_release(&dword_60C86B48);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C86B44) == 1 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v11 != (*(int (**)(void))(dword_60C98504 + 8))() )
          {
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C98504);
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C98504);
          }
        }
      }
      else if ( Actor__getProfileId((Actor *)v5) == 530
             || Actor__getProfileId((Actor *)v5) == 532
             || Actor__getProfileId((Actor *)v5) == 538 )
      {
        if ( ((unsigned int)&dword_60C96174 & ~(1614338304 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C96174) )
        {
          dword_60C96170 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C96174);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C96170) == 1 )
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C98504);
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1614337696 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1
        && !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1156))(v5) )
      {
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1164))(v5, a1, a2);
        if ( v7 )
        {
          v8 = FIELD_F32(v7, 8264);
          v13[0] = FIELD_F32(v7, 8260);
          v13[1] = v8;
          v13[2] = 4500.0;
          sub_602A38A4(v7, v13);
          FIELD_U8(v7, 6692) = 1;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C98504);
        }
      }
    }
  }
}
