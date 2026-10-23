/* sub_6037DCA8
 * address: 0x6037DCA8   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037DCA8(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5
  int result; // r0
  ActiveColliderMgr *v10; // r5
  char v11; // r12
  unsigned int v12; // r0
  float *v13; // r1
  float v14; // s0
  float v15; // s8
  float v16; // s4
  float v17; // s0
  float v18; // s2
  ActiveColliderMgr *v19; // r6
  char v20; // r12
  unsigned int v21; // r0
  int v22; // s2
  float *v23; // r0
  float v24; // s0
  float v25; // s8
  float v26; // s4
  float v27; // s0
  float v28; // s6

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C96814 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C96838 + 8))())
    || (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        result = (*(int (**)(void))(dword_60C9685C + 8))(),
        v8 == result) )
  {
    v10 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      || ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 188)) )
    {
      if ( ((unsigned int)&dword_60C968B4[1] & ~(1614273952 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C968B4[1]) )
      {
        *(_QWORD *)&dword_60C968B4[3] = 0x41C0000000000000LL;
        _cxa_guard_release(&dword_60C968B4[1]);
      }
      v12 = FIELD_U32(a1, 164);
      v13 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
      v14 = (float)(v12 & 0xFFFFFF) * 0.000000059605;
      v15 = v13[2] + (float)(v14 * v13[3]);
      v16 = *v13 + (float)(v13[1] * v14);
      v17 = (float)(*(float *)&dword_60C968B4[3] * v15) - (float)(v16 * *(float *)&dword_60C968B4[4]);
      v18 = (float)(*(float *)&dword_60C968B4[4] * v15) + (float)(v16 * *(float *)&dword_60C968B4[3]);
      FIELD_F32(a1, 304) = v17;
      FIELD_F32(a1, 308) = v18;
      FIELD_F32(a1, 6976) = v17;
      FIELD_F32(a1, 6980) = v18;
    }
    v19 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
      || (result = ActiveColliderMgr_isInCreateList(v19, (ActiveCollider *)(a1 + 6360)), result == 1) )
    {
      if ( ((unsigned int)&dword_60C968B4[2] & ~(1614274220 << v20) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C968B4[2]) )
        {
          *(_QWORD *)&dword_60C968B4[5] = 0x4100000000000000LL;
          _cxa_guard_release(&dword_60C968B4[2]);
        }
      }
      v21 = FIELD_U32(a1, 164);
      v22 = v21 & 0xFFFFFF;
      v23 = (float *)((char *)sinLutTable + ((v21 >> 20) & 0xFF0));
      v24 = (float)(unsigned int)v22 * 0.000000059605;
      v25 = v23[2] + (float)(v24 * v23[3]);
      v26 = *v23 + (float)(v23[1] * v24);
      v27 = (float)(*(float *)&dword_60C968B4[5] * v25) - (float)(v26 * *(float *)&dword_60C968B4[6]);
      v28 = (float)(*(float *)&dword_60C968B4[6] * v25) + (float)(v26 * *(float *)&dword_60C968B4[5]);
      FIELD_F32(a1, 6476) = v27;
      FIELD_F32(a1, 6480) = v28;
      FIELD_F32(a1, 7280) = v27;
      FIELD_F32(a1, 7284) = v28;
      return a1 + 7284;
    }
  }
  return result;
}
