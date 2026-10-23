/* sub_6097AEEC
 * address: 0x6097AEEC   size: 1032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097AEEC(int a1, unsigned int a2, float *a3)
{
  int v3; // r6
  int v5; // r1
  int v6; // r2
  _DWORD **v7; // r7
  int v8; // r8
  float *v9; // r4
  int v10; // r11
  float v11; // r6
  _DWORD **v12; // r10
  float v13; // r5
  float v14; // r7
  float v15; // s18
  float v16; // s0
  float v17; // s0
  int v18; // r11
  float *v19; // r4
  int v20; // r0
  float v21; // s6
  float v22; // s8
  float v23; // s2
  float v24; // s0
  float v25; // s4
  float v26; // s22
  float v27; // s20
  float v28; // r5
  float v29; // s24
  float v30; // r8
  float v31; // r10
  float v32; // s0
  float v33; // s0
  float v34; // s0
  float v35; // s0
  float v36; // s8
  float v37; // s6
  float v38; // s4
  int v39; // r2
  int v40; // r1
  int v41; // r7
  int v42; // r5
  int v43; // r0
  int v46; // [sp+10h] [bp-70h]
  float v47; // [sp+14h] [bp-6Ch] BYREF
  float v48; // [sp+18h] [bp-68h]
  float v49; // [sp+1Ch] [bp-64h]
  float v50; // [sp+20h] [bp-60h]
  int v51[23]; // [sp+24h] [bp-5Ch] BYREF

  v3 = FIELD_U32(a1, 216);
  if ( FIELD_U32(a1, 212) > a2 )
    v3 += 2224 * a2;
  v5 = a1;
  do
  {
    v6 = v5;
    v5 = FIELD_U32(v5, 208);
  }
  while ( v5 );
  v7 = (_DWORD **)(v3 + 2128);
  v46 = FIELD_U8(a1, 843);
  if ( FIELD_U32(v6, 1956) != 2 )
  {
    if ( !FIELD_U8(a1, 843) )
      goto LABEL_24;
    v18 = 0;
    v19 = (float *)(a1 + 928);
    while ( 1 )
    {
      v20 = *((unsigned __int8 *)v19 - 80);
      if ( v20 == 2 )
      {
        v31 = -1.0;
        v28 = 0.0;
        v30 = 0.0;
      }
      else
      {
        v21 = *(v19 - 2);
        v22 = *(v19 - 1);
        v23 = a3[9];
        v24 = a3[8];
        v25 = a3[10];
        v26 = (float)((float)(v22 * a3[5]) + (float)(v21 * a3[4])) + (float)(*v19 * a3[6]);
        v27 = (float)((float)(v22 * a3[1]) + (float)(v21 * *a3)) + (float)(*v19 * a3[2]);
        v28 = v26;
        v29 = (float)((float)(v22 * v23) + (float)(v21 * v24)) + (float)(*v19 * v25);
        v30 = v27;
        if ( v20 == 1 )
        {
          v29 = v29 + -1.0;
          v32 = sqrtf((float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v29 * v29));
          if ( v32 <= 0.0 )
          {
            v31 = v29;
            goto LABEL_23;
          }
        }
        else
        {
          v31 = (float)((float)(v22 * v23) + (float)(v21 * v24)) + (float)(*v19 * v25);
          if ( *((_BYTE *)v19 - 80) )
            goto LABEL_23;
          v32 = sqrtf((float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v29 * v29));
          if ( v32 <= 0.0 )
            goto LABEL_23;
        }
        v33 = 1.0 / v32;
        v31 = v29 * v33;
        v28 = v26 * v33;
        v30 = v27 * v33;
      }
LABEL_23:
      v47 = v30;
      v48 = v28;
      v49 = v31;
      v50 = 0.0;
      sub_60921988((_DWORD **)(v3 + 2128), FIELD_U32(v3, 2136), 1, &v47, v18++, 1);
      v19 += 23;
      if ( v46 == v18 )
        goto LABEL_24;
    }
  }
  if ( FIELD_U8(a1, 843) )
  {
    v8 = 0;
    v9 = (float *)(a1 + 920);
    do
    {
      v10 = v3;
      v11 = *v9;
      v12 = v7;
      v13 = v9[1];
      v14 = v9[2];
      v15 = *v9;
      v16 = sqrtf((float)((float)(v13 * v13) + (float)(v15 * v15)) + (float)(v14 * v14));
      if ( v16 > 0.0 )
      {
        v17 = 1.0 / v16;
        v14 = v14 * v17;
        v13 = v13 * v17;
        v11 = v15 * v17;
      }
      v47 = v11;
      v48 = v13;
      v49 = v14;
      v3 = v10;
      v7 = v12;
      v50 = 0.0;
      sub_60921988(v12, FIELD_U32(v10, 2136), 1, &v47, v8++, 1);
      v9 += 23;
    }
    while ( v46 != v8 );
  }
LABEL_24:
  if ( FIELD_U8(a1, 1796) )
  {
    v34 = (float)((float)(FIELD_F32(a1, 1588) * a3[9]) + (float)(FIELD_F32(a1, 1584) * a3[8]))
        + (float)(FIELD_F32(a1, 1592) * a3[10]);
    if ( v34 >= 0.0 )
    {
      if ( v34 > 1.0 )
        v34 = 1.0;
    }
    else
    {
      v34 = 0.0;
    }
    v35 = FIELD_F32(a1, 1812) * (float)((float)((float)(v34 + -1.0) * FIELD_F32(a1, 1860)) + 1.0);
  }
  else
  {
    v35 = 0.0;
  }
  v36 = FIELD_F32(a1, 1604);
  v37 = FIELD_F32(a1, 1608);
  v38 = v35 * FIELD_F32(a1, 1600);
  v47 = v35 * FIELD_F32(a1, 1596);
  v48 = v38;
  v49 = v35 * v36;
  v50 = v35 * v37;
  sub_60921988(v7, FIELD_U32(v3, 2136), 0, &v47, 0, 1);
  v39 = FIELD_U8(v3, 2165);
  v40 = FIELD_U32(v3, 2144);
  v41 = FIELD_U32(v3, 2156);
  v42 = FIELD_U32(v3, 2160);
  v43 = FIELD_U16(v3, 2168);
  v51[0] = FIELD_U32(v3, 2152);
  v51[1] = v41 + v43 * v39 * v40;
  v51[2] = v42;
  return sub_60913B04(v51, FIELD_U32(v3, 2140));
}
