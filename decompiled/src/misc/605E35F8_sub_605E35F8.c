/* sub_605E35F8
 * address: 0x605E35F8   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E35F8(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  float *v6; // r7
  unsigned int v7; // r1
  float *v8; // r5
  char v9; // r12
  _DWORD *v10; // r0
  float v11; // s18
  float v12; // s16
  float v13; // s20
  float v14; // s0
  float v15; // s22
  float v16; // s0
  float v17; // s0
  unsigned int v18; // r0
  int v19; // s2
  float *v20; // r0
  float v21; // s0
  int (__fastcall **v22)(_DWORD, int *); // r4
  signed int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r1
  bool v27; // vf
  int v28; // r2
  int v29; // r1
  int v30; // r2
  int v31; // r2
  int v32; // r1
  StateBase *CurrentState; // r0
  int v34; // r6

  v4 = FIELD_U32(a2, 624);
  if ( v4 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 24))(v4, a1);
  v5 = 0;
  v6 = 0;
  v7 = FIELD_U32(a1, 6668);
  if ( v7 )
  {
    v8 = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
    v6 = 0;
    if ( v8 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1616787064 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( !(**(int (__fastcall ***)(float *, int *))v8)(v8, &StageActor_RTTI) )
        v8 = 0;
      v6 = v8;
    }
  }
  FIELD_U32(a1, 6668) = 0;
  if ( !v6 )
    v6 = (float *)a2;
  if ( v6 )
  {
    v10 = *((_DWORD **)v6 + 156);
    if ( v10 )
    {
      v10[6] = 1;
      (*(void (__fastcall **)(_DWORD *, int))(*v10 + 4))(v10, a1);
    }
    v11 = (float)(v6[27] + v6[143]) - FIELD_F32(a1, 6200);
    v12 = (float)(v6[28] + v6[144]) - FIELD_F32(a1, 6216);
    if ( v11 == 0.0 )
    {
      v18 = FIELD_U32(a1, 156);
      v19 = v18 & 0xFFFFFF;
      v20 = (float *)((char *)sinLutTable + ((v18 >> 20) & 0xFF0));
      v21 = (float)(unsigned int)v19 * 0.000000059605;
      v12 = (float)(*v20 + (float)(v20[1] * v21)) * 6.0;
      v11 = (float)(v20[2] + (float)(v21 * v20[3])) * 6.0;
    }
    else
    {
      v13 = (float)(v12 * v12) + (float)(v11 * v11);
      v14 = sqrtf(v13);
      v15 = 6.0;
      if ( v14 >= 6.0 )
      {
        v15 = v14;
        if ( v14 > 14.0 )
          v15 = 14.0;
      }
      v16 = sqrtf(v13);
      if ( v16 > 0.0 )
      {
        v17 = v15 / v16;
        v12 = v12 * v17;
        v11 = v11 * v17;
      }
    }
    v22 = *((int (__fastcall ***)(_DWORD, int *))v6 + 2);
    v23 = sub_6000F7B8(v12, v11);
    v24 = FIELD_U32(a1, 6456);
    v25 = FIELD_U32(a1, 6448);
    if ( v24 < v25 )
    {
      FIELD_U32(a1, 6456) = v24 + 1;
      v26 = FIELD_U32(a1, 6452) + v24;
      v27 = __OFSUB__(v26, v25);
      v28 = v26 - v25;
      if ( v28 < 0 != v27 )
        v28 = v26;
      v29 = 5 * v28;
      v30 = FIELD_U32(a1, 6444);
      *(_DWORD *)(v30 + 4 * v29) = v22;
      v31 = v30 + 4 * v29;
      FIELD_U32(v31, 4) = 15;
      FIELD_U32(v31, 16) = v23;
      FIELD_F32(v31, 8) = v11;
      FIELD_F32(v31, 12) = v12;
    }
    v32 = -v23;
    if ( -v23 >= 357913941 )
      v32 = 357913941;
    if ( v23 > 357913941 )
      v32 = -357913941;
    FIELD_U32(a1, 6168) = v32;
    FIELD_U32(a1, 6172) = v32;
    FIELD_U32(a1, 6440) = sub_6000AED0(a1, a2);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6424));
    v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v34 == (*(int (**)(void))(dword_60CB1AE4 + 8))() )
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6424) + 24))(
        FIELD_U32(a1, 6424),
        FIELD_U32(a1, 6432));
    else
      StateMgr__changeState((StateMgr *)(a1 + 6424), (StateBase *)&dword_60CB1AE4);
    return 1;
  }
  return v5;
}
