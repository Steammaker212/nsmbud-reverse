/* sub_603DE11C
 * address: 0x603DE11C   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DE11C(int a1)
{
  int v2; // r5
  char v3; // r12
  int result; // r0
  int v5; // r1
  int v6; // r1
  StateBase *CurrentState; // r0
  int v8; // r5

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6340));
  if ( ((unsigned int)&dword_60C90E54 & ~(1614668124 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( !v2 || !(**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C90E50) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C993DC);
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
  v5 = FIELD_U32(a1, 6328);
  if ( v5 >= 1 )
  {
    v6 = v5 - 1;
    FIELD_U32(a1, 6328) = v6;
    if ( !v6 )
      sub_603DF65C(a1, 2);
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C90D90 + 8))() )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9937C);
  result = FIELD_U32(a1, 6360);
  if ( result != 3 )
    return EffectWrapper_update((EffectWrapper *)(a1 + 6368), 342, (Vec3 *)(a1 + 6576), 0, 0);
  return result;
}
