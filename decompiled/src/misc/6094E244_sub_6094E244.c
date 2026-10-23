/* sub_6094E244
 * address: 0x6094E244   size: 868   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094E244(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v8; // r1
  int v9; // r2
  _DWORD *v10; // r0
  float v11; // s18
  unsigned int v12; // r10
  unsigned int v13; // r7
  float *v14; // r4
  float v15; // s24
  float v16; // s0
  int v17; // r6
  float v18; // s24
  unsigned int v19; // r11
  int v20; // r8
  float *v21; // r4
  unsigned int v22; // r10
  float v23; // s26
  float v24; // s30
  float v25; // s0
  unsigned int v26; // r0
  unsigned int v27; // r8
  unsigned int v28; // r7
  int v29; // r4
  float v30; // s24
  float v31; // s0
  _DWORD *v32; // r2
  _DWORD *v34; // [sp+4h] [bp-8Ch]
  int v35; // [sp+8h] [bp-88h]
  int v36; // [sp+Ch] [bp-84h]
  int v37; // [sp+10h] [bp-80h]
  int v38; // [sp+14h] [bp-7Ch]
  _DWORD v39[29]; // [sp+1Ch] [bp-74h] BYREF

  v8 = 0;
  if ( *a2 )
    v8 = dword_60CC73E8(*a2);
  v9 = a2[1];
  *(_DWORD *)(v8 + v9) = 0;
  v10 = (_DWORD *)(v8 + v9);
  v10[1] = 1056964608;
  v10[2] = 0;
  v10[6] = 1056964608;
  v10[7] = 1056964608;
  v10[3] = 0;
  v10[4] = 1065353216;
  v11 = (float)a3;
  v10[5] = 0;
  v35 = a1;
  v34 = a2;
  v38 = v8 + v9;
  v37 = v8;
  v36 = v9;
  if ( a3 )
  {
    v12 = a4;
    v13 = 0;
    v14 = (float *)(v8 + v9 + 60);
    do
    {
      v15 = cosf((float)((float)v13 * 6.2832) / v11) * 0.5;
      v16 = sinf((float)((float)v13 * 6.2832) / v11) * 0.5;
      *(v14 - 7) = v15;
      *(v14 - 6) = 0.5;
      ++v13;
      *(v14 - 5) = v16;
      *(v14 - 1) = v15 + 0.5;
      *v14 = v16 + 0.5;
      *(v14 - 4) = 0.0;
      *(v14 - 3) = 1.0;
      *(v14 - 2) = 0.0;
      v14 += 8;
    }
    while ( a3 != v13 );
    a4 = v12;
    v17 = a3 + 1;
    v18 = (float)v12;
    v19 = 0;
    v20 = v37 + v36 + 32 * a3 + 60;
    do
    {
      v21 = (float *)v20;
      v22 = 0;
      v23 = 0.5 - (float)((float)v19 / v18);
      do
      {
        v24 = cosf((float)((float)v22 * 6.2832) / v11) * 0.5;
        v25 = sinf((float)((float)v22 * 6.2832) / v11) * 0.5;
        *(v21 - 7) = v24;
        *(v21 - 6) = v23;
        ++v22;
        *(v21 - 5) = v25;
        *(v21 - 1) = v24 + 0.5;
        *v21 = v23 + 0.5;
        *(v21 - 4) = v24 + v24;
        *(v21 - 3) = 0.0;
        *(v21 - 2) = v25 + v25;
        v21 += 8;
      }
      while ( a3 != v22 );
      ++v19;
      v17 += a3;
      v20 += 32 * a3;
    }
    while ( v19 <= a4 );
  }
  else
  {
    v17 = 1;
    v26 = 0;
    do
      ++v26;
    while ( v26 <= a4 );
  }
  v27 = a4 + 3;
  if ( a3 )
  {
    v28 = 0;
    v29 = v37 + v36 + 32 * v17 + 16;
    do
    {
      v30 = cosf((float)((float)v28 * 6.2832) / v11) * 0.5;
      v31 = sinf((float)((float)v28 * 6.2832) / v11) * 0.5;
      *(float *)(v29 - 16) = v30;
      *(_DWORD *)(v29 - 12) = -1090519040;
      ++v28;
      *(float *)(v29 - 8) = v31;
      FIELD_F32(v29, 8) = v30 + 0.5;
      FIELD_F32(v29, 12) = v31 + 0.5;
      *(_DWORD *)(v29 - 4) = 0;
      *(_DWORD *)v29 = -1082130432;
      FIELD_U32(v29, 4) = 0;
      v29 += 32;
    }
    while ( a3 != v28 );
    v17 += a3;
  }
  *(_DWORD *)(v38 + 32 * v17) = 0;
  v32 = (_DWORD *)(v38 + 32 * v17);
  v32[1] = -1090519040;
  v32[2] = 0;
  v32[3] = 0;
  v32[4] = -1082130432;
  v32[5] = 0;
  v32[6] = 1056964608;
  v32[7] = 1056964608;
  v39[0] = *v34;
  v39[1] = v34[1];
  v39[2] = v34[2];
  sub_609225B8(v35, v39, 0x20u, 32 * a3 * v27 + 64);
  sub_60922768(v35, 0, 34, 0, 0);
  sub_60922768(v35, 1u, 34, 12, 0);
  return sub_60922768(v35, 2u, 22, 24, 0);
}
