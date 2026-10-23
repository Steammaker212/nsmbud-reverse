/* sub_603DDD70
 * address: 0x603DDD70   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DDD70(int a1)
{
  unsigned int *v2; // r7
  int v3; // r5
  char v4; // r12
  int result; // r0
  int v6; // r0
  int *v7; // r8
  StateBase *CurrentState; // r0
  int v9; // r6
  int v10; // r6
  char v11; // r12

  v2 = (unsigned int *)(a1 + 6340);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6340));
  if ( ((unsigned int)&dword_60C90E54 & ~(1614667188 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( !v3 || !(**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C90E50) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C993DC);
  if ( !FIELD_U32(a1, 6336) && FIELD_F32(v3, 112) <= (float)((float)(FIELD_F32(a1, 112) + 48.0) + 40.0) )
  {
    if ( FIELD_S32(a1, 6664) <= 0 )
      sub_603DF65C(a1, 0);
    FIELD_U32(a1, 6336) = 1;
  }
  if ( FIELD_U8(a1, 6661) )
  {
    if ( FIELD_U32(a1, 6360) == 3 )
    {
      if ( FIELD_S32(a1, 6664) <= 0 )
      {
        sub_603DF65C(a1, FIELD_U32(a1, 6364));
        FIELD_U8(a1, 6661) = 0;
      }
      EffectWrapper_update((EffectWrapper *)(a1 + 6472), 344, (Vec3 *)(a1 + 6576), 0, 0);
    }
    else
    {
      FIELD_U32(a1, 6328) = 0;
      FIELD_U32(a1, 6316) += 40;
      FIELD_U32(a1, 6312) += 40;
      sub_603DF65C(a1, 3);
    }
  }
  v7 = (int *)(a1 + 6316);
  v6 = FIELD_U32(a1, 6316);
  if ( !v6 || (*v7 = v6 - 1, v6 <= 1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*(int (**)(void))(dword_60C90DF0 + 8))() )
    {
      v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
      if ( ((unsigned int)&dword_60C90E54 & ~(1614667728 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
      {
        dword_60C90E50 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C90E54);
      }
      if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C90E50) == 1 )
        FIELD_U8(v10, 6299) = 1;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C993BC);
    }
  }
  result = FIELD_U32(a1, 6360);
  if ( result != 3 )
  {
    result = *v7;
    if ( *v7 < 234 )
    {
      if ( result <= 220 )
        return EffectWrapper_update((EffectWrapper *)(a1 + 6368), 342, (Vec3 *)(a1 + 6576), 0, 0);
    }
    else
    {
      return sub_603DF4C4(a1, v3);
    }
  }
  return result;
}
