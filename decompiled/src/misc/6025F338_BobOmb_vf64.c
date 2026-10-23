/* BobOmb_vf64
 * address: 0x6025F338   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_vf64(int a1, ActiveCollider *a2, int a3)
{
  int v6; // r5
  int v8; // r4
  char v9; // r12
  __int16 v10; // r2
  int v11; // r7
  StateBase *CurrentState; // r0
  int v13; // r7
  char v14; // r12
  __int16 v15; // r2
  int v16; // r7

  v6 = 1;
  if ( Enemy__vf100((Enemy *)a1, a2, (ActiveCollider *)a3) )
    return v6;
  if ( (FIELD_U8(a3, 153) & 2) != 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v13 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
      (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &stru_60C8E1CC);
    FIELD_U8(a2, 0x6E) |= 2u;
    return 1;
  }
  else
  {
    v8 = FIELD_U32(a3, 64);
    if ( Actor__getProfileId((Actor *)v8) == 763 || Actor__getProfileId((Actor *)v8) == 477 )
    {
      if ( FIELD_S32(a1, 6456) <= 0 )
      {
        v10 = FIELD_U16(a1, 6364);
        if ( (v10 & 4) == 0 )
        {
          FIELD_U16(a1, 6364) = v10 | 4;
          FIELD_U32(a1, 6456) = 240;
          v11 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
          sub_6041838C((ModelAnimation *)(v11 + 4));
          AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), 0);
          FIELD_U32(v11, 20) = 0;
          FIELD_U32(v11, 28) |= 2u;
          FIELD_U32(v11, 24) = 1065353216;
        }
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
      }
      if ( ((unsigned int)&dword_60C823C4 & ~(1613100108 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
      {
        FireballBase_RTTI = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C823C4);
      }
      v6 = 0;
      if ( !v8 || (**(int (__fastcall ***)(int, int *))v8)(v8, &FireballBase_RTTI) != 1 )
        return v6;
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 240))(v8);
      sub_601362A0(v8);
      return 0;
    }
    else
    {
      v6 = 0;
      if ( Actor__getProfileId((Actor *)v8) != 819 )
        return v6;
      if ( FIELD_S32(a1, 6456) <= 0 )
      {
        v15 = FIELD_U16(a1, 6364);
        if ( (v15 & 4) == 0 )
        {
          FIELD_U16(a1, 6364) = v15 | 4;
          FIELD_U32(a1, 6456) = 240;
          v16 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
          sub_6041838C((ModelAnimation *)(v16 + 4));
          AnimationCtrl_setRepeat((ModelAnimation *)(v16 + 4), 0);
          FIELD_U32(v16, 20) = 0;
          FIELD_U32(v16, 28) |= 2u;
          FIELD_U32(v16, 24) = 1065353216;
        }
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
      }
      if ( ((unsigned int)&dword_60C8439C & ~(1613100540 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C8439C) )
      {
        dword_60C84398 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C8439C);
      }
      if ( !v8 || (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C84398) != 1 )
        return v6;
      StateMgr__changeState((StateMgr *)(v8 + 6084), (StateBase *)&dword_60C84378);
      return 0;
    }
  }
}
