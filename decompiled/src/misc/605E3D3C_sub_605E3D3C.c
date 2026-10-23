/* sub_605E3D3C
 * address: 0x605E3D3C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E3D3C(int result, float *a2, float *a3, int a4)
{
  unsigned int v4; // lr
  bool v5; // zf
  int v6; // r9
  int v7; // r12
  unsigned int v8; // r6
  int i; // r5
  int v10; // r4
  int v11; // r4
  float v12; // s10
  float v13; // s2
  unsigned int v14; // r0
  int v15; // r1
  float v16; // s0
  float v17; // s2
  float v18; // s0
  float v19; // s2
  float v20; // s0

  v5 = a4 == 0;
  if ( a4 )
  {
    v4 = FIELD_U32(result, 6456);
    v5 = v4 == 0;
  }
  if ( !v5 )
  {
    v6 = FIELD_U32(result, 6452);
    v7 = FIELD_U32(result, 6444);
    v8 = 0;
    for ( i = -v7 - 20 * v6; ; i -= 20 )
    {
      v10 = FIELD_U32(result, 6448);
      if ( (int)(v6 + v8) < v10 )
        v10 = 0;
      v11 = -5 * v10;
      if ( *(_DWORD *)(4 * v11 - i) == a4 )
        break;
      if ( v4 == ++v8 )
        return result;
    }
    if ( v8 != -1 )
    {
      if ( v4 > v8 )
        v7 = 4 * v11 - i;
      v12 = FIELD_F32(result, 6232);
      v13 = FIELD_F32(result, 6216) + FIELD_F32(v7, 12);
      *a2 = FIELD_F32(result, 6200) + FIELD_F32(v7, 8);
      a2[1] = v13;
      a2[2] = v12 + 0.0;
      v14 = FIELD_U32(v7, 16);
      v15 = (v14 >> 20) & 0xFF0;
      result = v14 & 0xFFFFFF;
      v16 = FIELD_F32(v7, 8);
      v17 = FIELD_F32(v7, 12);
      if ( (float)((float)((float)(*(float *)((char *)sinLutTable + v15)
                                 + (float)(*(float *)((char *)&sinLutTable[1] + v15)
                                         * (float)((float)(unsigned int)result * 0.000000059605)))
                         * v17)
                 + (float)(v16
                         * (float)(*(float *)((char *)&sinLutTable[2] + v15)
                                 + (float)((float)((float)(unsigned int)result * 0.000000059605)
                                         * *(float *)((char *)&sinLutTable[3] + v15))))) <= 0.0 )
      {
        v19 = 0.00001;
      }
      else
      {
        v18 = sqrtf((float)(v17 * v17) + (float)(v16 * v16));
        if ( v18 <= 12.0 )
        {
          v19 = 0.00001;
          v20 = v18 * 0.1;
          if ( v20 >= 0.00001 )
          {
            v19 = v20;
            if ( v20 > 1.0 )
              v19 = 1.0;
          }
        }
        else
        {
          v19 = 1.0;
        }
      }
      *a3 = v19;
    }
  }
  return result;
}
