/* BrosBase__vf150
 * address: 0x602664AC   size: 1012   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7140
// 
// Overridden by: None
signed int __fastcall BrosBase__vf150(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int v7; // r6
  char v8; // r12
  int v9; // r7
  float *v10; // r0
  float v11; // s16
  StateMgr *v12; // r5
  StateBase *CurrentState; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r6
  StateBase *v19; // r0
  int v20; // r6
  StateBase *v21; // r0
  int v22; // r6
  StateBase *v23; // r0
  int v24; // r5
  int *v25; // r0
  char v26; // r1
  int v27; // r2
  int v28; // s0
  int v29; // r1
  unsigned int v30; // r2
  unsigned int v31; // r0

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)dword_60C87680 & ~(1613128912 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C87680) )
  {
    dword_60C8767C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87680);
  }
  v7 = 0;
  if ( v5 && (**v5)(v5, &dword_60C8767C) == 1 )
  {
    v9 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C8E648 & ~(1613129036 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
    {
      dword_60C8E644 = (int)&off_60BDBC48;
      _cxa_guard_release(&dword_60C8E648);
    }
    if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C8E644) == 1 )
    {
      if ( sub_605DBD64(v9) != 1 || sub_60678E1C(v9) != 1 )
        return 1;
      v10 = (float *)sub_605DBD7C(v9);
      if ( !v10 )
        return v7;
      v11 = (float)(v10[27] + v10[143]) - FIELD_F32(a1, 108);
      if ( sqrtf(
             (float)((float)((float)((float)(v10[28] + v10[144]) - FIELD_F32(a1, 112))
                           * (float)((float)(v10[28] + v10[144]) - FIELD_F32(a1, 112)))
                   + (float)(v11 * v11))
           + 0.0) >= (float)(FIELD_F32(v9, 8132) * 0.5) )
        return 1;
      v12 = (StateMgr *)(v5 + 1521);
      CurrentState = StateMgr__getCurrentState(v12);
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v14 == (*((int (**)(void))BroBase_StateID_Attack._._.vtable + 2))() )
        goto LABEL_21;
      v15 = StateMgr__getCurrentState(v12);
      v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
      if ( v16 == (*((int (**)(void))BroBase_StateID_Move._._.vtable + 2))() )
        goto LABEL_21;
      v17 = StateMgr__getCurrentState(v12);
      v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
      if ( v18 == (*((int (**)(void))BroBase_StateID_JumpSt._._.vtable + 2))()
        || (v19 = StateMgr__getCurrentState(v12),
            v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
            v20 == (*((int (**)(void))BroBase_StateID_JumpEd._._.vtable + 2))())
        || (v21 = StateMgr__getCurrentState(v12),
            v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21),
            v22 == (*((int (**)(void))BroBase_StateID_Jump._._.vtable + 2))())
        || (v23 = StateMgr__getCurrentState(v12),
            v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23),
            v7 = 1,
            v24 == (*((int (**)(void))BroBase_StateID_AirAttack._._.vtable + 2))()) )
      {
LABEL_21:
        v25 = dword_602668EC;
        v26 = 0;
        v27 = 0;
        v7 = 1;
        if ( v11 <= 0.0 )
          v27 = 1;
        else
          v25 = &dword_602668EC[1];
        v28 = *v25;
        FIELD_U32(a1, 80) = v27;
        if ( v11 > 0.0 )
          v26 = 1;
        FIELD_U8(a1, 6604) = v26;
        FIELD_U32(a1, 120) = v28;
        FIELD_U32(a1, 124) = 1070386381;
        FIELD_U32(a1, 12112) = dword_60BE2EB0;
        FIELD_U32(a1, 6556) = 1;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 808))(a1);
        v29 = FIELD_U32(a1, 3184);
        v30 = FIELD_U32(a1, 3192) & 0xBFFFF7FF;
        v31 = FIELD_U32(a1, 3176) & 0xBFFFF7FF;
        FIELD_U32(a1, 3200) &= 0xBFFFF7FF;
        FIELD_U32(a1, 3192) = v30;
        FIELD_U32(a1, 3176) = v31;
        FIELD_U32(a1, 3184) = v29 & 0xBFFFF7FF;
        FIELD_U32(a1, 3204) &= ~0x200u;
        FIELD_U32(a1, 3196) &= ~0x200u;
        FIELD_U32(a1, 3180) &= ~0x200u;
        FIELD_U32(a1, 3188) &= ~0x200u;
        (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_Down);
      }
    }
  }
  return v7;
}
