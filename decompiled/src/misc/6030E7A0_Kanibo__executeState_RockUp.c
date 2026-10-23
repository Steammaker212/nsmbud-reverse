/* Kanibo__executeState_RockUp
 * address: 0x6030E7A0   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__executeState_RockUp(Enemy *this)
{
  Enemy *v2; // r5
  float y; // r2
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r1
  unsigned int v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r0
  float v10; // r1
  int v11; // r5
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  v2 = this + 1;
  j_ModelWrapper_updateAnims(*((_DWORD *)this + 1575));
  sub_604218E0(FIELD_U32(v2, 0x0)._._._.vtable);
  CollisionActor__handleGravity(&FIELD_U32(this, 0x0)._);
  CollisionActor__handleSpeed(&FIELD_U32(this, 0x0)._);
  CollisionActor__sub_600034C8(&FIELD_U32(this, 0x0)._);
  if ( *((_BYTE *)this + 6472) )
  {
    if ( (FIELD_U32(this, 0x0)._.collisionMgr[2232] & 1) == 0 && (FIELD_U32(this, 0x0)._.collisionMgr[2224] & 1) != 0 )
    {
      y = FIELD_U32(this, 0x0)._._.position.y;
      v4 = *(_DWORD *)&FIELD_U32(this, 0x0)._.collisionMgr[5308];
      position.x = FIELD_U32(this, 0x0)._._.position.x;
      position.y = y;
      position.z = 4500.0;
      EffectData_create(dword_60AFF324[BYTE1(v4)], &position, 0, 0);
    }
  }
  else
  {
    *((_BYTE *)this + 6472) = 1;
  }
  v5 = *((_DWORD *)this + 1588);
  if ( v5 == 1 )
  {
    v8 = *(_DWORD **)(FIELD_U32(v2, 0x0)._._._.vtable + 12);
    v9 = *(_DWORD *)(FIELD_U32(v2, 0x0)._._._.vtable + 68);
    if ( *(_DWORD *)(FIELD_U32(v2, 0x0)._._._.vtable + 8) > v9 )
      v8 += v9;
    if ( sub_60418548(*v8 + 4) )
    {
      Kanibo__setTamaAction(this, 1);
      v10 = FIELD_U32(this, 0x0)._._.position.y;
      v11 = Global_BasicSoundActor1;
      position.x = FIELD_U32(this, 0x0)._._.position.x;
      position.y = v10;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v11, "SE_EMY_KANIBO_THROW", (int)&out, 0);
      (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(this, 0x0)._._._.vtable + 192))(this, &Kanibo__StateID_Jump);
    }
  }
  else if ( !v5 )
  {
    v6 = *(_DWORD **)(FIELD_U32(v2, 0x0)._._._.vtable + 12);
    v7 = *(_DWORD *)(FIELD_U32(v2, 0x0)._._._.vtable + 68);
    if ( *(_DWORD *)(FIELD_U32(v2, 0x0)._._._.vtable + 8) > v7 )
      v6 += v7;
    if ( sub_60418548(*v6 + 4) )
    {
      *((_DWORD *)this + 1588) = 1;
      *((_BYTE *)this + 6356) = 1;
    }
  }
}
