/* Enemy__processCollision
 * address: 0x602A2E28   size: 740   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Enemy__processCollision(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther, int unk)
{
  StageActor *owner; // r5
  int v7; // r0
  int v8; // r4
  float v9; // s0
  int v10; // r7
  float y; // r1
  float v12; // s0
  int v13; // r7
  float v14; // s0
  int v15; // r7
  ActiveCollider *self_; // [sp+4h] [bp-34h] BYREF
  ActiveCollider *other_; // [sp+8h] [bp-30h]
  Vec2 out; // [sp+Ch] [bp-2Ch] BYREF
  Vec3 position; // [sp+14h] [bp-24h] BYREF

  owner = FIELD_U32(acOther, 0x40);
  self_ = acSelf;
  other_ = acOther;
  v7 = sub_602A8B10((int)&FIELD_U32(this, 0x1878), (int)&self_);
  v8 = v7;
  if ( v7 == 3 )
  {
    if ( !sub_6076E35C((int)owner) )
    {
      if ( unk == 1 )
      {
        v14 = FIELD_U32(this, 0x0)._._.position.y + FIELD_U32(this, 0x0)._._.effectOffset.y;
        v15 = Global_BasicSoundActor1;
        position.x = FIELD_U32(this, 0x0)._._.position.x + FIELD_U32(this, 0x0)._._.effectOffset.x;
        position.y = v14;
        mapPositionToScreen(&out, &position);
        BasicSoundActor1_playSound(v15, "SE_EMY_CMN_STEP", (int)&out, 0);
      }
      else if ( !unk )
      {
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 400))(this, owner);
        y = FIELD_U32(owner, 0x6C).y;
        position.x = FIELD_U32(owner, 0x6C).x;
        position.y = y;
        position.z = 4500.0;
        EffectData_create(21, &position, 0, 0);
      }
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 372))(this, owner);
      *(_WORD *)&FIELD_U8(this, 0x1898) = 257;
      goto LABEL_22;
    }
  }
  else if ( v7 == 2 )
  {
    if ( !sub_6076E35C((int)owner) )
    {
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 388))(this, owner);
      (*(void (__fastcall **)(Enemy *))(FIELD_U32(this, 0x0)._._._.vtable + 404))(this);
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 408))(this, owner);
    }
  }
  else if ( v7 == 1 && !sub_6076E35C((int)owner) )
  {
    if ( FIELD_U8(owner, 0x215) == 1 )
    {
      if ( unk )
      {
        if ( unk == 1 )
        {
          v9 = FIELD_U32(this, 0x0)._._.position.y + FIELD_U32(this, 0x0)._._.effectOffset.y;
          v10 = Global_BasicSoundActor1;
          position.x = FIELD_U32(this, 0x0)._._.position.x + FIELD_U32(this, 0x0)._._.effectOffset.x;
          position.y = v9;
          mapPositionToScreen(&out, &position);
          BasicSoundActor1_playSound(v10, "SE_EMY_CMN_STEP", (int)&out, 0);
        }
      }
      else
      {
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 0x188))(this, owner);
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 0x18C))(this, owner);
      }
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 372))(this, owner);
LABEL_22:
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 376))(this, owner);
      return v8;
    }
    if ( unk )
    {
      if ( unk == 1 )
      {
        v12 = FIELD_U32(this, 0x0)._._.position.y + FIELD_U32(this, 0x0)._._.effectOffset.y;
        v13 = Global_BasicSoundActor1;
        position.x = FIELD_U32(this, 0x0)._._.position.x + FIELD_U32(this, 0x0)._._.effectOffset.x;
        position.y = v12;
        mapPositionToScreen(&out, &position);
        BasicSoundActor1_playSound(v13, "SE_EMY_YOSHI_STEP", (int)&out, 0);
      }
    }
    else
    {
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 412))(this, owner);
    }
    (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 380))(this, owner);
    (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 384))(this, owner);
  }
  return v8;
}
