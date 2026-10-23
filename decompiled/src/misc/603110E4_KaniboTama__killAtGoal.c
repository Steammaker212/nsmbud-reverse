/* KaniboTama__killAtGoal
 * address: 0x603110E4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000EBC
// 
// Overridden by: None
int __fastcall KaniboTama__killAtGoal(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  float v5; // r1
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  result = FIELD_U32(a1, 6408);
  if ( !result )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v4, "SE_OBJ_ROCK_S_CRASH", &out.x, 0);
    v5 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    position.z = 4500.0;
    return EffectData_create(708, &position, 0, 0);
  }
  return result;
}
