/* sub_606E5828
 * address: 0x606E5828   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E5828(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float32x2_t a6,
        float a7,
        float a8,
        float a9,
        float a10,
        double a11)
{
  unsigned int v12; // r5
  unsigned int v13; // r6
  unsigned int v14; // r1
  int v15; // r3
  unsigned int v16; // r0
  unsigned int v17; // r2
  unsigned int v18; // r7
  float v19; // s4
  float v20; // s6
  float v21; // s4
  int v22; // r1
  int v23; // r4
  int v24; // r7
  int v25; // r1
  int v26; // r4
  int v27; // r7
  _BYTE *v28; // r0
  int v29; // r2
  int *v30; // r1
  int v31; // r12
  int v32; // r3
  float *v33; // r4
  float *v34; // r7
  bool v35; // zf
  int *v36; // r2
  _BYTE *v37; // r3
  unsigned int v38; // r3
  int v39; // r6
  int v40; // t1
  int v41; // r7
  int v42; // r1
  int v43; // r3
  bool v44; // cf
  int v45; // r0
  int v46; // r2
  int v47; // r1
  int v48; // r1
  int result; // r0
  int v50; // r2
  int v51; // r1
  int v52; // r1
  int v53; // [sp+0h] [bp-60h] BYREF
  _BYTE v54[92]; // [sp+4h] [bp-5Ch] BYREF

  v12 = a1 + 2036;
  v13 = a1 + 1268;
  v14 = a1 + 1268;
  do
  {
    v15 = FIELD_S8(v14, 45);
    if ( (unsigned __int8)v15 <= 3u && *(unsigned __int8 *)(a1 + 16 * v15 + 1216) != (unsigned __int8)v15 )
      FIELD_U8(v14, 45) = -1;
    v14 += 48;
  }
  while ( v14 < v12 );
  sub_606E5160(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v16 = v13;
  do
  {
    FIELD_U32(v16, 40) = FIELD_U32(v16, 36);
    v16 += 48;
  }
  while ( v16 < v12 );
  v17 = v13;
  do
  {
    if ( FIELD_U8(v17, 44) )
    {
      v18 = FIELD_S8(v17, 45);
      v19 = FIELD_F32(v17, 36);
      if ( v18 > 3 )
      {
        v21 = v19 + -2.0;
        if ( v21 < 0.0 )
        {
          v22 = FIELD_U32(v17, 4);
          v23 = FIELD_U32(v17, 8);
          v24 = FIELD_U32(v17, 12);
          FIELD_U32(a1, 1168) = *(_DWORD *)v17;
          FIELD_U32(a1, 1172) = v22;
          FIELD_U32(a1, 1176) = v23;
          FIELD_U32(a1, 1180) = v24;
          v25 = FIELD_U32(v17, 20);
          v26 = FIELD_U32(v17, 24);
          v27 = FIELD_U32(v17, 28);
          FIELD_U32(a1, 1184) = FIELD_U32(v17, 16);
          FIELD_U32(a1, 1188) = v25;
          FIELD_U32(a1, 1192) = v26;
          FIELD_U32(a1, 1196) = v27;
          FIELD_U8(a1, 1200) = FIELD_U8(v17, 32);
          FIELD_U8(v17, 44) = 0;
        }
      }
      else
      {
        v20 = *(float *)(a1 + 16 * v18 + 1204);
        if ( v19 >= v20 )
        {
          v21 = v19 + -2.0;
          if ( v21 < v20 )
            v21 = *(float *)(a1 + 16 * v18 + 1204);
        }
        else
        {
          v21 = v19 + 2.0;
          if ( v21 > v20 )
            v21 = *(float *)(a1 + 16 * v18 + 1204);
        }
      }
      FIELD_F32(v17, 36) = v21;
    }
    v17 += 48;
  }
  while ( v17 < v12 );
  v28 = (_BYTE *)(a1 + 1312);
  v29 = 0;
  v30 = &v53;
  v31 = 0;
  do
  {
    if ( FIELD_U8(v13, 44) && FIELD_U8(v13, 45) >= 4u )
    {
      v32 = v29;
      v33 = (float *)(a1 + 1312);
      while ( 1 )
      {
        v34 = v33;
        v35 = v32 == 0;
        if ( v32 )
          v35 = *(_BYTE *)v33 == 0;
        if ( !v35 && FIELD_F32(v13, 40) >= *(v33 - 1) && FIELD_F32(v13, 36) <= *(v33 - 2) )
          break;
        v33 += 12;
        v32 -= 48;
        if ( (unsigned int)(v34 + 1) >= v12 )
          goto LABEL_33;
      }
      *(_DWORD *)&v54[4 * v31++ - 4] = v13;
    }
LABEL_33:
    v13 += 48;
    v29 += 48;
  }
  while ( v13 < v12 );
  if ( v31 >= 1 )
  {
    v36 = (int *)&v54[4 * v31 - 4];
    v37 = v54;
    if ( v36 > (int *)v54 )
      v37 = &v54[4 * v31 - 4];
    v38 = (unsigned int)&v37[~(unsigned int)&v53];
    if ( (((unsigned __int8)(v38 >> 2) + 1) & 3) != 0 )
    {
      v39 = -(((unsigned __int8)(v38 >> 2) + 1) & 3);
      v30 = &v53;
      do
      {
        v40 = *v30++;
        ++v39;
        FIELD_U8(v40, 44) = 0;
      }
      while ( v39 );
    }
    if ( v38 >= 0xC )
    {
      do
      {
        *(_BYTE *)(*v30 + 44) = 0;
        *(_BYTE *)(v30[1] + 44) = 0;
        *(_BYTE *)(v30[2] + 44) = 0;
        v41 = v30[3];
        v30 += 4;
        FIELD_U8(v41, 44) = 0;
      }
      while ( v30 < v36 );
    }
  }
  v42 = 0;
  do
  {
    if ( *v28 )
    {
      v43 = a1 + 4 * v42++;
      FIELD_U32(v43, 2036) = v28 - 44;
    }
    v44 = (unsigned int)(v28 + 4) >= v12;
    v28 += 48;
  }
  while ( !v44 );
  FIELD_U8(a1, 2561) = v42;
  SE_PLY_TARZAN_ref(a1);
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( FIELD_U8(a1, 648) )
  {
    v47 = FIELD_U32(a1, 1268);
    v46 = FIELD_U32(a1, 644);
  }
  *(_DWORD *)(a1 + 4 * v46 + 1104) = v47;
  if ( FIELD_U8(a1, 664) )
  {
    v45 = FIELD_U32(a1, 1268);
    v48 = FIELD_U32(a1, 660);
  }
  else
  {
    v48 = 1;
  }
  *(_DWORD *)(a1 + 4 * v48 + 1104) = v45;
  result = 0;
  if ( FIELD_U8(a1, 680) )
  {
    v50 = FIELD_U32(a1, 1268);
    v51 = FIELD_U32(a1, 676);
  }
  else
  {
    v51 = 2;
    v50 = 0;
  }
  *(_DWORD *)(a1 + 4 * v51 + 1104) = v50;
  if ( FIELD_U8(a1, 696) )
  {
    result = FIELD_U32(a1, 1268);
    v52 = FIELD_U32(a1, 692);
  }
  else
  {
    v52 = 3;
  }
  *(_DWORD *)(a1 + 4 * v52 + 1104) = result;
  return result;
}
