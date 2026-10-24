/* DryBones__collisionPlayer
 * address: 0x60315B68   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D54
// 
// Overridden by: None
void __fastcall DryBones__collisionPlayer(int *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r7
  char v7; // r12
  StageActor *owner; // r8
  int v9; // r11
  StageActor *v10; // r7
  char v11; // r0
  int v12; // r0
  StateBase *CurrentState; // r0
  int v14; // r9
  _DWORD *v15; // r0
  int *v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r0
  unsigned int playerId; // r0
  int *v21; // r8
  float v22; // r1
  int v23; // r7
  _DWORD v24[2]; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+Ch] [bp-34h] BYREF
  Vec3 position; // [sp+14h] [bp-2Ch] BYREF

  if ( *((_WORD *)a1 + 3821) == 1 )
  {
    v24[0] = a2;
    v24[1] = a3;
    v6 = sub_602A8B10(a1 + 1938, v24);
    if ( v6 )
    {
      owner = FIELD_U32(a3, 0x40);
      v9 = 0;
      if ( owner )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1613847504 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
        {
          if ( v6 == 2 )
          {
            (*(void (__fastcall **)(int *))(*a1 + 404))(a1);
            (*(void (__fastcall **)(int *, StageActor *))(*a1 + 408))(a1, owner);
            (*(void (__fastcall **)(int *, StageActor *))(*a1 + 388))(a1, owner);
          }
          else
          {
            (*(void (__fastcall **)(int *, StageActor *))(*a1 + 392))(a1, owner);
            (*(void (__fastcall **)(int *, StageActor *))(*a1 + 396))(a1, owner);
            (*(void (__fastcall **)(int *, StageActor *))(*a1 + 372))(a1, owner);
            CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
            v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
            if ( v14 == (*(int (**)(void))(dword_60C9343C + 8))() )
            {
              v15 = (_DWORD *)a1[1575];
              v16 = (int *)v15[3];
              v17 = v15[2];
              v18 = v15[17];
              if ( v17 > v18 )
                v16 += v18;
              v19 = *v16;
              FIELD_U32(v19, 20) = 0;
              FIELD_U32(v19, 28) |= 2u;
            }
            else
            {
              a1[1905] = (int)StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
              (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C9343C);
            }
            playerId = FIELD_U8(owner, 0x54);
            LODWORD(position.x) = 24;
            v21 = sub_60002B90(playerId, unk_60C263D4);
            v22 = *((float *)a1 + 28);
            v23 = Global_BasicSoundActor1;
            LODWORD(position.x) = a1[27];
            position.y = v22;
            mapPositionToScreen(&out, &position);
            BasicSoundActor1_playSound(v23, "SE_EMY_STEP_BIG_KALON", (int)&out, (int)v21);
          }
        }
      }
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    v10 = FIELD_U32(a2, 0x40);
    if ( (float)(FIELD_F32(FIELD_U32(a3, 0x40), 0x70) - FIELD_F32(FIELD_U32(a3, 0x40), 0x24C)) >= 0.0 )
    {
      v11 = 12;
      if ( (float)(FIELD_F32(v10, 0x70) - FIELD_F32(v10, 0x24C)) > 0.0 )
        v11 = 0;
      LOBYTE(FIELD_U32(v10 + (9) * 644, 0x1DC)) = v11;
    }
    v9 = 0;
    v12 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
    if ( v12 )
    {
      if ( v12 != 2 )
      {
        v9 = 0;
        a1[1905] = (int)StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
        *((_BYTE *)a1 + 7664) = 0;
        *((_BYTE *)a1 + 7674) = 1;
        (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C9345C);
        *((_BYTE *)a1 + 7661) = 0;
      }
    }
    else
    {
      v9 = 1;
    }
    LOBYTE(FIELD_U32(v10 + (9) * 644, 0x1DC)) = 0;
  }
  if ( v9 )
    sub_60315974((int)a1, (int)a2, (int)a3);
}
