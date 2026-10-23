/* sub_60681F10
 * address: 0x60681F10   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60681F10(int a1, int a2)
{
  int v2; // r5
  int v3; // r11
  int v4; // r0
  char v5; // r12
  int v6; // r4
  int v7; // r6
  int v8; // r8
  char v9; // r12
  _BOOL4 v10; // r9
  StateBase *CurrentState; // r0
  int v12; // r10
  StateBase *v13; // r0
  int v14; // r8

  v2 = a2 + 5344;
  v3 = FIELD_U32(a1, 144);
  v4 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  v6 = v4;
  v7 = FIELD_S8(v4, 84);
  if ( (unsigned __int8)v7 != 255 && (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u )
  {
    v8 = *(_DWORD *)(*(_DWORD *)v2 + 4);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617436544 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
    {
      if ( ((unsigned int)&dword_60C80068 & ~(1617436652 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C80068) )
      {
        dword_60C80064 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C80068);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C80064) == 1 )
      {
        v10 = v8 < 3;
        if ( v8 == -1 )
          v10 = FIELD_F32(v3, 108) > FIELD_F32(v6, 108);
        if ( (FIELD_U8(v6, 6912) & 2) != 0 )
        {
          if ( (unsigned __int8)v7 >= 4u )
            v7 = 0;
          if ( !*(_DWORD *)(v3 + 7580 + 4 * v7) )
          {
            sub_6076444C(v6, v3, 10);
            (*(void (__fastcall **)(int, int, _BOOL4, int, float, float, _DWORD))(*(_DWORD *)v6 + 1176))(
              v6,
              4,
              v10,
              1,
              3.0,
              0.0,
              0);
            *(_DWORD *)(v3 + 7580 + 4 * v7) = 10;
          }
        }
        else
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v12 == (*(int (**)(void))(dword_60CB81F8 + 8))()
            || (v13 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084)),
                v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
                v14 == (*(int (**)(void))(dword_60CB8238 + 8))()) )
          {
            if ( (unsigned __int8)v7 >= 4u )
              v7 = 0;
            if ( !*(_DWORD *)(v3 + 7564 + 4 * v7) )
            {
              (*(void (__fastcall **)(int, int, _BOOL4, _DWORD, float, float, _DWORD))(*(_DWORD *)v6 + 1176))(
                v6,
                4,
                v10,
                0,
                3.0,
                0.0,
                0);
              *(_DWORD *)(v3 + 7564 + 4 * v7) = 10;
            }
          }
        }
      }
    }
  }
}
