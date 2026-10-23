/* sub_603451B0
 * address: 0x603451B0   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603451B0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r5
  unsigned int *v5; // r6
  char v6; // r12
  unsigned int *v7; // r5

  sub_60344DF4(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C94854 + 8))() )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 12892) + 8))(FIELD_U32(a1, 12892));
    if ( v4 == (*(int (**)(void))(dword_60C947CC + 8))() )
    {
      if ( FIELD_U8(a1, 7110) )
      {
        v5 = (unsigned int *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7116));
        if ( ((unsigned int)&dword_60C7B364 & ~(1614041708 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v5 )
        {
          v7 = (unsigned int *)(*(int (__fastcall **)(unsigned int *, int *))*v5)(v5, &StageActor_RTTI);
          if ( v7 )
            v7 = v5;
        }
        else
        {
          v7 = 0;
        }
        if ( ((unsigned int)&dword_60C881F4 & ~(1614041836 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
        {
          dword_60C881F0 = (int)&off_60BD20C4;
          _cxa_guard_release(&dword_60C881F4);
        }
        if ( v7 )
        {
          if ( (*(int (__fastcall **)(unsigned int *, int *))*v7)(v7, &dword_60C881F0) == 1 )
          {
            ((void (__fastcall *)(int, _DWORD, _DWORD))loc_603453AC)(a1, FIELD_U32(a1, 80), 0);
            sub_60149A4C(v7);
          }
        }
      }
    }
  }
}
