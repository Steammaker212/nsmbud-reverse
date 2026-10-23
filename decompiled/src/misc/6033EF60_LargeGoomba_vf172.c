/* LargeGoomba_vf172
 * address: 0x6033EF60   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf172(int a1)
{
  char v1; // r12
  int v2; // r11
  int v3; // r10
  int v4; // r9
  int v5; // r4
  int v6; // r8
  int v7; // r6
  int v8; // r11
  StateMgr *v9; // r6
  StateBase *CurrentState; // r0
  int v11; // r9
  StateBase *v12; // r0
  int v13; // r6

  v2 = a1;
  v3 = FIELD_U32(a1, 36);
  v4 = a1 + 32;
  if ( v3 == a1 + 32 )
    return 0;
  v5 = FIELD_U32(a1, 44);
  v6 = 1;
  v7 = v3 - v5;
  while ( 1 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1614016508 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI) == 1 )
      {
        if ( !FIELD_U8(v7, 536) )
          break;
        if ( Actor__getProfileId((Actor *)v7) == 467 )
        {
          v8 = v4;
          v9 = (StateMgr *)(v7 + 6084);
          CurrentState = StateMgr__getCurrentState(v9);
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v11 == (*(int (__fastcall **)(int *))(dword_60C94500 + 8))(&dword_60C94500) )
            break;
          v12 = StateMgr__getCurrentState(v9);
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          v4 = v8;
          v2 = a1;
          if ( v13 == (*(int (__fastcall **)(int *))(dword_60C94524 + 8))(&dword_60C94524) )
            break;
        }
      }
    }
    v3 = FIELD_U32(v3, 4);
    v7 = v3 - v5;
    if ( v3 - v5 == v4 - FIELD_U32(v2, 44) )
      return 0;
  }
  return v6;
}
