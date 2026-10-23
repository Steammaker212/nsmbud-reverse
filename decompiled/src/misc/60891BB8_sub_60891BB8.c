/* sub_60891BB8
 * address: 0x60891BB8   size: 1068   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60891BB8(int a1, float *a2)
{
  char v2; // r4
  float v3; // s2
  float *v4; // r1
  float v5; // r2
  int v6; // r3
  int v7; // r5
  float v8; // s0
  float *v9; // r12
  _BOOL4 v10; // r2
  _BOOL4 v11; // r3
  _DWORD *v12; // lr
  float v13; // r5
  int v14; // r3
  int v15; // r2
  float v16; // s2
  float v17; // s4
  float *v18; // r2
  _BOOL4 v19; // r4
  _BOOL4 v20; // r3
  float v21; // s0
  _DWORD *v22; // r5
  float v23; // lr
  int v24; // r12
  int v25; // r4
  int v26; // r1
  int v27; // r2
  int v28; // r5
  float v29; // s2
  float v30; // r1
  int v31; // r2
  int v32; // r6
  float v33; // r6
  int v34; // r4
  float v35; // r3
  int v36; // r12
  float v37; // r6
  int v38; // r4
  int v39; // r6
  int v40; // r1
  int v41; // r4
  int v42; // r4
  float *v43; // r4
  int v44; // r12
  int v45; // lr
  float *v46; // r5
  char v47; // r4
  float *v48; // r3
  float v49; // s2
  int v50; // r8
  int v51; // r6
  int v52; // r5
  _DWORD *v53; // r6
  float v54; // s0
  int v55; // r4

  v2 = 1;
  switch ( ((int)a2 - a1) >> 3 )
  {
    case 0:
    case 1:
      return v2 & 1;
    case 2:
      v3 = *(a2 - 2);
      if ( v3 <= *(float *)a1 && (v3 < *(float *)a1 || *((_DWORD *)a2 - 1) < FIELD_U32(a1, 4)) )
      {
        v4 = a2 - 2;
        v5 = *(float *)a1;
        v6 = FIELD_U32(a1, 4);
        v7 = *((_DWORD *)v4 + 1);
        *(float *)a1 = *v4;
        FIELD_U32(a1, 4) = v7;
        *v4 = v5;
        *((_DWORD *)v4 + 1) = v6;
      }
      return v2 & 1;
    case 3:
      v8 = FIELD_F32(a1, 8);
      v9 = a2 - 2;
      v10 = 0;
      v11 = 0;
      if ( v8 <= *(float *)a1 )
      {
        v11 = 1;
        if ( v8 >= *(float *)a1 )
          v11 = FIELD_U32(a1, 12) < FIELD_U32(a1, 4);
      }
      if ( *v9 <= v8 )
      {
        v10 = 1;
        if ( *v9 >= v8 )
          v10 = *((_DWORD *)a2 - 1) < FIELD_U32(a1, 12);
      }
      v12 = (_DWORD *)(a1 + 8);
      if ( v11 )
      {
        v13 = *(float *)a1;
        v14 = FIELD_U32(a1, 4);
        if ( v10 )
        {
          v15 = *((_DWORD *)a2 - 1);
          *(float *)a1 = *v9;
          FIELD_U32(a1, 4) = v15;
LABEL_40:
          *v9 = v13;
          *((_DWORD *)v9 + 1) = v14;
          return v2 & 1;
        }
        v39 = FIELD_U32(a1, 12);
        *(_DWORD *)a1 = *v12;
        FIELD_U32(a1, 4) = v39;
        *(float *)v12 = v13;
        FIELD_U32(a1, 12) = v14;
        if ( *v9 <= v13 && (*v9 < v13 || *((_DWORD *)a2 - 1) < v14) )
        {
          v40 = *((_DWORD *)a2 - 1);
          *v12 = *(_DWORD *)v9;
          FIELD_U32(a1, 12) = v40;
          goto LABEL_40;
        }
      }
      else if ( v10 )
      {
        v26 = *v12;
        v27 = FIELD_U32(a1, 12);
        v28 = *((_DWORD *)v9 + 1);
        *v12 = *(_DWORD *)v9;
        FIELD_U32(a1, 12) = v28;
        *(_DWORD *)v9 = v26;
        *((_DWORD *)v9 + 1) = v27;
        v29 = FIELD_F32(a1, 8);
        if ( v29 <= *(float *)a1 && (v29 < *(float *)a1 || FIELD_U32(a1, 12) < FIELD_U32(a1, 4)) )
        {
          v30 = *(float *)a1;
          v31 = FIELD_U32(a1, 4);
          v32 = FIELD_U32(a1, 12);
          *(_DWORD *)a1 = *v12;
          FIELD_U32(a1, 4) = v32;
          *(float *)v12 = v30;
          FIELD_U32(a1, 12) = v31;
        }
      }
      return v2 & 1;
    case 4:
      sub_60891658(a1, a1 + 8, a1 + 16, (int)(a2 - 2));
      return v2 & 1;
    case 5:
      sub_60891894((float *)a1, (float *)(a1 + 8), (float *)(a1 + 16), (float *)(a1 + 24), a2 - 2);
      return v2 & 1;
    default:
      v16 = *(float *)a1;
      v17 = FIELD_F32(a1, 8);
      v18 = (float *)(a1 + 16);
      v19 = 0;
      v20 = 0;
      if ( v17 <= *(float *)a1 )
      {
        v20 = 1;
        if ( v17 >= *(float *)a1 )
          v20 = FIELD_U32(a1, 12) < FIELD_U32(a1, 4);
      }
      v21 = *v18;
      if ( *v18 <= v17 )
      {
        v19 = 1;
        if ( *v18 >= v17 )
          v19 = FIELD_U32(a1, 20) < FIELD_U32(a1, 12);
      }
      v22 = (_DWORD *)(a1 + 8);
      if ( v20 )
      {
        v23 = *(float *)a1;
        v24 = FIELD_U32(a1, 4);
        if ( v19 )
        {
          v25 = FIELD_U32(a1, 20);
          v21 = *(float *)a1;
          *(float *)a1 = *v18;
          FIELD_U32(a1, 4) = v25;
LABEL_45:
          *v18 = v23;
          FIELD_U32(a1, 20) = v24;
          goto LABEL_46;
        }
        v41 = FIELD_U32(a1, 12);
        *(_DWORD *)a1 = *v22;
        FIELD_U32(a1, 4) = v41;
        *(float *)v22 = v23;
        FIELD_U32(a1, 12) = v24;
        if ( v21 <= v23 && (v21 < v23 || FIELD_U32(a1, 20) < v24) )
        {
          v42 = FIELD_U32(a1, 20);
          v21 = v23;
          *v22 = *(_DWORD *)v18;
          FIELD_U32(a1, 12) = v42;
          goto LABEL_45;
        }
      }
      else if ( v19 )
      {
        v33 = *(float *)v22;
        v34 = FIELD_U32(a1, 12);
        v35 = *v18;
        v36 = FIELD_U32(a1, 20);
        *v22 = *(_DWORD *)v18;
        FIELD_U32(a1, 12) = v36;
        v21 = v33;
        *v18 = v33;
        FIELD_U32(a1, 20) = v34;
        if ( v35 <= v16 && (v35 < v16 || v36 < FIELD_U32(a1, 4)) )
        {
          v37 = *(float *)a1;
          v38 = FIELD_U32(a1, 4);
          *(float *)a1 = v35;
          FIELD_U32(a1, 4) = v36;
          *(float *)v22 = v37;
          FIELD_U32(a1, 12) = v38;
        }
      }
LABEL_46:
      v43 = (float *)(a1 + 24);
      if ( (float *)(a1 + 24) == a2 )
      {
LABEL_63:
        v47 = 1;
      }
      else
      {
        v44 = 0;
        v45 = 0;
        while ( 1 )
        {
          v48 = v43;
          v49 = *v43;
          if ( *v43 <= v21 )
          {
            v50 = *((_DWORD *)v43 + 1);
            if ( *v43 < v21 || v50 < *((_DWORD *)v18 + 1) )
            {
              v51 = *((_DWORD *)v18 + 1);
              *v43 = *v18;
              *((_DWORD *)v43 + 1) = v51;
              v46 = (float *)a1;
              if ( v18 != (float *)a1 )
              {
                v52 = v44;
                do
                {
                  v53 = (_DWORD *)(a1 + v52);
                  v54 = *(float *)(a1 + v52 + 8);
                  if ( v49 > v54 )
                  {
                    v46 = v18;
                    goto LABEL_50;
                  }
                  if ( v49 >= v54 && v50 >= v53[3] )
                  {
                    v46 = (float *)(v53 + 4);
                    goto LABEL_50;
                  }
                  v55 = v53[3];
                  v52 -= 8;
                  v18 -= 2;
                  v53[4] = v53[2];
                  v53[5] = v55;
                }
                while ( v52 != -16 );
                v46 = (float *)a1;
              }
LABEL_50:
              ++v45;
              v47 = 0;
              *v46 = v49;
              *((_DWORD *)v46 + 1) = v50;
              LOBYTE(v18) = v48 + 2 == a2;
              if ( v45 == 8 )
                break;
            }
          }
          v43 = v48 + 2;
          if ( v48 + 2 == a2 )
            goto LABEL_63;
          v21 = *v48;
          v44 += 8;
          v18 = v48;
        }
      }
      v2 = (unsigned __int8)v18 | v47;
      return v2 & 1;
  }
}
