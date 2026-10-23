/* SE_EMY_SHADOW_FN_ref
 * address: 0x6039B2EC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHADOW_FN_ref(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int v6; // r5
  float v7; // r1
  int v8; // r5
  const char *v9; // r1
  int result; // r0
  float v11; // r1
  Vec2 v12; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = *(_DWORD **)(a1 + 6304);
  v3 = (_DWORD *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  v6 = *v3 + 4;
  if ( sub_60418548(v6) )
  {
    v7 = FIELD_F32(a1, 112);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&v12, &position);
    v9 = "SE_EMY_SHADOW_FN";
  }
  else
  {
    result = sub_60418548(v6);
    if ( result != 1 )
      return result;
    v11 = FIELD_F32(a1, 112);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v11;
    mapPositionToScreen(&v12, &position);
    v9 = "SE_EMY_SHADOW_FN_L";
  }
  return BasicSoundActor1_playSound(v8, v9, (int)&v12, 0);
}
