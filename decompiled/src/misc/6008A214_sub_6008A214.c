/* sub_6008A214
 * address: 0x6008A214   size: 1448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008A214(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r5
  char v7; // r12
  StageActor *owner; // r8
  float y; // s0
  StageActor *v10; // r5
  StateBase *CurrentState; // r0
  int v12; // r7
  _BOOL4 v13; // r1
  float v14; // s0
  StageActor *v15; // r6
  StateBase *v16; // r0
  int v17; // r5
  float *p_playerId; // r6
  char v19; // t1
  _BOOL4 v20; // r1
  float v21; // s0
  StageActor *v22; // r5
  StateBase *v23; // r0
  int v24; // r7
  _BOOL4 v25; // r1
  float v26; // s0
  StageActor *v27; // r4
  char v28; // r12
  unsigned int playerId; // r0
  int v30; // r1
  int *v31; // r0
  char v33; // r12
  float v34; // s0
  float v35; // s16
  float v36; // s0
  unsigned int v37; // r0

  v6 = 0;
  switch ( Enemy__processCollision(a1, a2, a3, 0) )
  {
    case 0:
      owner = FIELD_U32(a3, 0x40);
      if ( ((unsigned int)&dword_60C7B374 & ~(1611178608 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( owner && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B370) == 1 )
      {
        if ( a1[1]._._.collisionMgr[300] )
          y = FIELD_F32(a1, 0x70) - FIELD_F32(a1, 0x24C);
        else
          y = FIELD_F32(a1, 0x7C);
        if ( y > 0.0 )
        {
          ActiveCollider_getCenterY(a3);
          v35 = v34;
          ActiveCollider_getCenterY(a2);
          if ( v35 > v36 )
          {
            if ( FIELD_U32(owner + (2) * 644, 0x20) == (sead_ListNode *)3 )
            {
              sub_602A3178(owner, &dword_60CC4B7C);
              (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 404))(a1);
              (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 408))(a1, owner);
              playerId = (unsigned __int8)FIELD_U8(owner, 0x54);
              goto LABEL_24;
            }
            (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 804))(a1, owner);
            sub_602A3178(owner, &dword_60CC4B7C);
            goto LABEL_28;
          }
        }
        v37 = FIELD_U8(owner, 0x54);
        if ( v37 <= 3 )
        {
          v31 = &FIELD_U32(a1, 0x0) + v37;
          if ( v31[1579] >= 1 && FIELD_U32(owner + (2) * 644, 0x20) == (sead_ListNode *)3 )
            goto LABEL_27;
        }
      }
      break;
    case 1:
      v10 = FIELD_U32(a3, 0x40);
      CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v12 == (*(int (**)(void))(dword_60C81D4C + 8))() )
      {
        FIELD_U8(a1, 0x54) = FIELD_U8(v10, 0x54);
        v13 = FIELD_F32(v10, 0x6C) > FIELD_F32(a1, 0x6C);
        v14 = (float)byte_60AFE3F4[v13];
        FIELD_U32(a1, 0x50) = v13;
        FIELD_F32(a1, 0x78) = v14 * 3.5;
        FIELD_F32(a1, 0x7C) = 2.5;
        FIELD_F32(a1, 0x80) = 0.0;
        (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C81D8C);
        goto LABEL_28;
      }
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 804))(a1, v10);
      v27 = FIELD_U32(a3, 0x40);
      if ( ((unsigned int)&dword_60C7B374 & ~(1611179320 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      v6 = 1;
      if ( v27 && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v27, 0x0))(v27, &dword_60C7B370) == 1 )
        goto LABEL_35;
      break;
    case 2:
      v15 = FIELD_U32(a3, 0x40);
      v16 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
      v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
      if ( v17 == (*(int (**)(void))(dword_60C81D4C + 8))() )
      {
        v19 = FIELD_U8(v15, 0x54);
        p_playerId = (float *)&FIELD_U8(v15, 0x54);
        FIELD_U8(a1, 0x54) = v19;
        v20 = p_playerId[6] > FIELD_F32(a1, 0x6C);
        v21 = (float)byte_60AFE3F4[v20];
        FIELD_U32(a1, 0x50) = v20;
        FIELD_F32(a1, 0x78) = v21 * 3.5;
        FIELD_F32(a1, 0x7C) = 2.5;
        FIELD_F32(a1, 0x80) = 0.0;
        (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C81D8C);
      }
      else
      {
        if ( !v15 )
          goto LABEL_28;
        p_playerId = (float *)&FIELD_U8(v15, 0x54);
      }
      playerId = *(unsigned __int8 *)p_playerId;
LABEL_24:
      v30 = 0;
      if ( playerId < 4 )
        v30 = (char)playerId;
      v31 = &FIELD_U32(a1, 0x0) + v30;
LABEL_27:
      v31[1579] = 16;
      goto LABEL_28;
    case 3:
      v22 = FIELD_U32(a3, 0x40);
      v23 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
      v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
      if ( v24 == (*(int (**)(void))(dword_60C81D4C + 8))() )
      {
        FIELD_U8(a1, 0x54) = FIELD_U8(v22, 0x54);
        v25 = FIELD_F32(v22, 0x6C) > FIELD_F32(a1, 0x6C);
        v26 = (float)byte_60AFE3F4[v25];
        FIELD_U32(a1, 0x50) = v25;
        FIELD_F32(a1, 0x78) = (float)(v26 * 3.5) * 1.5;
        FIELD_F32(a1, 0x7C) = 2.5;
        FIELD_F32(a1, 0x80) = 0.0;
        (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C81D8C);
LABEL_28:
        v6 = 1;
      }
      else
      {
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 804))(a1, v22);
        v27 = FIELD_U32(a3, 0x40);
        if ( ((unsigned int)&dword_60C7B374 & ~(1611179544 << v33) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        v6 = 1;
        if ( v27 && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v27, 0x0))(v27, &dword_60C7B370) == 1 )
LABEL_35:
          sub_602A3178(v27, &dword_60CC4B7C);
      }
      break;
    default:
      return v6;
  }
  return v6;
}
