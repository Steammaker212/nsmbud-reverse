/* sub_6014D680
 * address: 0x6014D680   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014D680(int a1)
{
  float32x2_t v1; // d8
  int result; // r0
  bool v4; // zf
  float *v5; // r1
  float v6; // s5
  float v7; // s2
  float32x2_t v8; // d6
  float v9; // s6
  float v10; // s6
  float v11; // s2
  float v12; // s8
  float v13; // s18
  int v14; // r6
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r3
  bool v19; // vf
  int v20; // r0
  float v21; // s2
  int v22; // r1
  int v23; // r2
  float v24; // s0
  TileCheck_Result resultStruct; // [sp+8h] [bp-58h] BYREF
  Vec2 positionOffset; // [sp+34h] [bp-2Ch] BYREF
  Vec2 position; // [sp+3Ch] [bp-24h] BYREF
  float v28; // [sp+44h] [bp-1Ch] BYREF
  float v29; // [sp+48h] [bp-18h]
  float v30; // [sp+4Ch] [bp-14h] BYREF
  float v31; // [sp+50h] [bp-10h]
  __int16 v32; // [sp+54h] [bp-Ch] BYREF
  char v33; // [sp+56h] [bp-Ah]
  char v34; // [sp+57h] [bp-9h]
  int v35; // [sp+58h] [bp-8h]
  int v36; // [sp+5Ch] [bp-4h]

  result = FIELD_U8(a1, 2352);
  v4 = result == 0;
  if ( result )
  {
    result = FIELD_U8(a1, 2232);
    v4 = (result & 1) == 0;
  }
  if ( !v4 )
  {
    result = FIELD_U32(a1, 2196);
    if ( FIELD_F32(result, 124) <= 0.0 )
    {
      result = FIELD_U32(a1, 2552);
      if ( (result & 0x800001) == 0 )
      {
        sub_60153134(a1 + 2440, (int)&v30);
        sub_60153134(a1 + 2488, (int)&v28);
        v1.n64_u32[0] = 6.0;
        result = FIELD_U32(a1, 2204);
        v5 = *(float **)(a1 + 2208);
        v6 = v5[1];
        v7 = (float)(FIELD_F32(a1, 2444) - FIELD_F32(a1, 2440)) * 0.5;
        position.x = *(float *)result + v30;
        position.y = v6 + v29;
        v8.n64_f32[0] = (float)(v7
                              * (float)((float)((float)(0.0085513 * 0.77778) + 0.93299)
                                      / (float)((float)(-0.023005 * 0.77778) + 0.3599)))
                      + 0.01;
        v9 = FIELD_F32(result, 4);
        positionOffset.x = position.x;
        v10 = v9 + v31;
        LODWORD(v11) = vmax_f32(v8, v1).n64_u32[0];
        positionOffset.y = v10;
        if ( (float)(v6 + v29) >= v10 )
        {
          v12 = v10;
          v10 = v6 + v29;
        }
        else
        {
          v12 = v6 + v29;
          position.y = v10;
          positionOffset.y = v6 + v29;
        }
        positionOffset.y = v12 - v11;
        position.y = v10 + 7.0;
        v13 = (float)(*(float *)result + v30) - (float)(*v5 + v28);
        if ( v13 != 0.0 )
        {
          v14 = 0;
          resultStruct.field_C = 0;
          resultStruct.field_10 = 0;
          v32 = 0;
          v33 = **(_BYTE **)(a1 + 2212);
          v34 = **(_BYTE **)(a1 + 2216);
          v35 = 0;
          v36 = a1 + 80;
          sub_6015D144((TileCheck *)(a1 + 4), (int)&v32);
          v15 = FIELD_U32(a1, 2196);
          FIELD_U32(a1, 12) = v15;
          FIELD_U32(a1, 28) = 0;
          FIELD_U32(a1, 32) = 0;
          v16 = FIELD_U32(a1, 24);
          if ( v16 >= 1 )
          {
            FIELD_U32(a1, 32) = 1;
            **(_DWORD **)(a1 + 20) = v15;
            v16 = FIELD_U32(a1, 24);
            v14 = FIELD_U32(a1, 32);
          }
          if ( v14 < v16 )
          {
            v17 = FIELD_U32(a1, 2200);
            FIELD_U32(a1, 32) = v14 + 1;
            v18 = FIELD_U32(a1, 28) + v14;
            v19 = __OFSUB__(v18, v16);
            v20 = v18 - v16;
            if ( v20 < 0 != v19 )
              v20 = FIELD_U32(a1, 28) + v14;
            *(_DWORD *)(FIELD_U32(a1, 20) + 4 * v20) = v17;
          }
          FIELD_U16(a1, 4) = 257;
          result = TileCheck_check((TileCheck *)(a1 + 4), &resultStruct, &position, &positionOffset, 8);
          if ( result == 1 )
          {
            result = FIELD_U32(a1, 2208);
            v21 = (float)(FIELD_F32(result, 4) + v29) - resultStruct.field_8;
            if ( v21 <= 0.0 )
              v21 = -v21;
            if ( v21 <= 6.0 )
            {
              v22 = 0;
              if ( (FIELD_U8(a1, 2232) & 1) != 0 )
              {
                v23 = FIELD_U32(a1, 2588);
                if ( v23 <= 5 )
                  v22 = *(_DWORD *)(a1 + 56 * v23 + 4952);
              }
              result = resultStruct.field_C - v22;
              if ( v13 < 0.0 )
                result = v22 - resultStruct.field_C;
              if ( result < 0 )
              {
                result = a1 + 2328;
                v24 = (float)(resultStruct.field_8 + -1.0) - (float)(*(float *)(FIELD_U32(a1, 2204) + 4) + v31);
                FIELD_F32(a1, 2328) = v24;
                if ( v24 > 0.0 )
                  *(_DWORD *)result = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
