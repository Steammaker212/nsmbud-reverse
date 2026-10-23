/* sub_60006668
 * address: 0x60006668   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60006668()
{
  unsigned int v0; // r9
  unsigned int v1; // r11
  int Area; // r0
  unsigned int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  _DWORD *v7; // r6
  unsigned int v8; // r0
  Profile *v9; // r0
  ActorInfo *actorInfo; // r0
  bool v11; // zf
  float v12; // s2
  int v13; // r0
  unsigned __int8 v15; // [sp+7h] [bp-41h] BYREF
  float v16[16]; // [sp+8h] [bp-40h] BYREF

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
    v7 = (_DWORD *)(v5 + 12);
    v4 = 0;
    do
    {
      v8 = *((unsigned __int16 *)v7 - 6);
      if ( v8 >> 2 <= 0xB4 )
      {
        v9 = Profile__get(SpriteToProfileTable[v8]);
        if ( v9 )
        {
          actorInfo = FIELD_U32(v9, 0xC);
          v11 = actorInfo == 0;
          if ( actorInfo )
            v11 = (FIELD_U32(actorInfo, 0x20) & 0x100) == 0;
          if ( !v11 && (*v7 & 0x1000000F) == 0 )
          {
            v12 = -(float)*((unsigned __int16 *)v7 - 4);
            v16[0] = (float)*((unsigned __int16 *)v7 - 5);
            v16[1] = v12;
            v16[2] = v16[0];
            v16[3] = v12;
            v13 = Level_getArea(Level_instance, v0);
            sub_607276B8(v13, &v15, v16);
            if ( v15 == v1 )
              ++v4;
          }
        }
      }
      --v6;
      v7 += 6;
    }
    while ( v6 );
  }
  return v4;
}
