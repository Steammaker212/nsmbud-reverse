/* sub_603188A0
 * address: 0x603188A0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603188A0(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  StateBase *CurrentState; // r0
  int v6; // r5

  SE_EMY_DOWN_ref_31A028();
  a1[39] += a1[1600];
  v2 = a1[1602];
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C93528 & ~(1613859068 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
    {
      dword_60C93524 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C93528);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C93524) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v6 == (*(int (**)(void))(dword_60C9349C + 8))() )
          (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C935A0);
      }
    }
  }
  return sub_60319E30(a1);
}
