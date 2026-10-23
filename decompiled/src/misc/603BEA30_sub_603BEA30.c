/* sub_603BEA30
 * address: 0x603BEA30   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BEA30(int a1, int a2)
{
  char v2; // r12
  int result; // r0
  int v6; // r4
  void (__fastcall ***v7)(_DWORD, int *); // r7
  char v8; // r12
  StateBase *CurrentState; // r0
  int v10; // r5

  result = FIELD_U32(a2, 136);
  if ( result != 15 )
  {
    v6 = FIELD_U32(a2, 64);
    v7 = *(void (__fastcall ****)(_DWORD, int *))(a1 + 64);
    if ( ((unsigned int)&dword_60C86B40 & ~(1614539364 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
    {
      dword_60C86B3C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C86B40);
    }
    if ( v7 )
      (**v7)(v7, &dword_60C86B3C);
    if ( (unsigned __int8)(FIELD_U8(v6, 533) - 1) > 1u )
    {
      result = Actor__getProfileId((Actor *)v6);
      if ( result == 816 || result == 818 )
      {
        if ( ((unsigned int)&dword_60C86B40 & ~(1614539676 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
        {
          dword_60C86B3C = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C86B40);
        }
        result = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C86B3C);
        if ( result == 1 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
          v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          result = (*(int (**)(void))(dword_60C98504 + 8))();
          if ( v10 != result )
            return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60C98504);
        }
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1614539492 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      result = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378);
      if ( result == 1 )
        return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 1164))(v6, a1, a2);
    }
  }
  return result;
}
