/* sub_60895580
 * address: 0x60895580   size: 1368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60895580(int a1, int a2)
{
  char v2; // r4
  float v3; // s2
  float v4; // s0
  float v5; // s0
  float v6; // s2
  int v7; // r1
  _BOOL4 v8; // r3
  float v9; // s4
  float v10; // s2
  int v11; // r12
  _BOOL4 v12; // r3
  _DWORD *v13; // r1
  float v14; // r2
  int v15; // r3
  int v16; // r6
  float v17; // s2
  _BOOL4 v18; // r7
  _DWORD *v19; // r2
  float v20; // r5
  int v21; // r3
  int v22; // r7
  int v23; // r3
  int v24; // r7
  int v25; // r5
  float v26; // s2
  float v27; // s0
  float v28; // s0
  _BOOL4 v29; // r7
  float v30; // r2
  float v31; // r5
  int v32; // r3
  int v33; // r7
  float v34; // r6
  int v35; // r5
  float v36; // r3
  int v37; // r7
  int v38; // r6
  float v39; // s2
  int v40; // r6
  float v41; // r1
  int v42; // r3
  int v43; // r6
  float v44; // r6
  int v45; // r5
  int v46; // r7
  int v47; // r6
  int v48; // r10
  int v49; // r9
  int v50; // r8
  _DWORD *v51; // r2
  int v52; // r4
  int v53; // r5
  float *v54; // r5
  char v55; // r7
  float v56; // s2
  int v57; // lr
  int v58; // r5
  int v59; // r7
  int v60; // r6
  int v61; // r2
  float v62; // s0
  int v63; // r4
  int v64; // r2
  int v65; // r3

  v2 = 1;
  switch ( (a2 - a1) >> 3 )
  {
    case 0:
    case 1:
      return v2 & 1;
    case 2:
      v3 = *(float *)(a2 - 8);
      v4 = *(float *)a1;
      if ( v3 >= 0.0 )
      {
        if ( v3 <= v4 )
          return v2 & 1;
      }
      else if ( v3 >= v4 )
      {
        return v2 & 1;
      }
      v13 = (_DWORD *)(a2 - 8);
      v14 = *(float *)a1;
      v15 = FIELD_U32(a1, 4);
      v16 = v13[1];
      *(_DWORD *)a1 = *v13;
      FIELD_U32(a1, 4) = v16;
      *(float *)v13 = v14;
      v13[1] = v15;
      return v2 & 1;
    case 3:
      v5 = FIELD_F32(a1, 8);
      v6 = *(float *)a1;
      v7 = a2 - 8;
      if ( v5 >= 0.0 )
        v8 = v5 > v6;
      else
        v8 = v5 < v6;
      v17 = *(float *)v7;
      if ( v5 >= 0.0 )
        v18 = v17 > v5;
      else
        v18 = v17 < v5;
      v19 = (_DWORD *)(a1 + 8);
      if ( v8 )
      {
        v20 = *(float *)a1;
        v21 = FIELD_U32(a1, 4);
        if ( v18 )
        {
          v22 = FIELD_U32(v7, 4);
          *(_DWORD *)a1 = *(_DWORD *)v7;
          FIELD_U32(a1, 4) = v22;
        }
        else
        {
          v38 = FIELD_U32(a1, 12);
          *(_DWORD *)a1 = *v19;
          FIELD_U32(a1, 4) = v38;
          *(float *)v19 = v20;
          FIELD_U32(a1, 12) = v21;
          v39 = *(float *)v7;
          if ( v20 >= 0.0 )
          {
            if ( v39 <= v20 )
              return v2 & 1;
          }
          else if ( v39 >= v20 )
          {
            return v2 & 1;
          }
          v46 = FIELD_U32(v7, 4);
          *v19 = *(_DWORD *)v7;
          FIELD_U32(a1, 12) = v46;
        }
        *(float *)v7 = v20;
        FIELD_U32(v7, 4) = v21;
      }
      else
      {
        if ( !v18 )
          return v2 & 1;
        v23 = *v19;
        v24 = FIELD_U32(a1, 12);
        v25 = FIELD_U32(v7, 4);
        *v19 = *(_DWORD *)v7;
        FIELD_U32(a1, 12) = v25;
        *(_DWORD *)v7 = v23;
        FIELD_U32(v7, 4) = v24;
        v26 = FIELD_F32(a1, 8);
        v27 = *(float *)a1;
        if ( v26 >= 0.0 )
        {
          if ( v26 <= v27 )
            return v2 & 1;
        }
        else if ( v26 >= v27 )
        {
          return v2 & 1;
        }
        v41 = *(float *)a1;
        v42 = FIELD_U32(a1, 4);
        v43 = FIELD_U32(a1, 12);
        *(_DWORD *)a1 = *v19;
        FIELD_U32(a1, 4) = v43;
        *(float *)v19 = v41;
        FIELD_U32(a1, 12) = v42;
      }
      return v2 & 1;
    case 4:
      sub_60894E9C(a1, a1 + 8, a1 + 16, a2 - 8);
      return v2 & 1;
    case 5:
      sub_60895138(a1, a1 + 8, a1 + 16, a1 + 24, a2 - 8);
      return v2 & 1;
    default:
      v9 = FIELD_F32(a1, 8);
      v10 = *(float *)a1;
      v11 = a1 + 16;
      if ( v9 >= 0.0 )
        v12 = v9 > v10;
      else
        v12 = v9 < v10;
      v28 = *(float *)v11;
      if ( v9 >= 0.0 )
        v29 = v28 > v9;
      else
        v29 = v28 < v9;
      LODWORD(v30) = a1 + 8;
      if ( v12 )
      {
        v31 = *(float *)a1;
        v32 = FIELD_U32(a1, 4);
        if ( v29 )
        {
          v30 = *(float *)v11;
          v33 = FIELD_U32(a1, 20);
          v28 = *(float *)a1;
          *(_DWORD *)a1 = *(_DWORD *)v11;
          FIELD_U32(a1, 4) = v33;
        }
        else
        {
          v40 = FIELD_U32(a1, 12);
          *(_DWORD *)a1 = *(_DWORD *)LODWORD(v30);
          FIELD_U32(a1, 4) = v40;
          *(float *)LODWORD(v30) = v31;
          FIELD_U32(a1, 12) = v32;
          if ( v31 >= 0.0 )
          {
            if ( v28 <= v31 )
              goto LABEL_51;
          }
          else if ( v28 >= v31 )
          {
            goto LABEL_51;
          }
          v47 = FIELD_U32(a1, 20);
          v28 = v31;
          *(_DWORD *)LODWORD(v30) = *(_DWORD *)v11;
          FIELD_U32(a1, 12) = v47;
        }
        *(float *)v11 = v31;
        FIELD_U32(a1, 20) = v32;
      }
      else
      {
        if ( !v29 )
          goto LABEL_51;
        v34 = *(float *)LODWORD(v30);
        v35 = FIELD_U32(a1, 12);
        v36 = *(float *)v11;
        v37 = FIELD_U32(a1, 20);
        *(_DWORD *)LODWORD(v30) = *(_DWORD *)v11;
        FIELD_U32(a1, 12) = v37;
        v28 = v34;
        *(float *)v11 = v34;
        FIELD_U32(a1, 20) = v35;
        if ( v36 >= 0.0 )
        {
          if ( v36 <= v10 )
            goto LABEL_51;
        }
        else if ( v36 >= v10 )
        {
          goto LABEL_51;
        }
        v44 = *(float *)a1;
        v45 = FIELD_U32(a1, 4);
        *(float *)a1 = v36;
        FIELD_U32(a1, 4) = v37;
        *(float *)LODWORD(v30) = v44;
        FIELD_U32(a1, 12) = v45;
      }
LABEL_51:
      v48 = a1 + 24;
      if ( a1 + 24 != a2 )
      {
        v49 = 0;
        v50 = 0;
        while ( 1 )
        {
          v56 = *(float *)v48;
          if ( *(float *)v48 >= 0.0 )
          {
            if ( v56 <= v28 )
              goto LABEL_59;
          }
          else if ( v56 >= v28 )
          {
            goto LABEL_59;
          }
          v57 = FIELD_U32(v48, 4);
          v58 = FIELD_U32(v11, 4);
          *(_DWORD *)v48 = *(_DWORD *)v11;
          FIELD_U32(v48, 4) = v58;
          v54 = (float *)a1;
          if ( v11 != a1 )
          {
            v53 = v49;
            if ( v56 >= 0.0 )
            {
              while ( 1 )
              {
                v51 = (_DWORD *)(a1 + v53);
                if ( v56 <= *(float *)(a1 + v53 + 8) )
                  break;
                v52 = v51[3];
                v53 -= 8;
                v51[4] = v51[2];
                v51[5] = v52;
                if ( v53 == -16 )
                {
                  v54 = (float *)a1;
                  goto LABEL_58;
                }
              }
              v54 = (float *)(v51 + 4);
            }
            else
            {
              v59 = a1 + v49;
              v60 = 0;
              v54 = (float *)v11;
              do
              {
                v61 = v59 + v60;
                v62 = *(float *)(v59 + v60 + 8);
                if ( v62 >= 0.0 )
                {
                  if ( v56 <= v62 )
                  {
                    v54 = (float *)(v11 + v60);
                    goto LABEL_58;
                  }
                }
                else if ( v56 >= v62 )
                {
                  goto LABEL_58;
                }
                v63 = FIELD_U32(v61, 8);
                v64 = FIELD_U32(v61, 12);
                v54 -= 2;
                *(_DWORD *)(v11 + v60) = v63;
                v65 = v11 + v60;
                v60 -= 8;
                FIELD_U32(v65, 4) = v64;
              }
              while ( v49 + v60 != -16 );
              v54 = (float *)a1;
            }
          }
LABEL_58:
          ++v50;
          v55 = 0;
          *v54 = v56;
          *((_DWORD *)v54 + 1) = v57;
          LOBYTE(v30) = v48 + 8 == a2;
          if ( v50 == 8 )
            goto LABEL_75;
LABEL_59:
          LOBYTE(v30) = v48 + 8;
          if ( v48 + 8 == a2 )
            break;
          v28 = *(float *)v48;
          v11 += 8;
          v49 += 8;
          v48 += 8;
        }
      }
      v55 = 1;
LABEL_75:
      v2 = LOBYTE(v30) | v55;
      return v2 & 1;
  }
}
