/* SledgeBro__vfC8
 * address: 0x602D6548   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A20E0
// 
// Overridden by: None
signed int __fastcall SledgeBro__vfC8(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r4
  int (__fastcall ***v8)(_DWORD, int *); // r4
  int v9; // r10
  int (__fastcall ***v10)(_DWORD, int *); // r6
  int v11; // r7
  bool v12; // zf
  StateBase *CurrentState; // r0
  int v14; // r5
  int v15; // r0

  v7 = 0;
  if ( FIELD_U32(a3, 136) != 15 )
  {
    v8 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613587836 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8 )
    {
      v9 = (**v8)(v8, &dword_60C7B378);
      if ( v9 )
        v9 = (int)v8;
    }
    else
    {
      v9 = 0;
    }
    v10 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
    if ( ((unsigned int)&dword_60C91C6C & ~(1613587968 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C91C6C) )
    {
      dword_60C91C68 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C91C6C);
    }
    v7 = 0;
    if ( v10 )
    {
      v11 = (**v10)(v10, &dword_60C91C68);
      if ( v11 )
        v11 = (int)v10;
      v12 = v9 == 0;
      if ( v9 )
        v12 = v11 == 0;
      if ( !v12 && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 1164))(v9, a2, a3) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v11 + 6084));
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v14 != (*(int (**)(void))(dword_60C91C00 + 8))() )
        {
          if ( !sub_6000AED0(a1, v9) )
            FIELD_U32(a1, 80) = 0;
          if ( sub_6000AED0(a1, v9) )
          {
            v15 = 1;
            FIELD_U32(a1, 80) = 1;
          }
          else
          {
            v15 = FIELD_U32(a1, 80);
          }
          v7 = 1;
          FIELD_U32(a1, 160) = Enemy_CommonRotations[v15];
        }
      }
    }
  }
  return v7;
}
