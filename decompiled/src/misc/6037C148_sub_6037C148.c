/* sub_6037C148
 * address: 0x6037C148   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037C148(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  char v5; // r12
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5
  int result; // r0
  unsigned int v11; // r0
  float *v12; // r1
  float v13; // s0
  float v14; // s6
  float v15; // s2
  float v16; // s4
  ActiveColliderMgr *v17; // r5
  char v18; // r12
  unsigned int v19; // r0
  int v20; // s0
  float *v21; // r0
  float v22; // s0
  float v23; // s6
  float v24; // s2
  float v25; // s4
  ActiveCollider *v26; // r4
  ActiveColliderMgr *v27; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C96710 + 8))()
    || (v6 = StateMgr__getCurrentState(v2),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60C8F934 + 8))())
    || (v8 = StateMgr__getCurrentState(v2),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        result = (*(int (**)(void))(dword_60C96734 + 8))(),
        v9 == result) )
  {
    if ( ((unsigned int)&dword_60C96798[1] & ~(1614266892 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C96798[1]) )
    {
      dword_60C967A4 = 0;
      dword_60C967A8 = 1103101952;
      _cxa_guard_release(&dword_60C96798[1]);
    }
    v11 = FIELD_U32(a1, 164);
    v12 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
    v13 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
    v14 = v12[2] + (float)(v13 * v12[3]);
    v15 = *v12 + (float)(v12[1] * v13);
    v16 = (float)(*(float *)&dword_60C967A8 * v14) + (float)(v15 * *(float *)&dword_60C967A4);
    FIELD_F32(a1, 304) = (float)(*(float *)&dword_60C967A4 * v14) - (float)(v15 * *(float *)&dword_60C967A8);
    FIELD_F32(a1, 308) = v16;
    v17 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v17, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v17, (ActiveCollider *)(a1 + 188));
    }
    if ( ((unsigned int)&dword_60C96798[2] & ~(1614267152 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C96798[2]) )
    {
      dword_60C967AC = 0;
      dword_60C967B0 = 1090519040;
      _cxa_guard_release(&dword_60C96798[2]);
    }
    v19 = FIELD_U32(a1, 164);
    v20 = v19 & 0xFFFFFF;
    v21 = (float *)((char *)sinLutTable + ((v19 >> 20) & 0xFF0));
    v22 = (float)(unsigned int)v20 * 0.000000059605;
    v23 = v21[2] + (float)(v22 * v21[3]);
    v24 = *v21 + (float)(v21[1] * v22);
    v25 = (float)(*(float *)&dword_60C967B0 * v23) + (float)(v24 * *(float *)&dword_60C967AC);
    FIELD_F32(a1, 6476) = (float)(*(float *)&dword_60C967AC * v23) - (float)(v24 * *(float *)&dword_60C967B0);
    FIELD_F32(a1, 6480) = v25;
    v26 = (ActiveCollider *)(a1 + 6360);
    v27 = ActiveColliderMgr_instance;
    result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v26);
    if ( !result )
    {
      result = ActiveColliderMgr_isInCreateList(v27, v26);
      if ( !result )
        return (int)ActiveColliderMgr_addToCreateList(v27, v26);
    }
  }
  return result;
}
