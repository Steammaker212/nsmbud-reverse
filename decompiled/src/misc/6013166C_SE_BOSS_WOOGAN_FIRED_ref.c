/* SE_BOSS_WOOGAN_FIRED_ref
 * address: 0x6013166C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_BOSS_WOOGAN_FIRED_ref(float *a1, float a2)
{
  float *v4; // r7
  float v5; // s18
  bool v6; // cc
  float v7; // s0
  float v8; // r1
  int v9; // r5
  float v10; // r1
  int v11; // r5
  float v12; // r1
  int v13; // r5
  float v14; // r1
  int v15; // r5
  float result; // s0
  Vec2 out; // [sp+8h] [bp-38h] BYREF
  Vec3 position; // [sp+10h] [bp-30h] BYREF

  v4 = a1 + 1570;
  v5 = a1[1570];
  v6 = a2 <= 0.0;
  v7 = v5 + a2;
  a1[1570] = v7;
  if ( v6 )
  {
    if ( v7 >= 0.9 )
    {
      v14 = a1[28];
      v15 = Global_BasicSoundActor1;
      position.x = a1[27];
      position.y = v14;
      mapPositionToScreen(&out, &position);
      sub_60813810(v15, (int)"SE_BOSS_WOOGAN_THAW", (int)&out, 1, 0);
    }
    else
    {
      *v4 = v5;
      v10 = a1[28];
      v11 = Global_BasicSoundActor1;
      position.x = a1[27];
      position.y = v10;
      mapPositionToScreen(&out, &position);
      sub_60813810(v11, (int)"SE_BOSS_WOOGAN_THAW_NO_DAMAGE", (int)&out, 1, 0);
    }
  }
  else if ( v7 <= 1.8 )
  {
    v12 = a1[28];
    v13 = Global_BasicSoundActor1;
    position.x = a1[27];
    position.y = v12;
    mapPositionToScreen(&out, &position);
    sub_60813810(v13, (int)"SE_BOSS_WOOGAN_FIRED", (int)&out, 1, 0);
  }
  else
  {
    *v4 = v5;
    v8 = a1[28];
    v9 = Global_BasicSoundActor1;
    position.x = a1[27];
    position.y = v8;
    mapPositionToScreen(&out, &position);
    sub_60813810(v9, (int)"SE_BOSS_WOOGAN_FIRED_NO_DAMAGE", (int)&out, 1, 0);
  }
  result = *v4;
  if ( *v4 != v5 )
  {
    a1[1555] = (float)(a2 * 48.0) + a1[1555];
    a1[1560] = (float)(a2 * 48.0) + a1[1560];
    result = (float)(a2 * 48.0) + a1[28];
    a1[28] = result;
  }
  return result;
}
