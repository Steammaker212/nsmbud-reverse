/* sub_60005B98
 * address: 0x60005B98   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60005B98(int a1)
{
  unsigned int v2; // r1
  int v3; // r4
  int v4; // r6
  float v5; // s0
  int v6; // r8
  int result; // r0
  bool v8; // zf
  _WORD *v9; // r4
  __int16 *v10; // r9
  unsigned __int8 *v11; // r6
  int v12; // r11
  unsigned int v13; // r5
  unsigned int v14; // r7
  int Area; // r0
  int v16; // r10
  int v17; // t1
  int v18; // r0
  bool v19; // zf
  unsigned int v20; // r1
  int v21; // r1
  _WORD *v22; // [sp+10h] [bp-60h]
  unsigned __int8 *v23; // [sp+14h] [bp-5Ch]
  unsigned __int8 *v24; // [sp+1Ch] [bp-54h]
  int v25; // [sp+20h] [bp-50h]
  int v26; // [sp+24h] [bp-4Ch]
  int v27; // [sp+28h] [bp-48h]
  _BYTE *v28; // [sp+2Ch] [bp-44h]
  _BYTE *v29; // [sp+30h] [bp-40h]
  unsigned int v30; // [sp+38h] [bp-38h]
  float v31[2]; // [sp+3Ch] [bp-34h] BYREF
  float v32; // [sp+44h] [bp-2Ch]
  float v33; // [sp+48h] [bp-28h]

  v2 = FIELD_U8(LevelInfo_instance, 17);
  v30 = FIELD_U8(LevelInfo_instance, 18);
  v3 = FIELD_U8(LevelInfo_instance, 20);
  if ( v2 > 0x39 )
    v2 = 0;
  v4 = sub_603F7EFC(dword_60C99DC8, v2);
  v6 = 0;
  v27 = a1;
  v26 = v3;
  v25 = v4;
  v23 = (unsigned __int8 *)(a1 + 4961);
  v24 = (unsigned __int8 *)(a1 + 4960);
  v22 = (_WORD *)(a1 + 1056);
  do
  {
    result = *(unsigned __int8 *)(v4 + 8 * v6);
    if ( result != 255 )
    {
      v8 = *(_BYTE *)(a1 + v6 + 3458) == 0;
      if ( !*(_BYTE *)(a1 + v6 + 3458) )
        v8 = v30 == result;
      if ( v8 )
      {
        result = v4 + 8 * v6;
        if ( v3 == FIELD_U8(result, 1) )
        {
          v9 = (_WORD *)(result + 6);
          v10 = (__int16 *)(result + 4);
          v29 = (_BYTE *)(a1 + v6 + 3458);
          v28 = (_BYTE *)(result + 1);
          if ( *v24 == 255 )
          {
            v16 = 1;
          }
          else
          {
            v11 = v23;
            v12 = 1;
            while ( 1 )
            {
              v31[0] = 3.4028e38;
              v31[1] = 3.4028e38;
              v32 = -3.4028e38;
              v33 = -3.4028e38;
              v13 = (unsigned __int16)*v10;
              v14 = (unsigned __int16)*v9;
              Area = Level_getArea(Level_instance, v30);
              LevelArea_getLocation(Area, v31, *(v11 - 1));
              v5 = (float)v14;
              if ( v31[0] <= (float)v13 && (float)v13 <= v32 )
              {
                v5 = -v5;
                if ( v33 >= v5 )
                  break;
              }
              v16 = 1;
              if ( v12 <= 255 )
              {
                v17 = *v11++;
                ++v12;
                if ( v17 != 255 )
                  continue;
              }
              goto LABEL_22;
            }
            v16 = 0;
          }
LABEL_22:
          v18 = sub_60715E94(TileMgr_instance, (unsigned __int16)*v10, (unsigned __int16)*v9, 0, v5);
          v19 = v16 == 1;
          if ( v16 == 1 )
            v19 = v18 == 0;
          if ( v19 )
          {
            v4 = v25;
            TileMgr_setTileArea(TileMgr_instance, *v10, (unsigned __int16)*v9, *(unsigned __int8 *)(v25 + 8 * v6), 0, 4);
            result = 1;
            *v29 = 1;
            a1 = v27;
          }
          else
          {
            v4 = v25;
            a1 = v27;
            v20 = (unsigned __int16)*v22;
            if ( v20 >= 0x12C )
              v20 = 0;
            v21 = v27 + 8 * v20;
            FIELD_U8(v21, 1058) = *(_BYTE *)(v25 + 8 * v6);
            FIELD_U8(v21, 1059) = *v28;
            FIELD_U16(v21, 1062) = *v10;
            FIELD_U16(v21, 1064) = *v9;
            *v29 = 1;
            result = (unsigned __int16)*v22 + 1;
            *v22 = result;
          }
          v3 = v26;
        }
      }
    }
    ++v6;
  }
  while ( v6 != 300 );
  return result;
}
