/* Enemy__damageFromUnder
 * address: 0x602A1E1C   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x600027A8
// 
// Overridden by:
//   - 0x6029F040 : Thwomp
//   - 0x60316828 : DryBones
//   - 0x6033B6D0 : GoombaBase
//   - 0x60382680 : Pokey
//   - 0x60030A80 : SumoBrosBoss
//   - 0x603A174C : ShellEnemy
//   - 0x60310F6C : KaniboTama
int __fastcall Enemy__damageFromUnder(Enemy *this)
{
  float y; // r1
  float y_; // r1
  int soundRelated; // r5
  char v5; // r12
  int v6; // r0
  char playerId; // r2
  float *v8; // r1
  float v9; // r3
  Vec3 pos; // [sp+0h] [bp-38h] BYREF
  int v12; // [sp+Ch] [bp-2Ch]
  StateVirtual *v13; // [sp+10h] [bp-28h]
  char v14; // [sp+14h] [bp-24h]
  int v15; // [sp+18h] [bp-20h]
  char v16; // [sp+1Ch] [bp-1Ch]
  Vec2 screenPos; // [sp+20h] [bp-18h] BYREF

  y = FIELD_U32(this, 0x0)._._.position.y;
  pos.x = FIELD_U32(this, 0x0)._._.position.x;
  pos.y = y;
  pos.z = 4500.0;
  EffectData_create(21, &pos, 0, 0);            // This is Effect__spawn, Lord copy to paste
  y_ = FIELD_U32(this, 0x0)._._.position.y;
  soundRelated = Global_BasicSoundActor1;
  pos.x = FIELD_U32(this, 0x0)._._.position.x;
  pos.y = y_;
  mapPositionToScreen(&screenPos, &pos);
  BasicSoundActor1_playSound(soundRelated, "SE_EMY_DOWN", (int)&screenPos, 0);
  if ( ((unsigned int)dword_60C90380 & ~(1613373092 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C90380) )
  {
    unk_60C90390 = 1069547520;
    unk_60C90394 = 1077936128;
    unk_60C90398 = -1077936128;
    dword_60C9039C = 1077936128;
    _cxa_guard_release(dword_60C90380);
  }
  v6 = FIELD_U32(this, 0x0)._._.field_224;
  playerId = FIELD_U32(this, 0x0)._._.playerId;
  v8 = (float *)&dword_60C90380[2 * v6];
  v9 = v8[4];
  pos.y = v8[5];
  pos.x = v9;
  pos.z = -4.0;
  v12 = -1103101952;
  v13 = &stru_60C90710;
  v14 = -1;
  v15 = v6;
  v16 = playerId;
  return sub_602A852C((int)&FIELD_F32(this, 0x17D8), &pos);
}
