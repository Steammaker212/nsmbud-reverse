/* sub_6039E8E4
 * address: 0x6039E8E4   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039E8E4(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  StateBase *CurrentState; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C965B4 & ~(1614407932 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
  {
    dword_60C965B0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C965B4);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C965B0) == 1 && FIELD_S16(v3, 6344) <= 0 )
  {
    FIELD_U16(v3, 6576) = 24;
    FIELD_U32(v3, 6580) = 1065353216;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 == (*(int (**)(void))(dword_60C971A0 + 8))() )
    {
      if ( (FIELD_U8(v3, 6320) & 1) != 0 )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C97600);
LABEL_12:
        FIELD_U16(v3, 6344) = 60;
      }
    }
    else
    {
      v6 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
      if ( v7 == (*(int (**)(void))(dword_60C971E0 + 8))() )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C97620);
        goto LABEL_12;
      }
    }
  }
  return 1;
}
