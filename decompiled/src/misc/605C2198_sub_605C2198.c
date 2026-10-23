/* sub_605C2198
 * address: 0x605C2198   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605C2198(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v2; // r2
  float *v3; // r5
  float *v4; // r4
  _DWORD *v5; // r6
  float v6; // s24
  int v7; // r1
  int v8; // r0
  float v9; // s21
  float v10; // s24
  int v11; // r7
  float *v12; // r6
  _DWORD *v13; // r10
  float v14; // s0
  unsigned int v15; // r0
  float v16; // s4
  float *v17; // r9
  float v18; // s0
  int v19; // r1
  _DWORD *v20; // r7
  int v21; // r4
  _DWORD *v23; // [sp+10h] [bp-70h]

  result = (_DWORD *)a1[43];
  if ( result )
  {
    v2 = (_DWORD *)a1[42];
    result = a1 + 41;
    if ( v2 != a1 + 41 )
    {
      v3 = (float *)(v2 - 923);
      do
      {
        v4 = v3 + 916;
        v5 = v2;
        v6 = v3[916];
        v23 = (_DWORD *)v2[1];
        if ( *((_BYTE *)v3 + 3656) )
        {
          ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v3, 0.0, v3[919], v3[920], v3[921]);
          if ( *v3 < 0.001 )
            *((_BYTE *)v3 + 3656) = 0;
        }
        else
        {
          v7 = -280;
          v8 = 0;
          do
          {
            if ( *((_BYTE *)v3 + v7 + 3652) == 2 )
              ++v8;
            if ( *((_BYTE *)v3 + v7 + 3653) == 2 )
              ++v8;
            v7 += 2;
          }
          while ( v7 );
          if ( (float)v8 >= v6 )
          {
            *v3 = 1.0;
            v20 = *((_DWORD **)v3 + 915);
            v21 = TileMgr_instance;
            sead__ListNode__erase(v20 + 5);
            --FIELD_U32(v21, 13024);
            *v20 = FIELD_U32(v21, 13028);
            FIELD_U32(v21, 13028) = v20;
            sead__ListNode__erase(v5);
            --a1[43];
            *v3 = *((float *)a1 + 44);
            a1[44] = v3;
            goto LABEL_32;
          }
        }
        if ( (float)(*(float *)((char *)sinLutTable + ((*((_DWORD *)v3 + 562) >> 20) & 0xFF0))
                   + (float)((float)((float)((_DWORD)v3[562] & 0xFFFFFF)
                                   * *(float *)((char *)&sinLutTable[1] + ((*((_DWORD *)v3 + 562) >> 20) & 0xFF0)))
                           * 0.000000059605)) > 0.99 )
          v3[1] = 1.0;
        if ( *v4 > 0.0 )
        {
          v9 = 1.0 / v6;
          v10 = 0.0;
          v11 = 0;
          v12 = v3 + 282;
          v13 = v3 + 843;
          while ( 1 )
          {
            v14 = powf(v10, 3.0);
            if ( *((_BYTE *)v13 + v11) == 1 )
              goto LABEL_23;
            if ( !*((_BYTE *)v13 + v11) && (float)(1.0 - *v3) > v10 )
              break;
LABEL_29:
            ++v11;
            v10 = v9 + v10;
            ++v12;
            if ( (float)v11 >= *v4 )
              goto LABEL_32;
          }
          *((_BYTE *)v13 + v11) = 1;
LABEL_23:
          v15 = *((_DWORD *)v12 + 280);
          v16 = 1.0 - (float)((float)((float)(v10 * -0.7) + 1.0) * (float)(1.0 - v14));
          v17 = v12 - 280;
          v18 = *v12
              * (float)((float)(1.0 - (float)(v16 * v16))
                      * (float)(*(float *)((char *)sinLutTable + ((v15 >> 20) & 0xFF0))
                              + (float)((float)((float)(v15 & 0xFFFFFF)
                                              * *(float *)((char *)&sinLutTable[1] + ((v15 >> 20) & 0xFF0)))
                                      * 0.000000059605)));
          *(v12 - 280) = v18;
          v19 = *((_DWORD *)v3 + 918);
          if ( v3[1] > 0.0 )
            v19 = -v19;
          *((_DWORD *)v12 + 280) = v15 + v19;
          if ( v18 < 0.0 )
          {
            *v17 = 0.0;
            v12[280] = 0.0;
            *((_BYTE *)v13 + v11) = 2;
          }
          ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v12, 0.0, 0.1, v3[922], 0.0001);
          if ( *v12 < 0.0001 )
          {
            *v17 = 0.0;
            v12[280] = 0.0;
            *((_BYTE *)v13 + v11) = 2;
          }
          goto LABEL_29;
        }
LABEL_32:
        v2 = v23;
        v3 = (float *)(v23 - 923);
        result = a1 - 882;
      }
      while ( v23 - 923 != a1 - 882 );
    }
  }
  return result;
}
