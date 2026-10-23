/* sub_6068E0F4
 * address: 0x6068E0F4   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6068E0F4(int a1)
{
  unsigned __int8 *v1; // r11
  unsigned int result; // r0
  unsigned int *v4; // r6
  _BYTE *v5; // r7
  _BYTE *v6; // r9
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  float v10; // s0
  float v11; // s2
  unsigned int v12; // r1
  float *v13; // r2
  float v14; // s4
  float v15; // s10
  float v16; // s6
  float v17; // s0
  bool v18; // zf
  float *v19; // [sp+30h] [bp-50h]
  float *v20; // [sp+34h] [bp-4Ch]
  float v21[4]; // [sp+38h] [bp-48h] BYREF
  char v22; // [sp+48h] [bp-38h]
  char v23; // [sp+49h] [bp-37h]
  char v24; // [sp+4Ah] [bp-36h]
  char v25; // [sp+4Bh] [bp-35h]
  char v26; // [sp+4Ch] [bp-34h]
  char v27; // [sp+4Dh] [bp-33h]
  char v28; // [sp+4Eh] [bp-32h]

  result = 6584;
  v4 = *(unsigned int **)(a1 + 6584);
  if ( v4 )
  {
    v20 = (float *)(a1 + 6804);
    v19 = (float *)(a1 + 6800);
    v5 = (_BYTE *)(a1 + 6833);
    v6 = (_BYTE *)(a1 + 6825);
    do
    {
      result = *v4;
      v7 = *v4 == 0;
      if ( *v4 )
      {
        v1 = *(unsigned __int8 **)(result + 2196);
        v7 = v1 == 0;
      }
      if ( !v7 )
      {
        result = v1[533];
        if ( result == 1 )
        {
          result = v1[84];
          if ( result <= 3 )
          {
            v8 = (unsigned __int8)*v6;
            v9 = v8 == 0;
            if ( *v6 )
              v9 = (v1[1212] & 0x40) == 0;
            if ( !v9 )
            {
              v10 = FIELD_F32(a1, 112);
              v11 = FIELD_F32(a1, 108);
              v21[2] = FIELD_F32(a1, 116);
              v12 = FIELD_U32(a1, 164);
              v13 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
              v14 = (float)(v12 & 0xFFFFFF) * 0.000000059605;
              v15 = v13[2] + (float)(v14 * v13[3]);
              v16 = *v13 + (float)(v13[1] * v14);
              v17 = v10 + (float)((float)(*v20 * v15) + (float)(v16 * *v19));
              v21[0] = v11 + (float)((float)(*v19 * v15) - (float)(v16 * *v20));
              v21[1] = v17;
              LODWORD(v21[3]) = 1;
              v22 = v8;
              v28 = 0;
              v27 = 0;
              v26 = 0;
              v25 = 0;
              v24 = 0;
              v23 = 0;
              sub_60583000(dword_60CAF15C, (int)v21, 0);
              *v6 = 0;
            }
            result = (unsigned __int8)*v5;
            if ( result == 1 )
            {
              result = v1[1210];
              if ( (result & 1) != 0 )
              {
                *v5 = 2;
                result = FIELD_U8(dword_60CC6D8C, 17);
                v18 = result == 0;
                if ( FIELD_U8(dword_60CC6D8C, 17) )
                {
                  result = FIELD_U8(a1, 26);
                  v18 = (result & 0x10) == 0;
                }
                if ( !v18 )
                {
                  result = sub_603FD768(
                             dword_60C99DF4,
                             FIELD_U8(LevelInfo_instance, 18),
                             1,
                             FIELD_F32(a1, 6196),
                             FIELD_F32(a1, 6200));
                  if ( FIELD_U8(a1, 539) )
                    result = EventMgr_set(
                               EventMgr__instance,
                               (unsigned __int8)(FIELD_U8(a1, 539) - 1),
                               0,
                               1,
                               0,
                               0,
                               0,
                               0);
                }
              }
            }
          }
        }
      }
      v4 = (unsigned int *)v4[1];
    }
    while ( v4 );
  }
  return result;
}
