/* sub_6084085C
 * address: 0x6084085C   size: 1396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084085C(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float *a8,
        float *a9,
        int a10,
        int a11)
{
  int v13; // r6
  int result; // r0
  int v15; // r8
  int v16; // r0
  int v17; // r9
  int v18; // r7
  int v19; // r0
  unsigned int *v20; // r7
  int v21; // r10
  unsigned int v22; // r8
  _BYTE *v23; // r4
  unsigned int v24; // r6
  float v25; // s2
  double v26; // d0
  int v27; // r0
  float v28; // s4
  float v29; // s4
  double v30; // d0
  float v31; // s2
  int v32; // r0
  float v33; // s4
  float v34; // s4
  unsigned int v35; // r6
  unsigned int v36; // r6
  int v37; // r0
  int v38; // r7
  int v39; // r10
  _DWORD *v40; // r8
  int v41; // r6
  int v42; // r4
  int v43; // r6
  __int16 *v44; // r0
  int v45; // r3
  __int16 *v46; // r2
  __int16 v47; // r7
  int v48; // [sp+8h] [bp-58h]
  int v49; // [sp+Ch] [bp-54h]
  int v51; // [sp+14h] [bp-4Ch]
  int v52; // [sp+18h] [bp-48h]
  int v53; // [sp+1Ch] [bp-44h]
  _DWORD *v55; // [sp+24h] [bp-3Ch]
  unsigned int v56; // [sp+24h] [bp-3Ch]
  __int64 v57; // [sp+28h] [bp-38h] BYREF
  float v58; // [sp+30h] [bp-30h]
  int v59; // [sp+34h] [bp-2Ch]

  v13 = sub_60847A40(a4, a5, a6);
  result = sub_608478AC();
  if ( result == 1 )
  {
    sub_60847820(a3, 8);
    v15 = sub_608478BC(v13);
    v16 = sub_60847870(a3);
    sub_60847AEC(a4, v16, v15, a11, a5, a6);
    v48 = v15;
    sub_60847898(a3, v15);
    v51 = a3;
    sub_60847890(a3);
    v17 = 0;
    v49 = v13;
    v52 = v13 + 16;
    do
    {
      v18 = a1 + 4 * v17;
      v19 = sub_60847BD8(v52, v17);
      FIELD_U32(v18, 360) = v19;
      v20 = (unsigned int *)(v18 + 360);
      if ( v19 )
      {
        v53 = sub_60847844(v51);
        v21 = *(_DWORD *)(v13 + 4 * v17 + 16);
        v55 = (_DWORD *)sub_6084783C(v51);
        v22 = *v20;
        v59 = 0;
        v58 = 0.0;
        v57 = 0;
        sub_6083D5B0(&v57);
        v57 = v22 | 0x400000000LL;
        sub_608352A0(a2, (int)&v57);
        sub_608353C0(a1 + 72 * v17, a2, &v57, v55, v21 + v53);
        v56 = *v20;
        v23 = (_BYTE *)sub_60843858(a1 + 72 * v17);
        if ( v17 == 3 )
        {
          if ( v56 >> 2 )
          {
            v36 = v56 >> 2;
            if ( a10 )
            {
              do
              {
                *v23 = sub_608423B8((char)*v23);
                sub_608422AC(a7, v23);
                --v36;
                v23 += 4;
              }
              while ( v36 );
            }
            else
            {
              do
              {
                sub_608422AC(a7, v23);
                v23 += 4;
                --v36;
              }
              while ( v36 );
            }
          }
        }
        else if ( v17 == 1 )
        {
          if ( v56 >> 2 )
          {
            v35 = v56 >> 2;
            if ( a10 )
            {
              do
              {
                sub_608423D0(v23);
                sub_60842130(a7, v23);
                v23 += 4;
                --v35;
              }
              while ( v35 );
            }
            else
            {
              do
              {
                sub_60842130(a7, v23);
                v23 += 4;
                --v35;
              }
              while ( v35 );
            }
          }
        }
        else if ( !v17 && v56 >> 3 )
        {
          v24 = v56 >> 3;
          if ( a10 )
          {
            while ( 1 )
            {
              v26 = sub_60843C5C(v23, 8);
              *(float *)&v26 = -*(float *)&v26;
              v58 = v25;
              v57 = *(_QWORD *)&v26;
              if ( a9 )
                break;
              v27 = a7;
              if ( a8 )
                goto LABEL_19;
LABEL_20:
              ((void (__fastcall *)(int, __int64 *))loc_60841EC4)(v27, &v57);
              sub_60843BA8(v23, &v57);
              --v24;
              v23 += 8;
              if ( !v24 )
                goto LABEL_46;
            }
            v27 = a7;
            if ( *a9 != 1.0 )
            {
              *(float *)&v26 = *a9 * *(float *)&v26;
              LODWORD(v57) = LODWORD(v26);
            }
            v28 = a9[1];
            if ( v28 != 1.0 )
            {
              *((float *)&v26 + 1) = *((float *)&v26 + 1) * v28;
              HIDWORD(v57) = HIDWORD(v26);
            }
            v29 = a9[2];
            if ( v29 != 1.0 )
            {
              v25 = v25 * v29;
              v58 = v25;
            }
            if ( !a8 )
              goto LABEL_20;
LABEL_19:
            *(float *)&v57 = *(float *)&v26 + *a8;
            *((float *)&v57 + 1) = *((float *)&v26 + 1) + a8[1];
            v58 = v25 + a8[2];
            goto LABEL_20;
          }
          while ( 2 )
          {
            v30 = sub_60843C5C(v23, 8);
            v57 = *(_QWORD *)&v30;
            v58 = v31;
            if ( a9 )
            {
              v32 = a7;
              if ( *a9 != 1.0 )
              {
                *(float *)&v30 = *(float *)&v30 * *a9;
                LODWORD(v57) = LODWORD(v30);
              }
              v33 = a9[1];
              if ( v33 != 1.0 )
              {
                *((float *)&v30 + 1) = *((float *)&v30 + 1) * v33;
                HIDWORD(v57) = HIDWORD(v30);
              }
              v34 = a9[2];
              if ( v34 != 1.0 )
              {
                v31 = v31 * v34;
                v58 = v31;
              }
              if ( !a8 )
              {
LABEL_33:
                ((void (__fastcall *)(int, __int64 *))loc_60841EC4)(v32, &v57);
                sub_60843BA8(v23, &v57);
                --v24;
                v23 += 8;
                if ( !v24 )
                  goto LABEL_46;
                continue;
              }
            }
            else
            {
              v32 = a7;
              if ( !a8 )
                goto LABEL_33;
            }
            break;
          }
          *(float *)&v57 = *(float *)&v30 + *a8;
          *((float *)&v57 + 1) = *((float *)&v30 + 1) + a8[1];
          v58 = v31 + a8[2];
          goto LABEL_33;
        }
LABEL_46:
        sub_6084385C(a1 + 72 * v17, v56);
        v13 = v49;
      }
      ++v17;
    }
    while ( v17 != 5 );
    v37 = sub_60847844(v51);
    v38 = FIELD_U32(v13, 56);
    v39 = v37;
    FIELD_U32(a1, 456) = sub_60847BF0(v52);
    v40 = (_DWORD *)sub_6084783C(v51);
    v41 = sub_60847BF0(v52);
    v59 = 0;
    v58 = 0.0;
    v57 = 0;
    sub_6083D5B0(&v57);
    HIDWORD(v57) = 8;
    LODWORD(v57) = sub_6084374C(v41);
    sub_608352A0(a2, (int)&v57);
    v42 = a1 + 384;
    sub_608353C0(a1 + 384, a2, &v57, v40, v38 + v39);
    v43 = sub_60847BF0(v52);
    if ( a10 == 1 )
    {
      v44 = (__int16 *)sub_60843858(v42);
      if ( v43 >= 2 )
      {
        v45 = 0;
        v46 = &v44[v43 - 1];
        do
        {
          v47 = *v44;
          ++v45;
          *v44++ = *v46;
          *v46-- = v47;
        }
        while ( v45 < v43 / 2 );
      }
      sub_6084385C(v42, 2 * v43);
    }
    return sub_6084784C(v51, v48);
  }
  return result;
}
