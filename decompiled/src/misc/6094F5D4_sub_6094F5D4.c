/* sub_6094F5D4
 * address: 0x6094F5D4   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094F5D4(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // r9
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r10
  float v11; // s18
  float v12; // s30
  float v13; // s17
  unsigned int v14; // r7
  float *v15; // r6
  float v16; // s19
  float v17; // s0
  float v18; // s0
  float v19; // s0
  unsigned int v20; // r6
  int v21; // r11
  float v22; // s19
  float v23; // s0
  float v24; // s0
  float v25; // s0
  unsigned int v26; // r4
  int v27; // r6
  float v28; // s24
  float v29; // s0
  _DWORD *v30; // r3
  unsigned int v32; // [sp+4h] [bp-8Ch]
  _DWORD *v33; // [sp+8h] [bp-88h]
  int v35; // [sp+10h] [bp-80h]
  _DWORD v36[29]; // [sp+1Ch] [bp-74h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = *a2;
  if ( v9 )
    v8 = dword_60CC73E8(v9);
  v10 = 0;
  v32 = a4 + 2;
  v33 = a2;
  v11 = (float)a3;
  v35 = v8 + a2[1];
  do
  {
    if ( a3 )
    {
      v12 = 0.5 - (float)((float)v10 / (float)a4);
      v13 = (float)(0.5 - v12) * 0.5;
      if ( v10 )
      {
        v14 = 0;
        v15 = (float *)(v35 + 28 + 32 * v7);
        do
        {
          v16 = v13 * cosf((float)((float)v14 * 6.2832) / v11);
          v17 = sinf((float)((float)v14 * 6.2832) / v11);
          *(v15 - 7) = v16;
          *(v15 - 6) = v12;
          *(v15 - 5) = v13 * v17;
          *(v15 - 1) = v16 + 0.5;
          *v15 = (float)(v13 * v17) + 0.5;
          *(v15 - 4) = v16;
          *(v15 - 3) = 0.5;
          *(v15 - 2) = v13 * v17;
          v18 = sqrtf((float)((float)(v16 * v16) + 0.25) + (float)((float)(v13 * v17) * (float)(v13 * v17)));
          if ( v18 > 0.0 )
          {
            v19 = 1.0 / v18;
            *(v15 - 4) = v19 * *(v15 - 4);
            *(v15 - 3) = v19 * *(v15 - 3);
            *(v15 - 2) = v19 * *(v15 - 2);
          }
          ++v14;
          v15 += 8;
        }
        while ( a3 != v14 );
      }
      else
      {
        v20 = 0;
        v21 = v35 + 16 + 32 * v7;
        do
        {
          v22 = v13 * cosf((float)((float)((float)v20 + 0.5) * 6.2832) / v11);
          v23 = sinf((float)((float)((float)v20 + 0.5) * 6.2832) / v11);
          *(float *)(v21 - 16) = v22;
          *(float *)(v21 - 12) = v12;
          *(float *)(v21 - 8) = v13 * v23;
          FIELD_F32(v21, 8) = v22 + 0.5;
          FIELD_F32(v21, 12) = (float)(v13 * v23) + 0.5;
          *(float *)(v21 - 4) = v22;
          *(_DWORD *)v21 = 1056964608;
          FIELD_F32(v21, 4) = v13 * v23;
          v24 = sqrtf((float)((float)(v22 * v22) + 0.25) + (float)((float)(v13 * v23) * (float)(v13 * v23)));
          if ( v24 > 0.0 )
          {
            v25 = 1.0 / v24;
            *(float *)(v21 - 4) = v25 * *(float *)(v21 - 4);
            *(float *)v21 = v25 * *(float *)v21;
            FIELD_F32(v21, 4) = v25 * FIELD_F32(v21, 4);
          }
          ++v20;
          v21 += 32;
        }
        while ( a3 != v20 );
      }
      v7 += a3;
    }
    ++v10;
  }
  while ( v10 <= a4 );
  if ( a3 )
  {
    v26 = 0;
    v27 = v35 + 32 * v7 + 16;
    do
    {
      v28 = cosf((float)((float)v26 * 6.2832) / v11) * 0.5;
      v29 = sinf((float)((float)v26 * 6.2832) / v11) * 0.5;
      *(float *)(v27 - 16) = v28;
      *(_DWORD *)(v27 - 12) = -1090519040;
      ++v26;
      *(float *)(v27 - 8) = v29;
      FIELD_F32(v27, 8) = v28 + 0.5;
      FIELD_F32(v27, 12) = v29 + 0.5;
      *(_DWORD *)(v27 - 4) = 0;
      *(_DWORD *)v27 = -1082130432;
      FIELD_U32(v27, 4) = 0;
      v27 += 32;
    }
    while ( a3 != v26 );
    v7 += a3;
  }
  *(_DWORD *)(v35 + 32 * v7) = 0;
  v30 = (_DWORD *)(v35 + 32 * v7);
  v30[1] = -1090519040;
  v30[2] = 0;
  v30[3] = 0;
  v30[4] = -1082130432;
  v30[5] = 0;
  v30[6] = 1056964608;
  v30[7] = 1056964608;
  v36[0] = *v33;
  v36[1] = v33[1];
  v36[2] = v33[2];
  sub_609225B8(a1, v36, 0x20u, 32 * a3 * v32 + 32);
  sub_60922768(a1, 0, 34, 0, 0);
  sub_60922768(a1, 1u, 34, 12, 0);
  return sub_60922768(a1, 2u, 22, 24, 0);
}
