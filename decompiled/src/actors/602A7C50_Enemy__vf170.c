/* Enemy__vf170
 * address: 0x602A7C50   size: 144   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall Enemy__vf170(int a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // r0
  const char *v4; // r1
  float v5; // r0
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = Global_BasicSoundActor1;
  v2 = FIELD_F32(a1, 108);
  if ( (FIELD_U8(a1, 6148) & 2) != 0 )
  {
    v5 = FIELD_F32(a1, 112);
    position.x = v2;
    position.y = v5;
    mapPositionToScreen(&v7, &position);
    v4 = "SE_EMY_DOWN_HPDP_H";
  }
  else
  {
    v3 = FIELD_F32(a1, 112);
    position.x = v2;
    position.y = v3;
    mapPositionToScreen(&v7, &position);
    v4 = "SE_EMY_DOWN_HPDP_S";
  }
  return BasicSoundActor1_playSound(v1, v4, (int)&v7, 0);
}
