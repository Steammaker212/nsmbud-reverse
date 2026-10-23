/* SE_BOSS_CMN_DAMAGE_FIRE_ref
 * address: 0x6039BAD4   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_CMN_DAMAGE_FIRE_ref(int a1, int a2)
{
  StateMgr *v4; // r7
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r8
  StateBase *v8; // r0
  int v9; // r5
  StateBase *v10; // r0
  int v11; // r5
  char v12; // r12
  int v13; // r1
  StateBase *v15; // r0
  int v16; // r5
  __int16 v17; // r0
  float v18; // r1
  int v19; // r5
  _DWORD *v20; // r4
  int v21; // t1
  _BYTE *v22; // r6
  int v23; // r0
  _BYTE *v24; // r0
  bool v25; // zf
  Vec2 v26; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v7 = 0;
  if ( v6 != (*(int (**)(void))(dword_60C972A0 + 8))() )
  {
    v8 = StateMgr__getCurrentState(v4);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    if ( v9 != (*(int (**)(void))(dword_60C97480 + 8))() )
    {
      v10 = StateMgr__getCurrentState(v4);
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
      if ( v11 != (*(int (**)(void))(dword_60C973E0 + 8))() && !FIELD_U8(a1, 6398) )
      {
        if ( (FIELD_U32(a2, 140) & 0xFFFFFFFB) - 9 < 2 )
        {
LABEL_7:
          v13 = 0;
LABEL_8:
          FIELD_U32(a1, 6404) = v13;
          return 1;
        }
        else
        {
          switch ( FIELD_U32(a2, 140) )
          {
            case 1:
              v15 = StateMgr__getCurrentState(v4);
              v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
              if ( v16 == (*(int (**)(void))(dword_60C97300 + 8))() )
                return v7;
              v7 = 0;
              v17 = FIELD_U16(a1, 6348) - 1;
              if ( FIELD_S16(a1, 6348) - 1 <= 0 )
                v17 = 0;
              FIELD_U16(a1, 6348) = v17;
              if ( v17 )
              {
                FIELD_U16(a1, 6340) = 30;
                FIELD_U16(a1, 6336) = 120;
                v18 = FIELD_F32(a1, 112);
                v19 = Global_BasicSoundActor1;
                position.x = FIELD_F32(a1, 108);
                position.y = v18;
                mapPositionToScreen(&v26, &position);
                BasicSoundActor1_playSound(v19, "SE_BOSS_CMN_DAMAGE_FIRE", (int)&v26, 0);
                FIELD_U16(a1, 6576) = 24;
                FIELD_U32(a1, 6580) = 1065353216;
                v21 = FIELD_U32(a1, 6308);
                v20 = (_DWORD *)(a1 + 6308);
                sub_6041838C((ModelAnimation *)(v21 + 4));
                *(_DWORD *)(*v20 + 24) = 1065353216;
                v20[13] = 4;
                return v7;
              }
              v13 = 2;
              goto LABEL_8;
            case 3:
              v22 = *(_BYTE **)(a2 + 64);
              v23 = (unsigned __int8)v22[533];
              if ( (unsigned int)(v23 - 1) >= 2 )
              {
                if ( v23 == 4 )
                  goto LABEL_7;
              }
              else
              {
                if ( ((unsigned int)&dword_60C7B37C & ~(1614396760 << v12) & 1) == 0
                  && _cxa_guard_acquire(&dword_60C7B37C) )
                {
                  dword_60C7B378 = (int)&off_60BC00BC;
                  _cxa_guard_release(&dword_60C7B37C);
                }
                v24 = (_BYTE *)(**(int (__fastcall ***)(_BYTE *, int *))v22)(v22, &dword_60C7B378);
                if ( v24 )
                  v24 = v22;
                v25 = (v24[1213] & 4) == 0;
                if ( (v24[1213] & 4) == 0 )
                  v25 = (v24[1216] & 0x30) == 0;
                if ( !v25 )
                  goto LABEL_7;
                if ( (v24[1210] & 1) != 0 )
                {
LABEL_26:
                  v7 = 1;
                  FIELD_U32(a1, 6404) = 1;
                }
              }
              break;
            case 5:
            case 0x13:
            case 0x14:
              goto LABEL_7;
            case 7:
              goto LABEL_26;
            default:
              return v7;
          }
        }
      }
    }
  }
  return v7;
}
