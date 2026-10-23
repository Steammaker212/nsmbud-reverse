/* sub_600425AC
 * address: 0x600425AC   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600425AC(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r4
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r5
  int result; // r0
  StateBase *CurrentState; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r6
  int v12; // r6
  unsigned int v13; // r0

  v4 = FIELD_U32(a3, 64);
  v5 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C80058 & ~(1610884556 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
  {
    dword_60C80054 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C80058);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &dword_60C80054);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  result = FIELD_U8(v4, 533);
  if ( result == 1 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1610884696 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    result = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378);
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 748))(v6, v4);
      if ( !result )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v9 == (*(int (**)(void))(dword_60C80248 + 8))()
          || (v10 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084)),
              v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
              result = (*(int (**)(void))(dword_60C801A8 + 8))(),
              v11 == result) )
        {
          v12 = 0;
          (*(void (__fastcall **)(int, int, bool, _DWORD, float, float, _DWORD))(*(_DWORD *)v4 + 1176))(
            v4,
            4,
            FIELD_F32(v6, 108) > FIELD_F32(v4, 108),
            0,
            4.0,
            0.0,
            0);
          v13 = FIELD_U8(v4, 84);
          if ( v13 < 4 )
            v12 = (char)v13;
          result = v6 + 4 * v12;
          FIELD_U32(result, 11696) = 50;
        }
      }
    }
  }
  return result;
}
