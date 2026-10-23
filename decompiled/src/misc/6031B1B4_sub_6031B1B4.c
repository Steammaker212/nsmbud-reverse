/* sub_6031B1B4
 * address: 0x6031B1B4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031B1B4(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C93780 & ~(1613869516 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C93780) )
  {
    dword_60C9377C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C93780);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C9377C) == 1 )
    {
      v4 = 1;
      if ( !FIELD_U8(v3, 12604) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v6 != (*(int (**)(void))(dword_60C93710 + 8))() )
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C93710);
        v4 = 1;
        FIELD_U32(v3, 12600) = 1;
        FIELD_U32(v3, 12608) = 1048577;
      }
    }
  }
  return v4;
}
