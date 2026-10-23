/* SE_EMY_MECHAKOOPA_DAMAGE_ref
 * address: 0x603477F8   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_MECHAKOOPA_DAMAGE_ref(StageActor *a1)
{
  int v2; // r5
  int v3; // r0
  int direction; // r1
  float v5; // s0
  __int16 v6; // r0
  int v7; // r5
  int v8; // r5
  int v9; // r5
  float y; // r0
  unsigned int playerId; // r1
  Vec2 v13; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  FIELD_U32(a1, 0x238) |= 4u;
  sub_600009FC(a1);
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1[9].aCollider.field_70 + 8))(a1[9].aCollider.field_70);
  v3 = (*(int (**)(void))(dword_60C949AC + 8))();
  direction = FIELD_U32(a1, 0x50);
  v5 = (float)byte_60AFE3F4[direction];
  if ( v2 == v3 )
  {
    FIELD_U32(a1, 0x78).x = v5 * 4.0;
    FIELD_U32(a1, 0x78).y = 0.0;
    FIELD_U32(a1, 0x78).z = 0.0;
    v6 = 10;
  }
  else
  {
    FIELD_U32(a1, 0x78).x = v5 * 2.5;
    FIELD_U32(a1, 0x78).y = 2.0;
    FIELD_U32(a1, 0x78).z = 0.0;
    a1[9].profileFlags = 511;
    LODWORD(a1[9].effectOffset.x) = 1;
    v7 = **(_DWORD **)(a1[9].field_230 + 12);
    SkeletalAnim_play(v7, a1[9].field_22C, (int)&dword_60C94A70);
    AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), dword_60C94A80);
    v8 = **(_DWORD **)(a1[9].field_230 + 20);
    TexAnim_play(v8, a1[9].field_22C, &dword_60C94A78);
    AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), dword_60C94A80);
    v9 = Global_BasicSoundActor1;
    y = FIELD_U32(a1, 0x6C).y;
    position.x = FIELD_U32(a1, 0x6C).x;
    position.y = y;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor1_playSound(v9, "SE_EMY_MECHAKOOPA_DAMAGE", (int)&v13, 0);
    direction = FIELD_U32(a1, 0x50);
    v6 = 16;
  }
  FIELD_U32(a1, 0x84).x = 0.0;
  FIELD_F32(a1, 0x68) = 0.0625;
  FIELD_U32(a1, 0x9C).y = Enemy_CommonRotations[direction];
  playerId = FIELD_U8(a1, 0x54);
  if ( playerId <= 3 )
  {
    *((_WORD *)&a1[9].aCollider.info.callback + playerId) = v6;
    sub_602724DC(a1);
    sub_602724B0((int)a1);
  }
  LOBYTE(a1[9].effectOffset.y) = 0;
  return 6372;
}
