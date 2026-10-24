/* DryBones__collisionYoshi
 * address: 0x60315EDC   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D78
// 
// Overridden by: None
void __fastcall DryBones__collisionYoshi(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r0
  StageActor *owner; // r5
  char v8; // r12
  unsigned int playerId; // r6
  int *v10; // r5
  float v11; // r1
  int v12; // r6
  StageActor *v13; // r7
  char v14; // r0
  int v15; // r0
  Vec2 v16; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( FIELD_U16(a1, 7642) == 1 )
  {
    v6 = Enemy__processCollision((Enemy *)a1, a2, a3, 2);
    if ( v6 )
    {
      if ( v6 != 2 )
      {
        FIELD_U32(a1, 7620) = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        FIELD_U8(a1, 7664) = 0;
        FIELD_U8(a1, 7674) = 1;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9345C);
        FIELD_U8(a1, 7661) = 0;
        owner = FIELD_U32(a3, 0x40);
        if ( ((unsigned int)&dword_60C7B37C & ~(1613848456 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        playerId = -1;
        if ( owner )
        {
          if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
            playerId = FIELD_U8(owner, 0x54);
        }
        LODWORD(position.x) = 23;
        v10 = sub_60002B90(playerId, unk_60C263D0);
        v11 = FIELD_F32(a1, 112);
        v12 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v11;
        mapPositionToScreen(&v16, &position);
        BasicSoundActor1_playSound(v12, "SE_EMY_BIG_KALON", (int)&v16, (int)v10);
      }
      return;
    }
LABEL_21:
    sub_60315974(a1, (int)a2, (int)a3);
    return;
  }
  v13 = FIELD_U32(a2, 0x40);
  if ( (float)(FIELD_F32(FIELD_U32(a3, 0x40), 0x70) - FIELD_F32(FIELD_U32(a3, 0x40), 0x24C)) >= 0.0 )
  {
    v14 = 12;
    if ( (float)(FIELD_F32(v13, 0x70) - FIELD_F32(v13, 0x24C)) > 0.0 )
      v14 = 0;
    LOBYTE(FIELD_U32(v13 + (9) * 644, 0x1DC)) = v14;
  }
  v15 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
  if ( !v15 )
  {
    LOBYTE(FIELD_U32(v13 + (9) * 644, 0x1DC)) = 0;
    goto LABEL_21;
  }
  if ( v15 != 2 )
  {
    FIELD_U32(a1, 7620) = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    FIELD_U8(a1, 7664) = 0;
    FIELD_U8(a1, 7674) = 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9345C);
    FIELD_U8(a1, 7661) = 0;
  }
  LOBYTE(FIELD_U32(v13 + (9) * 644, 0x1DC)) = 0;
}
