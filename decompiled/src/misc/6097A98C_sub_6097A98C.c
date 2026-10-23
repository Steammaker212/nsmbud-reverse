/* sub_6097A98C
 * address: 0x6097A98C   size: 1372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6097A98C(int a1)
{
  int v1; // r9
  int v2; // r1
  int v3; // r1
  int v4; // r2
  int v5; // r1
  int v6; // r7
  int v7; // r6
  int v8; // r0
  unsigned int v9; // r0
  float v10; // s18
  int v11; // r4
  int v12; // r0
  unsigned int v13; // r2
  signed int v14; // r1
  unsigned int result; // r0
  char *v16; // r2
  float v17; // s20
  int v18; // r0
  int v19; // r1
  int v20; // r10
  _DWORD **v21; // r6
  int *v22; // r11
  int v23; // r1
  int v24; // r4
  int v25; // r7
  int v26; // r9
  int v27; // r1
  int v28; // r0
  int *v29; // r3
  int v30; // r8
  int v31; // r7
  int v32; // r10
  float *v33; // r4
  _DWORD **v34; // r6
  int *v35; // r11
  float v36; // s16
  float v37; // s0
  float v38; // s0
  int v39; // r1
  int v40; // r8
  int v41; // r6
  int v42; // r10
  _DWORD *v43; // r7
  _DWORD **v44; // r11
  int *v45; // r4
  int v46; // r1
  int v47; // r8
  _DWORD **v48; // r6
  int *v49; // r7
  int v50; // r1
  int v51; // r10
  char *v52; // r5
  int v53; // r11
  int v54; // t1
  int v55; // r1
  int v56; // r0
  int v57; // r1
  int v58; // r6
  int v59; // r5
  int v60; // r2
  _DWORD *v61; // [sp+8h] [bp-80h]
  float *v62; // [sp+Ch] [bp-7Ch]
  unsigned int v63; // [sp+10h] [bp-78h]
  int v64; // [sp+14h] [bp-74h]
  int v65; // [sp+18h] [bp-70h]
  int v66; // [sp+1Ch] [bp-6Ch]
  int v67; // [sp+20h] [bp-68h]
  int v68; // [sp+24h] [bp-64h]
  int v69; // [sp+24h] [bp-64h]
  char *v70; // [sp+28h] [bp-60h]
  float v71; // [sp+2Ch] [bp-5Ch] BYREF
  int v72; // [sp+30h] [bp-58h]
  int v73; // [sp+34h] [bp-54h]

  v1 = a1;
  v2 = FIELD_U32(a1, 1632);
  v71 = FIELD_F32(a1, 1844);
  sub_60921988((_DWORD **)(a1 + 1624), v2, 0, &v71, 0, 1);
  v3 = FIELD_U32(v1, 1632);
  v71 = FIELD_F32(v1, 1828);
  sub_60921988((_DWORD **)(v1 + 1624), v3, 1, &v71, 0, 1);
  v4 = FIELD_U8(v1, 1661);
  v5 = FIELD_U32(v1, 1640);
  v6 = FIELD_U32(v1, 1652);
  v7 = FIELD_U32(v1, 1656);
  v8 = FIELD_U16(v1, 1664);
  v71 = FIELD_F32(v1, 1648);
  v72 = v6 + v8 * v4 * v5;
  v73 = v7;
  sub_60913B04((int *)&v71, FIELD_U32(v1, 1636));
  v9 = FIELD_U8(v1, 601);
  if ( v9 < 2 )
    v10 = 0.0;
  else
    v10 = 1.0 / (float)(v9 - 1);
  v11 = FIELD_U32(v1, 204);
  v12 = sub_609200A0(v11 + 456);
  v13 = FIELD_U8(v1, 601);
  v14 = FIELD_U16(v11, 482);
  if ( v12 > v14 )
    v14 = v12;
  result = FIELD_U32(v1, 1720);
  if ( result < v13 )
    v13 = FIELD_U32(v1, 1720);
  v63 = v13;
  if ( v13 )
  {
    v16 = (char *)(v1 + 849);
    v62 = (float *)(v1 + 936);
    v17 = 1.0 / (float)(unsigned int)v14;
    v61 = (_DWORD *)(v1 + 888);
    v66 = v1;
    v64 = FIELD_U32(v1, 1724);
    v65 = 0;
    do
    {
      v18 = v1;
      do
      {
        v19 = v18;
        v18 = FIELD_U32(v18, 208);
      }
      while ( v18 );
      v70 = v16;
      switch ( FIELD_U32(v19, 1764) )
      {
        case 0:
          v68 = FIELD_U8(v1, 843);
          if ( FIELD_U8(v1, 843) )
          {
            v20 = 0;
            v21 = (_DWORD **)(v64 + 96 * v65);
            v22 = (int *)(v21 + 2);
            do
            {
              v23 = *v22;
              v71 = 1.0;
              sub_60921988(v21, v23, 0, &v71, v20, 1);
              v24 = FIELD_U8(v1, 843);
              if ( FIELD_U8(v1, 843) )
              {
                v25 = 0;
                v26 = 0;
                do
                {
                  v27 = *v22;
                  v71 = v17 * (float)((float)v70[v25] + 0.5);
                  sub_60921988(v21, v27, 1, &v71, v26++, 1);
                  v25 += 92;
                }
                while ( v24 != v26 );
              }
              v1 = v66;
              v28 = v66 + 92 * v20;
              v29 = (int *)(v28 + 888);
              if ( (FIELD_U8(v28, 851) & (unsigned __int8)(1 << v65)) == 0 )
                v29 = &dword_60CD0B78;
              sub_60921988(v21, *v22, 2, v29, 2 * v20++, 2);
            }
            while ( v20 != v68 );
          }
          break;
        case 1:
          v30 = FIELD_U8(v1, 843);
          if ( FIELD_U8(v1, 843) )
          {
            v31 = 0;
            v32 = 0;
            v33 = v62;
            v34 = (_DWORD **)(v64 + 96 * v65);
            v35 = (int *)(v34 + 2);
            do
            {
              v36 = logf(*(v33 - 1));
              v37 = logf(*v33);
              v38 = expf(v36 + (float)((float)(v10 * (float)v65) * (float)(v37 - v36)));
              v39 = *v35;
              v71 = v38;
              sub_60921988(v34, v39, 0, &v71, v32, 1);
              sub_60921988(v34, *v35, 2, (_DWORD *)v33 - 12, v31, 2);
              ++v32;
              v33 += 23;
              v31 += 2;
            }
            while ( v30 != v32 );
          }
          break;
        case 2:
          v40 = FIELD_U8(v1, 843);
          if ( FIELD_U8(v1, 843) )
          {
            v41 = 0;
            v42 = 0;
            v43 = v61;
            v44 = (_DWORD **)(v64 + 96 * v65);
            v45 = (int *)(v44 + 2);
            do
            {
              v46 = *v45;
              v71 = (float)(v10 * (float)v65) * (float)(v10 * (float)v65);
              sub_60921988(v44, v46, 0, &v71, v42, 1);
              sub_60921988(v44, *v45, 2, v43, v41, 2);
              ++v42;
              v43 += 23;
              v41 += 2;
            }
            while ( v40 != v42 );
          }
          break;
        case 3:
          v67 = FIELD_U8(v1, 843);
          if ( FIELD_U8(v1, 843) )
          {
            v47 = 0;
            v48 = (_DWORD **)(v64 + 96 * v65);
            v49 = (int *)(v48 + 2);
            do
            {
              v69 = v1 + 92 * v47;
              v50 = *v49;
              v71 = FIELD_F32(v69, 932);
              sub_60921988(v48, v50, 0, &v71, v47, 1);
              v51 = FIELD_U8(v1, 843);
              if ( FIELD_U8(v1, 843) )
              {
                v52 = v70;
                v53 = 0;
                do
                {
                  v54 = *v52;
                  v52 += 92;
                  v55 = *v49;
                  v71 = v17 * (float)((float)v54 + 0.5);
                  sub_60921988(v48, v55, 1, &v71, v53++, 1);
                }
                while ( v51 != v53 );
              }
              sub_60921988(v48, *v49, 2, (_DWORD *)(v69 + 888), 2 * v47++, 2);
            }
            while ( v47 != v67 );
          }
          break;
        default:
          break;
      }
      v56 = v64 + 96 * v65;
      v57 = FIELD_U32(v56, 16);
      v58 = FIELD_U32(v56, 28);
      v59 = FIELD_U32(v56, 32);
      v60 = FIELD_U16(v56, 40) * FIELD_U8(v56, 37);
      v71 = FIELD_F32(v56, 24);
      v72 = v58 + v60 * v57;
      v73 = v59;
      sub_60913B04((int *)&v71, FIELD_U32(v56, 12));
      result = v63;
      ++v65;
      v16 = v70 + 1;
    }
    while ( v65 != v63 );
  }
  return result;
}
