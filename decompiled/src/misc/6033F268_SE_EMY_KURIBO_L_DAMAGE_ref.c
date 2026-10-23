/* SE_EMY_KURIBO_L_DAMAGE_ref
 * address: 0x6033F268   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KURIBO_L_DAMAGE_ref(float *a1)
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
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = *((_DWORD *)a1 + 1598);
  if ( v1 == 3 )
  {
    v2 = Global_BasicSoundActor1;
    v3 = a1[27];
    v4 = a1[28];
    position.x = v3;
    position.y = v4;
    mapPositionToScreen(&v11, &position);
    v5 = "SE_EMY_KURIBO_L_DAMAGE_01";
  }
  else
  {
    v2 = Global_BasicSoundActor1;
    if ( v1 == 2 )
    {
      v6 = a1[27];
      v7 = a1[28];
      position.x = v6;
      position.y = v7;
      mapPositionToScreen(&v11, &position);
      v5 = "SE_EMY_KURIBO_L_DAMAGE_02";
    }
    else
    {
      v8 = a1[27];
      v9 = a1[28];
      position.x = v8;
      position.y = v9;
      mapPositionToScreen(&v11, &position);
      v5 = "SE_EMY_KURIBO_L_DAMAGE_03";
    }
  }
  return BasicSoundActor1_playSound(v2, v5, (int)&v11, 0);
}
