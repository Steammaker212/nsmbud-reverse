/* sub_6094E8A8
 * address: 0x6094E8A8   size: 1320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094E8A8(int a1, _DWORD *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v7; // r7
  int v10; // r9
  int v11; // r10
  _DWORD *v12; // r2
  float v13; // s18
  float v14; // s20
  unsigned int v15; // r6
  int v16; // r8
  unsigned int v17; // r10
  float v18; // s17
  float v19; // s30
  float v20; // s17
  float v21; // s19
  unsigned int v22; // r4
  float *v23; // r7
  float v24; // s21
  float v25; // s0
  int v26; // r8
  unsigned int i; // r4
  float v28; // s20
  int v29; // r0
  unsigned int v30; // r10
  int v31; // r6
  int v32; // r4
  unsigned int v33; // r7
  float v34; // s26
  float v35; // s30
  float v36; // s0
  unsigned int v37; // r0
  unsigned int v38; // r7
  unsigned int v39; // r4
  float v40; // s20
  int v41; // r11
  float v42; // s17
  float v43; // s30
  float v44; // s17
  float v45; // s19
  unsigned int v46; // r7
  float *v47; // r6
  float v48; // s21
  float v49; // s0
  int v50; // r6
  int v51; // r4
  _DWORD *v52; // r2
  int v54; // [sp+4h] [bp-94h]
  unsigned int v55; // [sp+Ch] [bp-8Ch]
  int v56; // [sp+10h] [bp-88h]
  _DWORD *v57; // [sp+14h] [bp-84h]
  int v58; // [sp+18h] [bp-80h]
  unsigned int v59; // [sp+1Ch] [bp-7Ch]
  unsigned int v60; // [sp+20h] [bp-78h]
  _DWORD v61[29]; // [sp+24h] [bp-74h] BYREF

  v7 = a5;
  v10 = 0;
  if ( *a2 )
    v10 = dword_60CC73E8(*a2);
  v11 = a2[1];
  *(_DWORD *)(v10 + v11) = 0;
  v12 = (_DWORD *)(v10 + v11);
  v12[1] = 1065353216;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 1065353216;
  v12[5] = 0;
  v12[6] = 1056964608;
  v56 = v10 + v11;
  v12[7] = 1056964608;
  v57 = a2;
  v60 = a4;
  v54 = v11;
  if ( a5 <= 1 )
  {
    v26 = 1;
    v13 = (float)a3;
  }
  else
  {
    v13 = (float)a3;
    v14 = (float)a5 + (float)a5;
    if ( a3 )
    {
      v15 = 1;
      v16 = v10 + v11 + 60;
      do
      {
        v17 = v7;
        v18 = sinf((float)((float)((float)v15 / v14) + -0.5) * 3.1416) * -0.5;
        v19 = v18 + v18;
        v20 = v18 + 0.5;
        v21 = cosf((float)((float)((float)v15 / v14) + -0.5) * 3.1416) * 0.5;
        v22 = 0;
        v23 = (float *)v16;
        do
        {
          v24 = v21 * cosf((float)((float)v22 * 6.2832) / v13);
          v25 = v21 * sinf((float)((float)v22++ * 6.2832) / v13);
          *(v23 - 7) = v24;
          *(v23 - 6) = v20;
          *(v23 - 5) = v25;
          *(v23 - 4) = v24 + v24;
          *(v23 - 3) = v19;
          *(v23 - 2) = v25 + v25;
          *(v23 - 1) = v24 + 0.5;
          *v23 = v25 + 0.5;
          v23 += 8;
        }
        while ( a3 != v22 );
        ++v15;
        v7 = v17;
        v16 += 32 * a3;
      }
      while ( v15 != v17 );
      a4 = v60;
      v11 = v54;
      v26 = (a5 - 1) * a3 + 1;
    }
    else
    {
      v26 = 1;
      for ( i = 1; i != a5; ++i )
      {
        sinf((float)((float)((float)i / v14) + -0.5) * 3.1416);
        cosf((float)((float)((float)i / v14) + -0.5) * 3.1416);
      }
    }
  }
  v59 = 2 * v7;
  v28 = (float)a4;
  v58 = a1;
  v55 = a4 + 2 * v7;
  if ( a3 )
  {
    v29 = v11 + 32 * v26;
    v30 = 0;
    v31 = v10 + v29 + 16;
    do
    {
      v32 = v31;
      v33 = 0;
      v34 = 0.5 - (float)((float)v30 / v28);
      do
      {
        v35 = cosf((float)((float)v33 * 6.2832) / v13) * 0.5;
        v36 = sinf((float)((float)v33 * 6.2832) / v13) * 0.5;
        *(float *)(v32 - 16) = v35;
        *(float *)(v32 - 12) = v34;
        ++v33;
        *(float *)(v32 - 8) = v36;
        FIELD_F32(v32, 8) = v35 + 0.5;
        FIELD_F32(v32, 12) = v34 + 0.5;
        *(float *)(v32 - 4) = v35 + v35;
        *(_DWORD *)v32 = 0;
        FIELD_F32(v32, 4) = v36 + v36;
        v32 += 32;
      }
      while ( a3 != v33 );
      ++v30;
      v31 += 32 * a3;
      v26 += a3;
    }
    while ( v30 <= v60 );
  }
  else
  {
    v37 = 0;
    do
      ++v37;
    while ( v37 <= a4 );
  }
  v38 = v55 - 1;
  v39 = a5 + 1;
  if ( a5 + 1 >= v59 )
    goto LABEL_30;
  v40 = (float)a5 + (float)a5;
  if ( !a3 )
  {
    v51 = 1;
    do
    {
      sinf((float)((float)((float)(a5 + v51) / v40) + -0.5) * 3.1416);
      cosf((float)((float)((float)(a5 + v51++) / v40) + -0.5) * 3.1416);
    }
    while ( a5 != v51 );
LABEL_30:
    v50 = a1;
    goto LABEL_31;
  }
  v41 = v10 + v54 + 32 * v26 + 16;
  do
  {
    v42 = sinf((float)((float)((float)v39 / v40) + -0.5) * 3.1416) * -0.5;
    v43 = v42 + v42;
    v44 = v42 + -0.5;
    v45 = cosf((float)((float)((float)v39 / v40) + -0.5) * 3.1416) * 0.5;
    v46 = 0;
    v47 = (float *)v41;
    do
    {
      v48 = v45 * cosf((float)((float)v46 * 6.2832) / v13);
      v49 = v45 * sinf((float)((float)v46++ * 6.2832) / v13);
      *(v47 - 4) = v48;
      *(v47 - 3) = v44;
      *(v47 - 2) = v49;
      *(v47 - 1) = v48 + v48;
      *v47 = v43;
      v47[1] = v49 + v49;
      v47[2] = v48 + 0.5;
      v47[3] = v49 + 0.5;
      v47 += 8;
    }
    while ( a3 != v46 );
    ++v39;
    v41 += 32 * a3;
  }
  while ( v39 != v59 );
  v50 = v58;
  v38 = v55 - 1;
  v26 += (a5 - 1) * a3;
LABEL_31:
  *(_DWORD *)(v56 + 32 * v26) = 0;
  v52 = (_DWORD *)(v56 + 32 * v26);
  v52[1] = -1082130432;
  v52[2] = 0;
  v52[3] = 0;
  v52[4] = -1082130432;
  v52[5] = 0;
  v52[6] = 1056964608;
  v52[7] = 1056964608;
  v61[0] = *v57;
  v61[1] = v57[1];
  v61[2] = v57[2];
  sub_609225B8(v50, v61, 0x20u, 32 * a3 * v38 + 64);
  sub_60922768(v50, 0, 34, 0, 0);
  sub_60922768(v50, 1u, 34, 12, 0);
  return sub_60922768(v50, 2u, 22, 24, 0);
}
