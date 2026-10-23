/* sub_60269BC8
 * address: 0x60269BC8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60269BC8(StateActor *a1, int a2, int a3)
{
  StageActor *v3; // r5
  int v5; // r6
  unsigned int playerId; // r6
  unsigned int v7; // r0
  float *p_x; // r5
  int v9; // r6
  float y; // r1
  float v11; // r1
  int v12; // r6
  float v13; // r0
  Vec3 position; // [sp+8h] [bp-30h] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF

  v3 = *(StageActor **)(a3 + 64);
  v5 = 0;
  if ( Actor__getProfileId(&FIELD_U32(v3, 0x0)) == 392 )
  {
    playerId = FIELD_U8(v3, 0x54);
    if ( playerId > 3 )
    {
      v9 = Global_BasicSoundActor1;
      p_x = &FIELD_U32(a1, 0x0)._.position.x;
      y = FIELD_U32(a1, 0x0)._.position.y;
      position.x = FIELD_U32(a1, 0x0)._.position.x;
      position.y = y;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v9, "SE_EMY_DOWN", (int)&out, 0);
    }
    else
    {
      SE_EMY_KAME_HIT_ref((int)v3, FIELD_U32(v3, 0x234), a1[1]._._.aCollider._.containingHeap == 2);
      sub_60000A18(v3);
      v7 = sub_602856EC(&a1[1]._._.aCollider._.containingHeap, FIELD_U32(v3, 0x234));
      p_x = &FIELD_U32(a1, 0x0)._.position.x;
      sub_60022540(dword_60C7F52C, (int)&FIELD_U32(a1, 0x0)._.position, v7, playerId, 1);
    }
    v11 = FIELD_U32(a1, 0x0)._.position.y;
    v12 = Global_BasicSoundActor1;
    position.x = FIELD_U32(a1, 0x0)._.position.x;
    position.y = v11;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v12, "SE_EMY_BUBBLE_EXTINCT", (int)&out, 0);
    v13 = *p_x;
    position.y = p_x[1];
    position.x = v13;
    position.z = 4500.0;
    EffectData_create(656, &position, 0, 0);
    v5 = 1;
    StageActor__delete(a1, 1);
  }
  return v5;
}
