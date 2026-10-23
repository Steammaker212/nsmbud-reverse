/* sub_60006500
 * address: 0x60006500   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60006500(int a1, int a2)
{
  unsigned int v2; // r11
  unsigned int v3; // r5
  int Area; // r0
  unsigned int v5; // r7
  int v6; // r6
  int v7; // r5
  int v8; // r4
  unsigned __int16 *v9; // r8
  unsigned int v10; // r0
  Profile *v11; // r0
  bool v12; // zf
  float v13; // s2
  int v14; // r0
  unsigned int v16; // [sp+4h] [bp-4Ch]
  unsigned __int8 v18; // [sp+Fh] [bp-41h] BYREF
  float v19[16]; // [sp+10h] [bp-40h] BYREF

  v2 = FIELD_U8(LevelInfo_instance, 18);
  v3 = FIELD_U8(LevelInfo_instance, 20);
  Area = Level_getArea(Level_instance, v2);
  v5 = 0;
  v16 = v3;
  v6 = 0;
  if ( v3 < 0x40 )
    v5 = v3;
  v7 = *(_DWORD *)(Area + 4 * v5 + 184);
  v8 = *(_DWORD *)(Level_getArea(Level_instance, v2) + 4 * v5 + 440);
  if ( v8 )
  {
    v9 = (unsigned __int16 *)(v7 + 2);
    v6 = 0;
    do
    {
      v10 = *(v9 - 1);
      if ( v10 >> 2 <= 0xB4 )
      {
        v11 = Profile__get(SpriteToProfileTable[v10]);
        v12 = v11 == 0;
        if ( v11 )
          v12 = FIELD_U32(v11, 0xC) == 0;
        if ( !v12 && SpriteToProfileTable[*(v9 - 1)] == a2 )
        {
          v13 = -(float)v9[1];
          v19[0] = (float)*v9;
          v19[1] = v13;
          v19[2] = v19[0];
          v19[3] = v13;
          v14 = Level_getArea(Level_instance, v2);
          sub_607276B8(v14, &v18, v19);
          if ( v18 == v16 )
            ++v6;
        }
      }
      --v8;
      v9 += 12;
    }
    while ( v8 );
  }
  return v6;
}
