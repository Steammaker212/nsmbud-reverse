/* sub_6000C91C
 * address: 0x6000C91C   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000C91C(int a1)
{
  int v2; // r7
  float v3; // r8
  float *v4; // r6
  float v5; // s22
  float v6; // r2
  float v7; // r11
  float v8; // s0
  int result; // r0
  float i; // s0
  float v11; // s0
  float v12; // s0
  float v13; // s2
  int v14; // r10
  float *j; // r7
  float v16; // s0
  int v17; // r1
  float v18; // [sp+8h] [bp-70h]
  char v19; // [sp+Ch] [bp-6Ch]
  float *v20; // [sp+14h] [bp-64h]

  v2 = 1;
  v3 = FIELD_F32(a1, 100);
  v4 = (float *)(a1 + 40);
  v5 = v3;
  v19 = FIELD_U8(a1, 142);
  v6 = FIELD_F32(a1, 136);
  v7 = FIELD_F32(a1, 104);
  v8 = v6 + v3;
  FIELD_F32(a1, 100) = v6 + v3;
  v18 = v6;
  FIELD_F32(a1, 92) = v6;
  FIELD_U32(a1, 96) = 0;
  v20 = (float *)(a1 + 100);
  while ( (sub_607160F4(
             TileMgr_instance,
             (int)(float)((float)(int)(float)((float)(v8 + *(v4 - 1)) * 0.0625) * 16.0),
             (unsigned __int16)(int)(float)((float)(int)(float)((float)(FIELD_F32(a1, 104) + *v4) * 0.0625) * -16.0),
             FIELD_U8(a1, 141),
             1)
         & 0xFFFFFF) != 0x200001 )
  {
    if ( v2 > 6 )
    {
      result = (int)v20;
      v5 = *v20;
      goto LABEL_20;
    }
    v8 = FIELD_F32(a1, 100);
    v4 += 2;
    ++v2;
  }
  result = FIELD_U8(a1, 140);
  if ( !FIELD_U8(a1, 140) )
  {
    FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
    result = FIELD_U8(a1, 142) ^ 1;
    FIELD_U8(a1, 142) = result;
  }
  FIELD_U8(a1, 143) = 1;
  FIELD_F32(a1, 100) = v3;
  FIELD_F32(a1, 104) = v7;
  for ( i = FIELD_F32(a1, 92); i <= -0.1 || i >= 0.1; i = FIELD_F32(a1, 92) )
  {
    v11 = i * 0.5;
    FIELD_F32(a1, 92) = v11;
    FIELD_F32(a1, 136) = v18;
    FIELD_U8(a1, 142) = v19;
LABEL_11:
    v12 = v11 + v5;
    v13 = v7;
    v14 = 1;
    *v20 = v12;
    for ( j = (float *)(a1 + 40);
          (sub_607160F4(
             TileMgr_instance,
             (int)(float)((float)(int)(float)((float)(v12 + *(j - 1)) * 0.0625) * 16.0),
             (unsigned __int16)(int)(float)((float)(int)(float)((float)(v13 + *j) * 0.0625) * -16.0),
             FIELD_U8(a1, 141),
             1)
         & 0xFFFFFF) != 0x200001;
          j += 2 )
    {
      if ( v14 > 6 )
      {
        v3 = FIELD_F32(a1, 100);
        v11 = FIELD_F32(a1, 92);
        v7 = FIELD_F32(a1, 104);
        v5 = v3;
        goto LABEL_11;
      }
      v12 = FIELD_F32(a1, 100);
      v13 = FIELD_F32(a1, 104);
      ++v14;
    }
    result = FIELD_U8(a1, 140);
    if ( !FIELD_U8(a1, 140) )
    {
      FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
      result = FIELD_U8(a1, 142) ^ 1;
      FIELD_U8(a1, 142) = result;
    }
    FIELD_U8(a1, 143) = 1;
    FIELD_F32(a1, 100) = v3;
    FIELD_F32(a1, 104) = v7;
    v5 = v3;
  }
LABEL_20:
  v16 = FIELD_F32(a1, 116);
  v17 = a1 + 116;
  if ( v5 < v16 )
    return sub_60012FA4(a1, v17, 0);
  if ( v5 >= (float)(v16 + 16.0) )
    return sub_600130B4(a1, v17, 0);
  return result;
}
