/* Enemy__collisionThrowableObject
 * address: 0x602A68EC   size: 424   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6029F054 : Thwomp
//   - 0x603167C4 : DryBones
//   - 0x60382B8C : Pokey
//   - 0x6062473C : FixedIcicle
//   - 0x60025720 : BossBase
//   - 0x60272A04 : CarryableEnemy
signed int __fastcall Enemy__collisionThrowableObject(_DWORD *a1, int a2, int a3)
{
  float v4; // r0
  float v5; // r1
  StageActor *v7; // r7
  _BOOL4 v8; // r0
  unsigned int playerId; // r9
  _BOOL4 v10; // r8
  char v11; // r6
  char v12; // r12
  float v13; // r1
  int v14; // r5
  float *v15; // r0
  float v16; // r1
  Vec3 v18; // [sp+0h] [bp-48h] BYREF
  int v19; // [sp+Ch] [bp-3Ch]
  StateVirtual *v20; // [sp+10h] [bp-38h]
  char v21; // [sp+14h] [bp-34h]
  _BOOL4 v22; // [sp+18h] [bp-30h]
  char v23; // [sp+1Ch] [bp-2Ch]
  Vec2 out; // [sp+20h] [bp-28h] BYREF

  v4 = FIELD_F32(a2, 84);
  v5 = FIELD_F32(a2, 88);
  v18.x = v4;
  v18.y = v5;
  v18.z = 0.0;
  sub_602A38A4((int)a1, &v18.x);
  v7 = *(StageActor **)(a3 + 64);
  v8 = sub_6000ADDC((int)a1, (int)v7);
  playerId = (unsigned __int8)FIELD_U8(v7, 0x54);
  v10 = v8;
  if ( playerId > 3 )
  {
    v13 = *((float *)a1 + 28);
    v14 = Global_BasicSoundActor1;
    v18.x = (float)a1[27];
    v18.y = v13;
    mapPositionToScreen(&out, &v18);
    BasicSoundActor1_playSound(v14, "SE_EMY_DOWN", (int)&out, 0);
    v11 = -1;
  }
  else
  {
    SE_EMY_KAME_HIT_ref((int)v7, FIELD_U32(v7, 0x234), a1[1573] == 2);
    sub_60000A18(v7);
    v11 = sub_602856EC(a1 + 1573, FIELD_U32(v7, 0x234));
  }
  if ( ((unsigned int)&dword_60C907F4 & ~(1613392340 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v15 = (float *)((char *)&unk_60C907F0 + 8 * v10);
  v16 = v15[11];
  v18.y = v15[12];
  v18.x = v16;
  v18.z = -4.0;
  v19 = unk_60C906E8;
  v20 = &stru_60C90710;
  v21 = v11;
  v22 = v10;
  v23 = playerId;
  sub_602A852C((int)(a1 + 1526), &v18);
  return 1;
}
