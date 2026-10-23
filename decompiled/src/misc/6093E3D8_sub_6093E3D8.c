/* sub_6093E3D8
 * address: 0x6093E3D8   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093E3D8(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char a16)
{
  unsigned int v18; // r4
  int v19; // r9
  int v20; // r3
  unsigned __int16 *v21; // r10
  int v22; // r1
  int v23; // r0
  int v24; // r4
  int v25; // r0
  unsigned int v26; // r11
  int v27; // r1
  unsigned int v28; // r2
  unsigned int v29; // r3
  int v30; // r0
  int v31; // r7
  unsigned int v32; // r1
  int v33; // r2
  int v34; // r6
  int v35; // r8
  int v36; // r9
  int v37; // r0
  bool v38; // zf
  unsigned int v39; // r0
  int v40; // r0
  int v41; // r1
  int v42; // r0
  int v43; // r1
  int v44; // r0
  bool v45; // zf
  int v46; // r0
  int v47; // r1
  signed int v48; // r3
  signed int v49; // r6
  _BYTE *v50; // r0
  char v51; // r1
  int v52; // r4
  int v53; // r7
  int v54; // r0
  int v55; // r0
  int v56; // r1
  int v57; // r1
  int v59; // [sp+1Ch] [bp-2Ch]

  v18 = FIELD_U32(a1, 20);
  v19 = a1 + 2464;
  sead__CriticalSection__lock(a1 + 2464);
  v20 = a5;
  v21 = (unsigned __int16 *)(a1 + 2560);
  v22 = (v18 >> 7) & 8;
  ++FIELD_U16(a1, 2560);
  v23 = (v18 >> 7) & 4;
  if ( a12 )
    v23 |= 2u;
  v38 = (v18 & 0x10) == 0;
  v24 = a11;
  v25 = v23 | v22;
  v26 = v25 & 0xFFFFFFFE | a16 & 1;
  v27 = a6;
  if ( !v38 )
    v26 = v25 | 1;
  if ( a6 == 8 )
    v24 = 6 * a11;
  if ( (FIELD_U8(a1, 20) & 0x40) == 0 )
  {
    v28 = FIELD_U32(a1, 2456);
    v29 = FIELD_U32(a1, 2556);
    v30 = FIELD_U32(a1, 2460);
    if ( v28 <= v29 )
    {
LABEL_12:
      v32 = FIELD_U32(a1, 2556);
    }
    else
    {
      v31 = v30 + 392 * v29;
      v32 = FIELD_U32(a1, 2556);
      while ( (FIELD_U8(v31, 341) & 1) != 0 )
      {
        ++v32;
        v31 += 392;
        if ( v28 == v32 )
          goto LABEL_12;
      }
      FIELD_U32(a1, 2556) = v32;
      if ( v31 )
        goto LABEL_57;
    }
    if ( v28 < v32 )
      v32 = v28;
    if ( v32 )
    {
      v33 = 0;
      while ( (FIELD_U8(v30, 341) & 1) != 0 )
      {
        ++v33;
        v30 += 392;
        if ( v32 == v33 )
          goto LABEL_19;
      }
      FIELD_U32(a1, 2556) = v33;
      v31 = v30;
    }
    else
    {
LABEL_19:
      v31 = 0;
    }
LABEL_57:
    v50 = (_BYTE *)(v31 + 341);
    v51 = FIELD_U8(v31, 341) & 0xFC | 1;
LABEL_58:
    *v50 = v51;
    sead__CriticalSection__unlock(v19);
    v36 = v31;
LABEL_59:
    sub_6093EB98(v36, a5, a6, a7, a8, a9, a10, a11);
    goto LABEL_60;
  }
  v34 = a4;
  v35 = FIELD_U32(a1, 2456);
  v31 = 0;
  if ( !v35 )
  {
    a4 = v34;
LABEL_54:
    v50 = (_BYTE *)(v31 + 341);
    v51 = FIELD_U8(v31, 341) | 3;
    goto LABEL_58;
  }
  v59 = v19;
  v36 = FIELD_U32(a1, 2460);
  while ( 1 )
  {
    if ( (FIELD_U8(v36, 341) & 3) == 2 )
    {
      v37 = FIELD_U16(v36, 60);
      v38 = v37 == v20;
      if ( v37 == v20 )
        v38 = FIELD_U16(v36, 34) == v27;
      if ( v38 )
      {
        v39 = FIELD_U16(v36, 24);
        if ( v39 <= 1 )
          v39 = 1;
        if ( v39 == a7 )
        {
          v40 = sub_609200A0(v36);
          v41 = FIELD_U16(v36, 26);
          v20 = a5;
          if ( v40 > v41 )
            v41 = v40;
          v38 = v41 == a8;
          v27 = a6;
          if ( v38 && FIELD_U8(v36, 32) == a10 )
          {
            v42 = sub_609200B8(v36);
            v43 = FIELD_U16(v36, 28);
            v20 = a5;
            if ( v42 > v43 )
              v43 = v42;
            v38 = v43 == v24;
            v27 = a6;
            if ( v38 )
            {
              v44 = FIELD_U8(v36, 335);
              v45 = v44 == a9;
              if ( v44 == a9 )
                v45 = FIELD_U8(v36, 340) == v26;
              if ( v45 )
                break;
            }
          }
        }
      }
    }
    --v35;
    v36 += 392;
    if ( !v35 )
    {
      v46 = FIELD_U32(a1, 2456);
      v19 = v59;
      a4 = v34;
      if ( v46 )
      {
        v47 = FIELD_U32(a1, 2460);
        v31 = 0;
        v48 = 0;
        do
        {
          if ( (FIELD_U8(v47, 341) & 1) == 0 )
          {
            v49 = abs32(*v21 - FIELD_U16(v47, 338));
            if ( (FIELD_U8(v47, 341) & 2) != 0 && FIELD_U32(a1, 2456) < v49 )
              FIELD_U8(v47, 341) &= ~2u;
            if ( v48 < v49 )
            {
              v31 = v47;
              v48 = v49;
            }
          }
          --v46;
          v47 += 392;
        }
        while ( v46 );
      }
      goto LABEL_54;
    }
  }
  FIELD_U8(v36, 341) |= 1u;
  sead__CriticalSection__unlock(v59);
  a4 = v34;
  if ( (FIELD_U8(v36, 336) & 1) != 0 )
    goto LABEL_59;
LABEL_60:
  v52 = a3;
  FIELD_U32(v36, 304) = a3;
  FIELD_U8(v36, 333) = 0;
  sead__CriticalSection__lock(a1 + 2500);
  v53 = FIELD_U32(a3, 4);
  FIELD_U8(v36, 334) = 0;
  v54 = sub_6095353C(v53, v36 + 276, a12, a13);
  FIELD_U32(v36, 272) = v54;
  if ( !v54 )
  {
LABEL_67:
    s_4dx_4d_size_d_s_ref(a1, 0);
    s_4dx_4d_size_d_s_ref(a1, 1);
    s_4dx_4d_size_d_s_ref(a1, 2);
    s_4dx_4d_size_d_s_ref(a1, 3);
    goto LABEL_68;
  }
  if ( !a13 )
    v52 = 0;
  v55 = sub_6093EE30(a1, v52);
  v56 = FIELD_U32(v36, 272);
  if ( !v55 )
  {
    sub_60953920(v53, v56, 1);
    FIELD_U32(v36, 272) = 0;
    goto LABEL_67;
  }
  if ( !v56 )
    goto LABEL_67;
LABEL_68:
  sead__CriticalSection__unlock(a1 + 2500);
  sub_6093EFC8(v36, v57, a4, 1, *v21);
  return v36;
}
