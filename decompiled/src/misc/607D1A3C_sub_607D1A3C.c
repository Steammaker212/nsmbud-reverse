/* sub_607D1A3C
 * address: 0x607D1A3C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D1A3C(int a1, ActiveCollider *a2)
{
  int (__fastcall ***v4)(_DWORD, int *); // r6
  char v5; // r12
  int v6; // r0
  int v7; // r6
  StateBase *CurrentState; // r0
  int v9; // r7
  StageActor *owner; // r0
  bool v11; // zf
  float v12; // s0

  v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618811520 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v4 || (v6 = (**v4)(v4, &StageActor_RTTI), v7 = 0, !v6) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 11404));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v7 = 0;
    if ( v9 != (*(int (**)(void))(dword_60CC5398 + 8))() )
    {
      owner = FIELD_U32(a2, 0x40);
      v11 = owner == 0;
      if ( owner )
      {
        v9 = FIELD_U32(owner, 0x26C);
        v11 = v9 == 0;
      }
      if ( !v11 && !FIELD_U32(v9, 12) )
      {
        v12 = fabsf(FIELD_F32(a1, 108) - ActiveCollider_getCenterX(a2));
        if ( FIELD_F32(a1, 11476) > v12 )
        {
          v7 = 1;
          FIELD_U32(a1, 11472) = a2;
          FIELD_F32(a1, 11476) = v12;
          FIELD_U8(a1, 11480) = FIELD_U32(v9, 16) != 0;
        }
      }
    }
  }
  return v7;
}
