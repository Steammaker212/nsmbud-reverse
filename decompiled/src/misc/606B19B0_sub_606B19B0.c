/* sub_606B19B0
 * address: 0x606B19B0   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B19B0(int result)
{
  int v1; // r4
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  char v5; // r12
  StateBase *CurrentState; // r0
  int v7; // r6
  float v8; // s4
  float v9; // s2

  v1 = result;
  v2 = FIELD_U32(result, 56);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617631736 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      result = (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI);
      if ( result == 1 )
      {
        if ( ((unsigned int)&dword_60C8DECC & ~(1617631844 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
        {
          dword_60C8DEC8 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C8DECC);
        }
        result = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8DEC8);
        if ( result == 1 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6132));
          v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          result = (*(int (**)(void))(dword_60CC5734 + 8))();
          FIELD_U8(v1, 137) = v7 == result;
          if ( v7 == result )
            FIELD_F32(v1, 140) = FIELD_F32(v3, 108) - FIELD_F32(v3, 584);
        }
        v8 = FIELD_F32(v3, 116) + FIELD_F32(v1, 32);
        v9 = FIELD_F32(v3, 112) + FIELD_F32(v1, 28);
        *(float *)v1 = FIELD_F32(v3, 108) + FIELD_F32(v1, 24);
        FIELD_F32(v1, 8) = v8;
        FIELD_F32(v1, 4) = v9 + FIELD_F32(v1, 60);
      }
    }
    else
    {
      FIELD_U32(v1, 68) = 1;
      return 1;
    }
  }
  return result;
}
