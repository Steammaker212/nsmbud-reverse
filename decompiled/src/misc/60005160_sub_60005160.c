/* sub_60005160
 * address: 0x60005160   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60005160(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  int v4; // r7
  float v5; // s0
  int v6; // r8
  int result; // r0
  _WORD *v8; // r4
  __int16 *v9; // r6
  unsigned __int8 *v10; // r9
  int v11; // r10
  unsigned int v12; // r7
  unsigned int v13; // r5
  int Area; // r0
  int v15; // r11
  int v16; // t1
  int v17; // r0
  bool v18; // zf
  unsigned int v19; // r1
  int v20; // r1
  _WORD *v21; // [sp+Ch] [bp-5Ch]
  unsigned __int8 *v22; // [sp+10h] [bp-58h]
  int v23; // [sp+14h] [bp-54h]
  int v24; // [sp+18h] [bp-50h]
  int v25; // [sp+1Ch] [bp-4Ch]
  unsigned __int8 *v26; // [sp+24h] [bp-44h]
  _BYTE *v27; // [sp+28h] [bp-40h]
  unsigned int v28; // [sp+30h] [bp-38h]
  float v29[2]; // [sp+34h] [bp-34h] BYREF
  float v30; // [sp+3Ch] [bp-2Ch]
  float v31; // [sp+40h] [bp-28h]

  v2 = FIELD_U8(LevelInfo_instance, 17);
  v28 = FIELD_U8(LevelInfo_instance, 18);
  v3 = FIELD_U8(LevelInfo_instance, 20);
  if ( v2 > 0x39 )
    v2 = 0;
  v4 = sub_603F7EFC(dword_60C99DC8, v2);
  v6 = 0;
  v25 = a1;
  v24 = v3;
  v23 = v4;
  v22 = (unsigned __int8 *)(a1 + 4961);
  v26 = (unsigned __int8 *)(a1 + 4960);
  v21 = (_WORD *)(a1 + 1056);
  do
  {
    result = *(unsigned __int8 *)(v4 + 8 * v6);
    if ( result != 255 && v28 == result )
    {
      result = v4 + 8 * v6;
      if ( v3 == FIELD_U8(result, 1) )
      {
        v8 = (_WORD *)(result + 6);
        v9 = (__int16 *)(result + 4);
        v27 = (_BYTE *)(result + 1);
        if ( *v26 == 255 )
        {
          v15 = 1;
        }
        else
        {
          v10 = v22;
          v11 = 1;
          while ( 1 )
          {
            v29[0] = 3.4028e38;
            v29[1] = 3.4028e38;
            v30 = -3.4028e38;
            v31 = -3.4028e38;
            v12 = (unsigned __int16)*v9;
            v13 = (unsigned __int16)*v8;
            Area = Level_getArea(Level_instance, v28);
            LevelArea_getLocation(Area, v29, *(v10 - 1));
            v5 = (float)v13;
            if ( v29[0] <= (float)v12 && (float)v12 <= v30 )
            {
              v5 = -v5;
              if ( v31 >= v5 )
                break;
            }
            v15 = 1;
            if ( v11 <= 255 )
            {
              v16 = *v10++;
              ++v11;
              if ( v16 != 255 )
                continue;
            }
            goto LABEL_19;
          }
          v15 = 0;
        }
LABEL_19:
        v17 = sub_60715E94(TileMgr_instance, (unsigned __int16)*v9, (unsigned __int16)*v8, 0, v5);
        v18 = v15 == 1;
        if ( v15 == 1 )
          v18 = v17 == 0;
        if ( v18 )
        {
          v4 = v23;
          TileMgr_setTileArea(TileMgr_instance, *v9, (unsigned __int16)*v8, *(unsigned __int8 *)(v23 + 8 * v6), 0, 4);
          result = v25 + v6;
          *(_BYTE *)(v25 + v6 + 3458) = 1;
        }
        else
        {
          v4 = v23;
          v19 = (unsigned __int16)*v21;
          if ( v19 >= 0x12C )
            v19 = 0;
          v20 = v25 + 8 * v19;
          FIELD_U8(v20, 1058) = *(_BYTE *)(v23 + 8 * v6);
          FIELD_U8(v20, 1059) = *v27;
          FIELD_U16(v20, 1062) = *v9;
          FIELD_U16(v20, 1064) = *v8;
          *(_BYTE *)(v25 + v6 + 3458) = 1;
          result = (unsigned __int16)*v21 + 1;
          *v21 = result;
        }
        v3 = v24;
      }
    }
    ++v6;
  }
  while ( v6 != 300 );
  return result;
}
