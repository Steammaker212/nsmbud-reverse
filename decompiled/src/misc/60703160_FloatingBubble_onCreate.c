/* FloatingBubble_onCreate
 * address: 0x60703160   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall FloatingBubble_onCreate(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  int v4; // r0
  float *v5; // r0
  int v6; // r10
  float v7; // s0
  float v8; // s2
  float v9; // s0
  void *v10; // r5
  _BYTE *v11; // r7
  float v12; // r0
  ColliderBase *v13; // r6
  ColliderBase *v14; // r5
  int v15; // r1
  int v16; // r0
  char v17; // r12
  int v18; // r5
  float v19; // s8
  float v20; // s10
  float v21; // s2
  int v22; // r5
  char v23; // r12
  float v24; // s0
  float v25; // s2
  float v26; // s4
  float v27; // s6
  StateMgr *v28; // r0
  StateBase *v29; // r1
  CircularColliderInfo v31; // [sp+0h] [bp-48h] BYREF
  int v32; // [sp+20h] [bp-28h]

  FIELD_U32(a1, 116) = 1161527296;
  v2 = FIELD_U32(a1, 20);
  v3 = v2 & 0xF;
  FIELD_U8(a1, 6928) = v2 & 0xF;
  FIELD_U8(a1, 6930) = BYTE1(v2) & 1;
  v4 = (v2 >> 12) & 3;
  if ( v4 == 3 )
    LOBYTE(v4) = 0;
  FIELD_U8(a1, 6929) = v4;
  v5 = (float *)(a1 + 108);
  if ( !v3 )
    v5 = (float *)(a1 + 112);
  v6 = (FIELD_U32(a1, 24) >> 20) & 0xF;
  v7 = (float)v6 * 16.0;
  v8 = *v5 + v7;
  v9 = *v5 - v7;
  FIELD_F32(a1, 6936) = v8;
  FIELD_F32(a1, 6940) = v9;
  FIELD_U32(a1, 500) = 1149272064;
  FIELD_U32(a1, 504) = 1149272064;
  FIELD_U32(a1, 508) = 1140850688;
  FIELD_U32(a1, 512) = 1140850688;
  v10 = (void *)(dword_60C9CF0C + 1340);
  FIELD_U32(a1, 6952) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v11 = (_BYTE *)(a1 + 6929);
  FIELD_U32(a1, 6956) = sead__Random__getU32(v10);
  v12 = 40.0;
  if ( FIELD_U8(a1, 6929) == 1 )
  {
    v15 = 1117782016;
  }
  else
  {
    if ( !FIELD_U8(a1, 6929) )
    {
      memset(&v31, 0, 24);
      v31.radius = 64.0;
      v31.rotation = 0;
      v13 = (ColliderBase *)(a1 + 6504);
      CircularCollider_init((CircularCollider *)(a1 + 6504), (StageActor *)a1, &v31);
      v14 = (ColliderBase *)(a1 + 6104);
      goto LABEL_11;
    }
    v15 = 1109393408;
    v12 = 80.0;
  }
  memset(&v31, 0, 24);
  v31.radius = v12;
  v31.rotation = v15;
  v32 = 0;
  v14 = (ColliderBase *)(a1 + 6104);
  FloatingBubble_onCreate_helper(a1 + 6104, a1, (int)&v31);
  v13 = (ColliderBase *)(a1 + 6504);
LABEL_11:
  if ( !*v11 )
    v14 = v13;
  ColliderBase_setType(v14, 19);
  ColliderMgr_add(ColliderMgr_instance, v14);
  FloatingBubble_onCreate_helper_7035EC(a1, (unsigned __int8)*v11);
  if ( FIELD_U8(a1, 28) )
  {
    v16 = sub_606D4BD4(FIELD_U8(a1, 28));
    v18 = v16;
    if ( v16 )
    {
      FIELD_U32(a1, 6932) = FIELD_U32(v16, 8);
      if ( ((unsigned int)&dword_60C8DECC & ~(1617965948 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
      {
        dword_60C8DEC8 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C8DECC);
      }
      if ( (**(int (__fastcall ***)(int, int *))v18)(v18, &dword_60C8DEC8) == 1 )
      {
        v19 = FIELD_F32(v18, 6108);
        v20 = FIELD_F32(a1, 6912);
        v21 = FIELD_F32(a1, 6908) - FIELD_F32(v18, 6104);
        FIELD_F32(a1, 6916) = FIELD_F32(a1, 6904) - FIELD_F32(v18, 6100);
        FIELD_F32(a1, 6920) = v21;
        FIELD_F32(a1, 6924) = v20 - v19;
      }
      v22 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6932));
      if ( v22 )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1617966212 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( (**(int (__fastcall ***)(int, int *))v22)(v22, &StageActor_RTTI) == 1 )
        {
          v24 = FIELD_F32(v22, 108);
          v25 = FIELD_F32(v22, 112);
          v26 = FIELD_F32(a1, 6916);
          v27 = FIELD_F32(a1, 6920);
          FIELD_U32(a1, 116) = 1161527296;
          FIELD_F32(a1, 108) = v24 + v26;
          FIELD_F32(a1, 112) = v25 + v27;
        }
      }
      v28 = (StateMgr *)(a1 + 6084);
      v29 = &stru_60CBC7E0;
    }
    else
    {
      v28 = (StateMgr *)(a1 + 6084);
      v29 = (StateBase *)&dword_60CBC800;
    }
  }
  else if ( v6 )
  {
    v28 = (StateMgr *)(a1 + 6084);
    if ( FIELD_U8(a1, 6928) )
      v29 = (StateBase *)&unk_60CBC7C0;
    else
      v29 = (StateBase *)&unk_60CBC7A0;
  }
  else
  {
    v28 = (StateMgr *)(a1 + 6084);
    v29 = (StateBase *)&dword_60CBC780;
  }
  StateMgr__changeState(v28, v29);
  sub_6070382C(a1);
  return 1;
}
