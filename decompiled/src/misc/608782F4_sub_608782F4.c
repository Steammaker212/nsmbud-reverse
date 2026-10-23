/* sub_608782F4
 * address: 0x608782F4   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608782F4(int result, int a2)
{
  int v2; // r5
  int v3; // r10
  int v4; // r9
  int v5; // r4
  int v6; // r11
  int v7; // r8
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r6
  int v12; // r7
  float v13; // s4
  float v14; // s6
  float v15; // s8
  __int64 v16; // d1
  float v17; // s10
  float v18; // s12
  float v19; // s14
  float v20; // s5

  v2 = result;
  v3 = FIELD_U16(result, 64);
  if ( FIELD_U16(result, 64) )
  {
    v4 = FIELD_U32(result, 48);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = FIELD_U32(v2, 56);
      result = *(_DWORD *)(v8 + 4 * v7) & 0x7FFF;
      if ( result != 0x7FFF )
      {
        v9 = v7;
        if ( (FIELD_U8(v2, 80) & 0x40) != 0 )
        {
          v10 = *(__int16 *)(*(_DWORD *)(FIELD_U32(v2, 88) + 56) + 2 * result);
          v9 = v7;
          if ( v10 >= 0 )
            v9 = (*(_DWORD *)(v8 + 4 * v10) >> 15) & 0x7FFF;
        }
        v11 = v4 + 48 * v9;
        v12 = FIELD_U32(v2, 72) + v6;
        sub_608726A8(v12, (int *)v11, (int *)(FIELD_U32(a2, 24) + 96 * result));
        result = FIELD_U8(v2, 80);
        if ( (result & 0x20) != 0 )
        {
          result = FIELD_U32(v12, 24) & 0xE020;
          if ( result == 32 )
          {
            v13 = FIELD_F32(v11, 16);
            v14 = FIELD_F32(v11, 20);
            v15 = FIELD_F32(v11, 24);
            result = FIELD_U32(v2, 84) + v5;
            v16 = FIELD_U64(result, 8);
            v17 = (float)((float)(*(float *)result * v14) + (float)(v15 * *((float *)&v16 + 1)))
                - (float)(v13 * FIELD_F32(result, 4));
            v18 = (float)((float)(*((float *)&v16 + 1) * v14) + (float)(v13 * *(float *)&v16))
                - (float)(v15 * *(float *)result);
            v19 = (float)((float)(FIELD_F32(result, 4) * v14) + (float)(v13 * *(float *)result))
                + (float)(v15 * *(float *)&v16);
            v20 = (float)((float)(*((float *)&v16 + 1) * v13) + (float)(v15 * FIELD_F32(result, 4)))
                - (float)(*(float *)&v16 * v14);
            FIELD_F32(v11, 16) = (float)((float)((float)(FIELD_F32(result, 4) * v17) - (float)(*(float *)&v16 * v18))
                                         + (float)(*(float *)result * v19))
                                 + (float)(*((float *)&v16 + 1) * v20);
            FIELD_F32(v11, 20) = (float)((float)((float)(v20 * FIELD_F32(result, 8))
                                                 - (float)(*(float *)result * v17))
                                         + (float)(v19 * FIELD_F32(result, 4)))
                                 + (float)(FIELD_F32(result, 12) * v18);
            FIELD_F32(v11, 24) = (float)((float)((float)(v18 * *(float *)result)
                                                 - (float)(v20 * FIELD_F32(result, 4)))
                                         + (float)(v19 * FIELD_F32(result, 8)))
                                 + (float)(v17 * FIELD_F32(result, 12));
          }
        }
      }
      ++v7;
      v5 += 16;
      v6 += 40;
    }
    while ( v3 != v7 );
  }
  return result;
}
