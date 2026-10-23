/* sub_60891FE4
 * address: 0x60891FE4   size: 1832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60891FE4(unsigned int a1, unsigned int a2, int a3)
{
  int *v5; // r9
  float v6; // r1
  int v7; // r2
  int v8; // r7
  int v9; // r0
  int v10; // r6
  int result; // r0
  unsigned int v12; // r1
  int v13; // r5
  int v14; // r1
  int v15; // r4
  int v16; // r8
  int v17; // r2
  unsigned int v18; // r0
  float v19; // s0
  _BOOL4 v20; // r0
  _BOOL4 v21; // r1
  float v22; // r2
  int v23; // r1
  int v24; // r3
  float v25; // r0
  int v26; // r1
  int v27; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r3
  int v31; // r3
  int v32; // r3
  float v33; // s2
  float v34; // s0
  float v35; // s2
  int v36; // r1
  int v37; // r2
  int v38; // r7
  float *v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r6
  float v43; // s0
  float v44; // s2
  float *v45; // r2
  int v46; // r2
  int v47; // r3
  int v48; // r4
  unsigned int v49; // r4
  float v50; // r2
  int v51; // r3
  int v52; // r7
  float v53; // s0
  float v54; // s2
  int v55; // r1
  int v56; // r3
  float v57; // s0
  _BOOL4 v58; // r1
  _BOOL4 v59; // r2
  float v60; // r3
  int v61; // r2
  int v62; // r1
  int v63; // r1
  int v64; // r2
  int v65; // r7
  float v66; // s2
  int v67; // r1
  int v68; // r2
  int v69; // r7
  int v70; // r7
  int v71; // r7

  while ( 2 )
  {
    v5 = (int *)(a2 - 8);
LABEL_16:
    v13 = a1;
LABEL_18:
    v14 = a2 - v13;
    result = (int)(a2 - v13) >> 3;
    switch ( result )
    {
      case 0:
      case 1:
        return result;
      case 2:
        if ( *(float *)v5 >= *(float *)v13 )
        {
          if ( *(float *)v5 > *(float *)v13 || (result = FIELD_U32(v13, 4), *(_DWORD *)(a2 - 4) < result) )
          {
            result = *(_DWORD *)v13;
            v55 = FIELD_U32(v13, 4);
            v56 = *(_DWORD *)(a2 - 4);
            *(_DWORD *)v13 = *v5;
            FIELD_U32(v13, 4) = v56;
            *v5 = result;
            *(_DWORD *)(a2 - 4) = v55;
          }
        }
        return result;
      case 3:
        v57 = FIELD_F32(v13, 8);
        v58 = 0;
        v59 = 0;
        if ( v57 >= *(float *)v13 )
        {
          v59 = 1;
          if ( v57 <= *(float *)v13 )
            v59 = FIELD_U32(v13, 12) < FIELD_U32(v13, 4);
        }
        if ( *(float *)v5 >= v57 )
        {
          v58 = 1;
          if ( *(float *)v5 <= v57 )
            v58 = *(_DWORD *)(a2 - 4) < FIELD_U32(v13, 12);
        }
        result = v13 + 8;
        if ( v59 )
        {
          v60 = *(float *)v13;
          v61 = FIELD_U32(v13, 4);
          if ( v58 )
          {
            result = *v5;
            v62 = *(_DWORD *)(a2 - 4);
            *(_DWORD *)v13 = *v5;
            FIELD_U32(v13, 4) = v62;
LABEL_120:
            *(float *)v5 = v60;
            *(_DWORD *)(a2 - 4) = v61;
            return result;
          }
          v70 = FIELD_U32(v13, 12);
          *(_DWORD *)v13 = *(_DWORD *)result;
          FIELD_U32(v13, 4) = v70;
          *(float *)result = v60;
          FIELD_U32(v13, 12) = v61;
          if ( *(float *)v5 >= v60 && (*(float *)v5 > v60 || *(_DWORD *)(a2 - 4) < v61) )
          {
            v71 = *(_DWORD *)(a2 - 4);
            *(_DWORD *)result = *v5;
            FIELD_U32(v13, 12) = v71;
            goto LABEL_120;
          }
        }
        else if ( v58 )
        {
          v63 = *(_DWORD *)result;
          v64 = FIELD_U32(v13, 12);
          v65 = *(_DWORD *)(a2 - 4);
          *(_DWORD *)result = *v5;
          FIELD_U32(v13, 12) = v65;
          *v5 = v63;
          *(_DWORD *)(a2 - 4) = v64;
          v66 = FIELD_F32(v13, 8);
          if ( v66 >= *(float *)v13 && (v66 > *(float *)v13 || FIELD_U32(v13, 12) < FIELD_U32(v13, 4)) )
          {
            v67 = *(_DWORD *)v13;
            v68 = FIELD_U32(v13, 4);
            v69 = FIELD_U32(v13, 12);
            *(_DWORD *)v13 = *(_DWORD *)result;
            FIELD_U32(v13, 4) = v69;
            *(_DWORD *)result = v67;
            FIELD_U32(v13, 12) = v68;
          }
        }
        return result;
      case 4:
        return sub_6089270C(v13, v13 + 8, v13 + 16, a2 - 8, a3);
      case 5:
        return sub_60892948(v13, v13 + 8, v13 + 16, v13 + 24, a2 - 8, a3);
      default:
        if ( v14 <= 247 )
          return sub_60892A7C(v13, a2, a3);
        v15 = result / 2;
        v16 = v13 + 8 * (result / 2);
        if ( v14 >= 7993 )
        {
          v17 = v13 + 8 * (result / 2);
          v18 = (2 * (((int)(a2 - v13) >> 3) + ((unsigned int)((int)(a2 - v13) >> 31) >> 30))) & 0xFFFFFFF8;
          v9 = sub_60892948(v13, v13 + v18, v17, v16 + v18, a2 - 8, a3);
          goto LABEL_42;
        }
        v19 = *(float *)v16;
        v20 = 0;
        v21 = 0;
        if ( *(float *)v16 >= *(float *)v13 )
        {
          v21 = 1;
          if ( *(float *)v16 <= *(float *)v13 )
            v21 = *(_DWORD *)(v13 + 8 * v15 + 4) < FIELD_U32(v13, 4);
        }
        if ( *(float *)v5 >= v19 )
        {
          v20 = 1;
          if ( *(float *)v5 <= v19 )
            v20 = *(_DWORD *)(a2 - 4) < *(_DWORD *)(v13 + 8 * v15 + 4);
        }
        if ( v21 )
        {
          v22 = *(float *)v13;
          v23 = FIELD_U32(v13, 4);
          if ( v20 )
          {
            v24 = *(_DWORD *)(a2 - 4);
            *(_DWORD *)v13 = *v5;
            FIELD_U32(v13, 4) = v24;
            *(float *)v5 = v22;
            *(_DWORD *)(a2 - 4) = v23;
            v9 = 1;
            goto LABEL_42;
          }
          v31 = FIELD_U32(v16, 4);
          *(_DWORD *)v13 = *(_DWORD *)v16;
          FIELD_U32(v13, 4) = v31;
          *(float *)v16 = v22;
          FIELD_U32(v16, 4) = v23;
          v9 = 1;
          if ( *(float *)v5 >= v22 && (*(float *)v5 > v22 || *(_DWORD *)(a2 - 4) < v23) )
          {
            v32 = *(_DWORD *)(a2 - 4);
            *(_DWORD *)v16 = *v5;
            FIELD_U32(v16, 4) = v32;
            *(float *)v5 = v22;
            *(_DWORD *)(a2 - 4) = v23;
            goto LABEL_40;
          }
        }
        else if ( v20 )
        {
          v25 = *(float *)v16;
          v26 = FIELD_U32(v16, 4);
          v27 = *(_DWORD *)(a2 - 4);
          *(_DWORD *)v16 = *v5;
          FIELD_U32(v16, 4) = v27;
          *(float *)v5 = v25;
          *(_DWORD *)(a2 - 4) = v26;
          v9 = 1;
          if ( *(float *)v16 >= *(float *)v13
            && (*(float *)v16 > *(float *)v13 || FIELD_U32(v16, 4) < FIELD_U32(v13, 4)) )
          {
            v28 = *(_DWORD *)v13;
            v29 = FIELD_U32(v13, 4);
            v30 = FIELD_U32(v16, 4);
            *(_DWORD *)v13 = *(_DWORD *)v16;
            FIELD_U32(v13, 4) = v30;
            *(_DWORD *)v16 = v28;
            FIELD_U32(v16, 4) = v29;
LABEL_40:
            v9 = 2;
          }
        }
        else
        {
          v9 = 0;
        }
LABEL_42:
        v33 = *(float *)v16;
        v34 = *(float *)v13;
        if ( *(float *)v13 >= *(float *)v16
          && (*(float *)v13 > *(float *)v16 || FIELD_U32(v13, 4) < *(_DWORD *)(v13 + 8 * v15 + 4)) )
        {
          v12 = a2 - 8;
          goto LABEL_78;
        }
        if ( v13 != a2 - 16 )
        {
          v12 = a2 - 16;
          while ( *(float *)v12 < v33 || *(float *)v12 <= v33 && FIELD_U32(v12, 4) >= *(_DWORD *)(v13 + 8 * v15 + 4) )
          {
            v12 -= 8;
            if ( v13 == v12 )
              goto LABEL_51;
          }
          v46 = *(_DWORD *)v13;
          v47 = FIELD_U32(v13, 4);
          v48 = FIELD_U32(v12, 4);
          ++v9;
          *(_DWORD *)v13 = *(_DWORD *)v12;
          FIELD_U32(v13, 4) = v48;
          *(_DWORD *)v12 = v46;
          FIELD_U32(v12, 4) = v47;
LABEL_78:
          v49 = v13 + 8;
          if ( v13 + 8 < v12 )
          {
            while ( 1 )
            {
              v53 = *(float *)v16;
              v54 = *(float *)v49;
              while ( v54 >= v53 && (v54 > v53 || FIELD_U32(v49, 4) < FIELD_U32(v16, 4)) )
              {
                v54 = FIELD_F32(v49, 8);
                v49 += 8;
              }
              do
              {
                do
                  v12 -= 8;
                while ( *(float *)v12 < v53 );
              }
              while ( *(float *)v12 <= v53 && FIELD_U32(v12, 4) >= FIELD_U32(v16, 4) );
              if ( v49 > v12 )
                break;
              v50 = *(float *)v49;
              v51 = FIELD_U32(v49, 4);
              v52 = FIELD_U32(v12, 4);
              ++v9;
              if ( v16 == v49 )
                v16 = v12;
              *(_DWORD *)v49 = *(_DWORD *)v12;
              FIELD_U32(v49, 4) = v52;
              *(float *)v12 = v50;
              FIELD_U32(v12, 4) = v51;
              v49 += 8;
            }
          }
          if ( v49 != v16
            && *(float *)v16 >= *(float *)v49
            && (*(float *)v16 > *(float *)v49 || FIELD_U32(v16, 4) < FIELD_U32(v49, 4)) )
          {
            v6 = *(float *)v49;
            v7 = FIELD_U32(v49, 4);
            v8 = FIELD_U32(v16, 4);
            ++v9;
            *(_DWORD *)v49 = *(_DWORD *)v16;
            FIELD_U32(v49, 4) = v8;
            *(float *)v16 = v6;
            FIELD_U32(v16, 4) = v7;
          }
          if ( v9 )
            goto LABEL_12;
          a1 = v49 + 8;
          v10 = sub_60892C6C(v13, v49, a3);
          result = sub_60892C6C(v49 + 8, a2, a3);
          if ( result )
          {
            a2 = v49;
            a1 = v13;
            if ( v10 != 1 )
              continue;
            return result;
          }
          if ( v10 )
            goto LABEL_16;
LABEL_12:
          if ( (int)(v49 - v13) >= (int)(a2 - v49) )
          {
            sub_60891FE4(v49 + 8, a2, a3);
            a2 = v49;
            a1 = v13;
            continue;
          }
          sub_60891FE4(v13, v49, a3);
          a1 = v49 + 8;
          goto LABEL_16;
        }
LABEL_51:
        result = v13 + 8;
        if ( v34 < *(float *)v5 || v34 <= *(float *)v5 && FIELD_U32(v13, 4) >= *(_DWORD *)(a2 - 4) )
        {
          if ( (int *)result == v5 )
            return result;
          result = v13 + 16;
          while ( 1 )
          {
            v35 = *(float *)(result - 8);
            if ( v34 >= v35 && (v34 > v35 || FIELD_U32(v13, 4) < *(_DWORD *)(result - 4)) )
              break;
            result += 8;
            if ( a2 == result )
              return result;
          }
          v36 = *(_DWORD *)(result - 8);
          v37 = *(_DWORD *)(result - 4);
          v38 = *(_DWORD *)(a2 - 4);
          *(_DWORD *)(result - 8) = *v5;
          *(_DWORD *)(result - 4) = v38;
          *v5 = v36;
          *(_DWORD *)(a2 - 4) = v37;
        }
        if ( (int *)result != v5 )
        {
          v39 = (float *)(a2 - 8);
          while ( 1 )
          {
            v43 = *(float *)v13;
            while ( v43 < *(float *)result || v43 <= *(float *)result && FIELD_U32(v13, 4) >= FIELD_U32(result, 4) )
              result += 8;
            v44 = *(v39 - 2);
            v45 = v39 - 2;
            v39 -= 2;
            if ( v43 >= v44 )
            {
              while ( v43 > v44 || FIELD_U32(v13, 4) < *((_DWORD *)v45 + 1) )
              {
                v44 = *(v45 - 2);
                v39 = v45 - 2;
                v45 -= 2;
                if ( v43 < v44 )
                  goto LABEL_65;
              }
              v39 = v45;
            }
LABEL_65:
            if ( result >= (unsigned int)v39 )
            {
              v13 = result;
              goto LABEL_18;
            }
            v40 = *(_DWORD *)result;
            v41 = FIELD_U32(result, 4);
            v42 = *((_DWORD *)v39 + 1);
            *(float *)result = *v39;
            FIELD_U32(result, 4) = v42;
            *(_DWORD *)v39 = v40;
            *((_DWORD *)v39 + 1) = v41;
            result += 8;
          }
        }
        return result;
    }
  }
}
