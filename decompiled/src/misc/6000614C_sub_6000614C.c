/* sub_6000614C
 * address: 0x6000614C   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000614C(int a1, int a2, int a3)
{
  unsigned int v5; // r7
  unsigned int v6; // r4
  int Area; // r0
  int v8; // r5
  int v9; // r9
  int v10; // r4
  int v11; // r0
  _DWORD *v12; // r6
  unsigned int v13; // r0
  Profile *v14; // r0
  bool v15; // zf
  __int16 id; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r0
  float v20; // s0
  float v21; // s8
  float v23; // [sp+8h] [bp-48h] BYREF
  float v24; // [sp+Ch] [bp-44h]
  float v25; // [sp+10h] [bp-40h]
  float v26; // [sp+14h] [bp-3Ch]

  v5 = FIELD_U8(LevelInfo_instance, 18);
  v6 = FIELD_U8(LevelInfo_instance, 20);
  Area = Level_getArea(Level_instance, v5);
  v8 = 0;
  if ( v6 >= 0x40 )
    v6 = 0;
  v9 = *(_DWORD *)(Area + 4 * v6 + 184);
  v10 = *(_DWORD *)(Level_getArea(Level_instance, v5) + 4 * v6 + 440);
  v23 = 3.4028e38;
  v24 = 3.4028e38;
  v25 = -3.4028e38;
  v26 = -3.4028e38;
  v11 = Level_getArea(Level_instance, v5);
  LevelArea_getLocation(v11, &v23, a2);
  if ( v10 )
  {
    v12 = (_DWORD *)(v9 + 12);
    v8 = 0;
    while ( 1 )
    {
      v13 = *((unsigned __int16 *)v12 - 6);
      if ( v13 >> 2 > 0xB4 )
        goto LABEL_29;
      v14 = Profile__get(SpriteToProfileTable[v13]);
      v15 = v14 == 0;
      if ( v14 )
      {
        v14 = (Profile *)FIELD_U32(v14, 0xC);
        v15 = v14 == 0;
      }
      if ( v15 )
        goto LABEL_29;
      id = v14[1].id;
      if ( (id & 0x80) != 0 )
        break;
      if ( (id & 0x100) != 0 && (*v12 & 0x1000000F) == 0 && (a3 & 4) == 0 )
        goto LABEL_21;
LABEL_29:
      --v10;
      v12 += 6;
      if ( !v10 )
        return v8;
    }
    v17 = SpriteToProfileTable[*((unsigned __int16 *)v12 - 6)];
    if ( v17 == 409 )
      goto LABEL_29;
    v18 = 1;
    if ( v17 != 425 )
    {
      v18 = 2;
      if ( v17 == 414 )
        v18 = 8;
      if ( v17 == 411 )
        v18 = 8;
    }
    if ( (v18 & a3) != 0 )
      goto LABEL_29;
LABEL_21:
    v19 = v8;
    v20 = -8.0 - (float)*((unsigned __int16 *)v12 - 4);
    v21 = (float)*((unsigned __int16 *)v12 - 5) + 8.0;
    if ( v20 <= v26 )
      v19 = v8 + 1;
    if ( v24 > v20 )
      v19 = v8;
    if ( v21 > v25 )
      v19 = v8;
    if ( v23 <= v21 )
      v8 = v19;
    goto LABEL_29;
  }
  return v8;
}
