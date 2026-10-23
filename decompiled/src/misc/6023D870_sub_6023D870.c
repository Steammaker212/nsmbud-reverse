/* sub_6023D870
 * address: 0x6023D870   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023D870(Enemy *a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r5
  int v8; // r7
  int (__fastcall ***v9)(_DWORD, int *); // r5
  int v10; // r6
  char v11; // r12
  bool v12; // zf
  StateBase *CurrentState; // r0
  int v14; // r4
  unsigned int v15; // r0
  int v16; // r9

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)dword_60C8DB00 & ~(1612961940 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C8DB00) )
  {
    dword_60C8DAFC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DB00);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &dword_60C8DAFC);
    if ( v8 )
      v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1612962072 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v9 )
  {
    v10 = (**v9)(v9, &StageActor_RTTI);
    if ( v10 )
      v10 = (int)v9;
    v12 = v8 == 0;
    if ( v8 )
      v12 = v10 == 0;
    if ( !v12 )
    {
      if ( !FIELD_U8(v8, 12102) )
      {
        v16 = FIELD_U32(a3, 64);
        if ( ((unsigned int)&dword_60C7B374 & ~(1612962304 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v16
          && (**(int (__fastcall ***)(int, int *))v16)(v16, &dword_60C7B370) == 1
          && !(*(int (__fastcall **)(int))(*(_DWORD *)v16 + 1156))(v16) )
        {
          Enemy__vfC8(a1, a2, a3);
        }
      }
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v14 != (*(int (**)(void))(dword_60C8DAB8 + 8))() )
      {
        v15 = FIELD_U8(v10, 84);
        if ( v15 < 4 )
          v8 += (char)v15;
        FIELD_U8(v8, 12728) = v15;
      }
    }
  }
}
