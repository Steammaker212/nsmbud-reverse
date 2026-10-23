/* sub_6095B8EC
 * address: 0x6095B8EC   size: 1308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_6095B8EC(int a1, int a2, int a3)
{
  float v6; // s20
  float v7; // s22
  int v8; // r0
  int v9; // r5
  int v10; // r0
  float v11; // s4
  int v12; // r5
  int v13; // r0
  float v14; // s20
  float v15; // s22
  int v16; // r10
  int v17; // r8
  float v18; // s0
  float v19; // s28
  float v20; // s30
  float v21; // s8
  float v22; // s4
  float v23; // s6
  float v24; // s2
  float v25; // s0
  float v26; // s2
  float v27; // s2
  __int64 v28; // r0
  int v29; // r2
  unsigned int *v30; // r0
  unsigned int v31; // r1
  int v32; // r0
  int v33; // r6
  int v34; // r0
  int v35; // r7
  int v36; // r4
  int v37; // r0
  int v38; // r8
  int v39; // r11
  float v40; // s28
  float v41; // s0
  float v42; // s0
  __int64 v43; // r0
  int v44; // r2
  unsigned int *result; // r0
  unsigned int v46; // r1
  int v47; // [sp+Ch] [bp-9Ch]
  int v48; // [sp+14h] [bp-94h]
  int v49; // [sp+14h] [bp-94h]
  _DWORD v50[3]; // [sp+18h] [bp-90h] BYREF
  _DWORD v51[3]; // [sp+24h] [bp-84h] BYREF
  float v52; // [sp+30h] [bp-78h] BYREF
  float v53; // [sp+34h] [bp-74h]
  float v54; // [sp+38h] [bp-70h]
  float v55; // [sp+3Ch] [bp-6Ch]

  v6 = (float)a2;
  v7 = FIELD_F32(a1, 9728);
  v8 = FIELD_U32(a1, 1072);
  v47 = a1;
  v9 = FIELD_U32(a1, 1076);
  if ( v8 )
    v10 = dword_60CC73E8(v8);
  else
    v10 = 0;
  if ( a2 >= 1 )
  {
    v11 = v7 / v6;
    v12 = v10 + v9;
    v13 = 0;
    v14 = 2.0 / (float)(v6 + -1.0);
    v15 = v11 + 1.0;
    do
    {
      v48 = v13;
      v16 = 0;
      v17 = 0;
      v18 = v15 * (float)((float)(v14 * (float)v13) + -1.0);
      v19 = -v18;
      v20 = v18 * v18;
      do
      {
        v21 = 0.0;
        v22 = v19;
        v55 = 0.0;
        v23 = v15 * (float)((float)(v14 * (float)v17) + -1.0);
        v52 = v23;
        v53 = v19;
        v24 = 1.0 - (float)(v20 + (float)(v23 * v23));
        v25 = 0.0;
        v54 = v24;
        if ( v24 >= 0.0 )
        {
          v25 = sqrtf(v24);
          v23 = v52;
          v22 = v53;
          v21 = v55;
        }
        v54 = v25;
        v26 = sqrtf((float)((float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v25 * v25)) + (float)(v21 * v21));
        if ( v26 > 0.0 )
        {
          v27 = 1.0 / v26;
          v52 = v27 * v52;
          v53 = v27 * v53;
          v54 = v27 * v54;
          v55 = v27 * v55;
        }
        if ( (FIELD_U8(v47, 9748) & 0x80) != 0 )
        {
          v52 = (float)(v52 * 0.5) + 0.5;
          v53 = (float)(v53 * 0.5) + 0.5;
          v54 = (float)(v54 * 0.5) + 0.5;
        }
        v28 = sub_6095CB58(&v52);
        ++v17;
        *(_DWORD *)(v12 + v16) = v28;
        v29 = v12 + v16;
        v16 += 8;
        FIELD_U32(v29, 4) = HIDWORD(v28);
      }
      while ( a2 != v17 );
      v12 += 8 * a2;
      v13 = v48 + 1;
    }
    while ( v48 + 1 != a2 );
  }
  v51[0] = FIELD_U32(v47, 1072);
  v51[1] = FIELD_U32(v47, 1076);
  v51[2] = FIELD_U32(v47, 1080);
  sub_60973CF8(v47 + 1088, v51, FIELD_U32(v47, 1084), 43, a2, a2, 0);
  v52 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v53 = COERCE_FLOAT("lightmap_sphere_normal");
  sub_60920600(v47 + 1088, &v52);
  sub_60920EC8(v47 + 1360, (int *)(v47 + 1088));
  FIELD_U16(v47, 1676) = 0;
  FIELD_U8(v47, 1678) = 0;
  v30 = (unsigned int *)(v47 + 1688);
  do
    v31 = __ldrex(v30);
  while ( __strex(v31 | 4, v30) );
  v32 = FIELD_U32(v47, 1704);
  v33 = FIELD_U32(v47, 1708);
  if ( v32 )
  {
    v34 = dword_60CC73E8(v32);
    if ( a3 < 1 )
      goto LABEL_29;
  }
  else
  {
    v34 = 0;
    if ( a3 < 1 )
      goto LABEL_29;
  }
  v35 = v34 + v33;
  v36 = a3 / 2;
  v37 = 0;
  do
  {
    v49 = v37;
    v38 = 0;
    v39 = 0;
    v40 = (float)(v36 - v37) + -0.5;
    do
    {
      v52 = (float)(a3 / 2);
      v53 = v40;
      v54 = (float)(v36 + v39) + -0.5;
      v55 = 0.0;
      v41 = sqrtf((float)((float)((float)(v52 * v52) + (float)(v40 * v40)) + (float)(v54 * v54)) + 0.0);
      if ( v41 > 0.0 )
      {
        v42 = 1.0 / v41;
        v52 = v42 * v52;
        v53 = v42 * v53;
        v54 = v42 * v54;
        v55 = v42 * v55;
      }
      if ( (FIELD_U8(v47, 9748) & 0x80) != 0 )
      {
        v52 = (float)(v52 * 0.5) + 0.5;
        v53 = (float)(v53 * 0.5) + 0.5;
        v54 = (float)(v54 * 0.5) + 0.5;
      }
      v43 = sub_6095CB58(&v52);
      --v39;
      *(_DWORD *)(v35 + v38) = v43;
      v44 = v35 + v38;
      v38 += 8;
      FIELD_U32(v44, 4) = HIDWORD(v43);
    }
    while ( a3 + v39 );
    v35 += 8 * a3;
    v37 = v49 + 1;
  }
  while ( v49 + 1 != a3 );
LABEL_29:
  v50[0] = FIELD_U32(v47, 1704);
  v50[1] = FIELD_U32(v47, 1708);
  v50[2] = FIELD_U32(v47, 1712);
  sub_60973CF8(v47 + 1720, v50, FIELD_U32(v47, 1716), 43, a3, a3, 0);
  v52 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v53 = COERCE_FLOAT("lightmap_cube_normal");
  sub_60920600(v47 + 1720, &v52);
  sub_60920EC8(v47 + 1992, (int *)(v47 + 1720));
  FIELD_U16(v47, 2308) = 0;
  result = (unsigned int *)(v47 + 2320);
  FIELD_U8(v47, 2310) = 0;
  do
    v46 = __ldrex(result);
  while ( __strex(v46 | 4, result) );
  return result;
}
