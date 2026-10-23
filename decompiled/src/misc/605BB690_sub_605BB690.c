/* sub_605BB690
 * address: 0x605BB690   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605BB690(int a1, float *a2)
{
  unsigned int v4; // r7
  unsigned int v5; // r8
  unsigned int v6; // r9
  float v7; // s22
  float v8; // s24
  unsigned int v9; // r6
  unsigned int v10; // r5
  unsigned int v11; // r0
  float v12; // r1
  float result; // s0
  float v14; // [sp+0h] [bp-80h] BYREF
  float v15; // [sp+4h] [bp-7Ch]
  float v16; // [sp+8h] [bp-78h]
  float v17; // [sp+Ch] [bp-74h]
  float v18; // [sp+10h] [bp-70h]
  float v19; // [sp+14h] [bp-6Ch]
  float v20; // [sp+18h] [bp-68h]
  float v21; // [sp+1Ch] [bp-64h]
  float v22; // [sp+20h] [bp-60h]
  int v23; // [sp+24h] [bp-5Ch]
  float v24; // [sp+28h] [bp-58h]
  float v25; // [sp+2Ch] [bp-54h]

  if ( FIELD_U32(a1, 320) )
  {
    v4 = FIELD_U8(a1, 1348);
    v5 = FIELD_U8(a1, 1349);
    v6 = 0;
    v7 = 0.0;
    do
    {
      v8 = 0.0;
      v9 = 0;
      v10 = 0;
      if ( v6 < 0x10 )
        v9 = v6;
      do
      {
        v14 = *a2;
        v15 = a2[1];
        v16 = a2[2];
        v17 = a2[3] + (float)((float)((float)(v7 * v15) + (float)(v8 * v14)) + (float)(v16 * 0.0));
        v18 = a2[4];
        v19 = a2[5];
        v20 = a2[6];
        v21 = a2[7] + (float)((float)((float)(v7 * v19) + (float)(v8 * v18)) + (float)(v20 * 0.0));
        v22 = a2[8];
        v11 = 0;
        v12 = a2[9];
        if ( v10 < 0x10 )
          v11 = v10;
        v23 = *((_DWORD *)a2 + 9);
        v24 = a2[10];
        v25 = a2[11] + (float)((float)((float)(v7 * v12) + (float)(v8 * v22)) + (float)(v24 * 0.0));
        sub_605BB9D8(a1 + (v9 << 6) + 4 * v11 + 324, &v14);
        v8 = v8 + 16.0;
        ++v10;
      }
      while ( v10 < v4 );
      v7 = v7 + -16.0;
      ++v6;
    }
    while ( v6 < v5 );
  }
  return result;
}
