/* sub_60006384
 * address: 0x60006384   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60006384()
{
  unsigned int v0; // r8
  unsigned int v1; // r11
  int Area; // r0
  unsigned int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  unsigned __int16 *v7; // r6
  unsigned int spriteId; // r0
  Profile *v9; // r0
  ActorInfo *actorInfo; // r0
  bool v11; // zf
  float v12; // s0
  float v13; // s2
  int v14; // r0
  unsigned __int8 v16; // [sp+7h] [bp-41h] BYREF
  float v17[16]; // [sp+8h] [bp-40h] BYREF

  v0 = FIELD_U8(LevelInfo_instance, 18);
  v1 = FIELD_U8(LevelInfo_instance, 20);
  Area = Level_getArea(Level_instance, v0);
  v3 = 0;
  v4 = 0;
  if ( v1 < 0x40 )
    v3 = v1;
  v5 = *(_DWORD *)(Area + 4 * v3 + 184);
  v6 = *(_DWORD *)(Level_getArea(Level_instance, v0) + 4 * v3 + 440);
  if ( v6 )
  {
    v7 = (unsigned __int16 *)(v5 + 2);
    v4 = 0;
    do
    {
      spriteId = *(v7 - 1);
      if ( spriteId >> 2 <= 0xB4 )
      {
        v9 = Profile__get(SpriteToProfileTable[spriteId]);
        if ( v9 )
        {
          actorInfo = FIELD_U32(v9, 0xC);
          v11 = actorInfo == 0;
          if ( actorInfo )
            v11 = (FIELD_U32(actorInfo, 0x20) & 0x80) == 0;
          if ( !v11 && SpriteToProfileTable[*(v7 - 1)] != 425 )
          {
            v12 = (float)*v7;
            v13 = -(float)v7[1];
            v17[0] = v12;
            v17[1] = v13;
            v17[2] = v12;
            v17[3] = v13;
            v14 = Level_getArea(Level_instance, v0);
            sub_607276B8(v14, &v16, v17);
            if ( v16 == v1 )
              ++v4;
          }
        }
      }
      --v6;
      v7 += 12;
    }
    while ( v6 );
  }
  return v4;
}
