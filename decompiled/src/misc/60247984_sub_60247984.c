/* sub_60247984
 * address: 0x60247984   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60247984(int a1, _DWORD *a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r8
  StateBase *CurrentState; // r0
  int v10; // r6
  char v11; // r12
  int v12; // r7
  int v13; // r0
  int v14; // [sp+0h] [bp-30h] BYREF
  int v15; // [sp+4h] [bp-2Ch]
  _DWORD v16[8]; // [sp+10h] [bp-20h] BYREF

  if ( (FIELD_U32(a1, 6320) == 1 || (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) != 0)
    && FIELD_U8(dword_60C99D88, 31)
    && FIELD_S32(a1, 6480) <= 0
    && !FIELD_U8(a1, 6484) )
  {
    v7 = (int (__fastcall ***)(_DWORD, int *))a2[16];
    if ( ((unsigned int)&dword_60C8DC20 & ~(1613003288 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
    {
      dword_60C8DC1C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DC20);
    }
    if ( v7 )
    {
      v8 = (**v7)(v7, &dword_60C8DC1C);
      if ( v8 )
        v8 = (int)v7;
    }
    else
    {
      v8 = 0;
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v10 != (*(int (**)(void))(dword_60C8DBE4 + 8))() )
    {
      v12 = FIELD_U32(a3, 64);
      if ( ((unsigned int)&dword_60C7B37C & ~(1613003476 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v12 && (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B378) == 1 )
      {
        FIELD_U8(a1, 6518) = 1;
        if ( (FIELD_U32(v12, 1208) & 0x60000000) == 0x60000000 )
        {
          v13 = a2[21];
          v16[1] = a2[22];
          v16[0] = v13;
          sub_6014F61C(a1 + 648);
          if ( sub_6015DF58(a1 + 652, &v14, (int)v16) == 1 && (v15 & 0xF) == 1 )
            FIELD_U8(a1, 6518) = 0;
        }
        ((void (__fastcall *)(int, int, int))loc_6024778C)(a1, v12, v8);
      }
    }
  }
}
