/* sub_60273034
 * address: 0x60273034   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60273034(int a1, float *a2, _DWORD *a3, float result)
{
  float v7; // s0
  int v8; // r1
  int v9; // r2
  float v10; // s18
  float v11; // s20
  float v12; // s16
  float v13; // s2
  float *v14; // r0
  float v15; // s0
  float v16; // s2
  float v17; // s12
  float v18; // s6
  float v19[3]; // [sp+0h] [bp-58h] BYREF
  float v20; // [sp+Ch] [bp-4Ch]
  float v21; // [sp+10h] [bp-48h]
  float v22; // [sp+14h] [bp-44h]
  float v23; // [sp+18h] [bp-40h]
  float v24; // [sp+1Ch] [bp-3Ch]
  float v25; // [sp+20h] [bp-38h]
  float v26; // [sp+24h] [bp-34h]
  float v27; // [sp+28h] [bp-30h]
  float v28; // [sp+2Ch] [bp-2Ch]

  if ( a2 )
  {
    if ( Player_setupWristNodes_79D5A0(a3, v19) != 1 )
    {
      v8 = FIELD_U32(a1, 112);
      v9 = FIELD_U32(a1, 116);
      *a2 = FIELD_F32(a1, 108);
      *((_DWORD *)a2 + 1) = v8;
      *((_DWORD *)a2 + 2) = v9;
      return result;
    }
    if ( a3[2853] == 3 )
    {
      v7 = 1.0 - sub_6079D45C(a3);
      if ( v7 >= 0.0 )
      {
        if ( v7 > 1.0 )
          v7 = 1.0;
      }
      else
      {
        v7 = 0.0;
      }
      v13 = *(float *)((char *)sinLutTable + ((a3[39] >> 20) & 0xFF0))
          + (float)((float)((float)(a3[39] & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((a3[39] >> 20) & 0xFF0)))
                  * 0.000000059605);
      v12 = (float)(v7 * *(float *)&dword_60C8EB2C) * v13;
      v11 = (float)(v7 * *(float *)&dword_60C8EB28) * v13;
      v10 = (float)(v7 * *(float *)&dword_60C8EB24) * v13;
    }
    else
    {
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
    }
    if ( a3[330] == 5 )
    {
      v12 = v12 + -2.0;
      v11 = v11 + -2.0;
      v10 = v10 + 0.0;
    }
    if ( sub_6075EDF8(a3) == 1 )
    {
      v14 = (float *)&unk_60B0AFFC;
    }
    else
    {
      if ( a3[330] != 9 )
      {
LABEL_18:
        v15 = v11 + FIELD_F32(a1, 6304);
        v16 = v10 + FIELD_F32(a1, 6300);
        v17 = v12 + FIELD_F32(a1, 6308);
        v20 = v20 + (float)((float)((float)(v15 * v19[1]) + (float)(v16 * v19[0])) + (float)(v17 * v19[2]));
        v24 = v24 + (float)((float)((float)(v15 * v22) + (float)(v16 * v21)) + (float)(v17 * v23));
        v18 = v24;
        result = v28 + (float)((float)((float)(v15 * v26) + (float)(v16 * v25)) + (float)(v17 * v27));
        *a2 = v20;
        a2[1] = v18;
        a2[2] = result;
        return result;
      }
      v14 = (float *)&unk_60B0B050;
    }
    v12 = v12 + v14[2];
    v11 = v11 + v14[1];
    v10 = v10 + *v14;
    goto LABEL_18;
  }
  return result;
}
