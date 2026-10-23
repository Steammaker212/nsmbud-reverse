/* SE_BOSS_SANBO_ref
 * address: 0x600F70E8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall SE_BOSS_SANBO_ref(float *result)
{
  int v1; // r1
  int v2; // r4
  float v3; // r1
  float v4; // r0
  const char *v5; // r1
  float v6; // r1
  float v7; // r0
  float v8; // r1
  float v9; // r0
  float v10; // r1
  float v11; // r0
  float v12; // r1
  float v13; // r0
  float v14; // r1
  float v15; // r0
  Vec2 v16; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = *((_DWORD *)result + 1578);
  if ( *((_DWORD *)result + 1577) == 4 - v1 )
  {
    switch ( v1 )
    {
      case 0:
        v2 = Global_BasicSoundActor1;
        v3 = result[27];
        v4 = result[28];
        position.x = v3;
        position.y = v4;
        mapPositionToScreen(&v16, &position);
        v5 = "SE_BOSS_SANBO_APPEAR1";
        break;
      case 1:
        v2 = Global_BasicSoundActor1;
        v10 = result[27];
        v11 = result[28];
        position.x = v10;
        position.y = v11;
        mapPositionToScreen(&v16, &position);
        v5 = "SE_BOSS_SANBO_APPEAR2";
        break;
      case 2:
        v2 = Global_BasicSoundActor1;
        v12 = result[27];
        v13 = result[28];
        position.x = v12;
        position.y = v13;
        mapPositionToScreen(&v16, &position);
        v5 = "SE_BOSS_SANBO_APPEAR3";
        break;
      case 3:
        v2 = Global_BasicSoundActor1;
        v14 = result[27];
        v15 = result[28];
        position.x = v14;
        position.y = v15;
        mapPositionToScreen(&v16, &position);
        v5 = "SE_BOSS_SANBO_APPEAR4";
        break;
      default:
        v2 = Global_BasicSoundActor1;
        v8 = result[27];
        v9 = result[28];
        position.x = v8;
        position.y = v9;
        mapPositionToScreen(&v16, &position);
        v5 = "SE_BOSS_SANBO_APPEAR5";
        break;
    }
  }
  else
  {
    if ( *((_DWORD *)result + 1579) != v1 )
      return result;
    v2 = Global_BasicSoundActor1;
    v6 = result[27];
    v7 = result[28];
    position.x = v6;
    position.y = v7;
    mapPositionToScreen(&v16, &position);
    v5 = "SE_BOSS_SANBO_LAND";
  }
  return (float *)BasicSoundActor1_playSound(v2, v5, (int)&v16, 0);
}
