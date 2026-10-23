/* sub_6094DDDC
 * address: 0x6094DDDC   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094DDDC(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, int a5, char a6)
{
  int result; // r0
  unsigned int v11; // lr
  unsigned int v12; // r8
  int v13; // r10
  int v14; // r12
  int v15; // r0
  int v16; // r11
  unsigned int v17; // r10
  int v18; // r0
  __int16 v19; // r3
  int v20; // r4
  _WORD *v21; // r7
  __int16 v22; // r1
  bool v23; // cf
  __int16 v24; // r2
  _WORD *v25; // r7
  int v26; // r3
  int v27; // r4
  int v28; // r0
  _WORD *v29; // r5
  int v30; // r3
  int v31; // r4
  __int16 v32; // r1
  int v33; // lr
  __int16 v34; // r0
  unsigned int v35; // r1
  int v36; // r2
  int v37; // r3
  _DWORD *v38; // r5
  int v39; // r4
  int v40; // r1
  int v41; // r10
  int v42; // r2
  int v43; // r7
  int v44; // r0
  unsigned int v45; // r1
  __int16 v46; // r12
  int v47; // r1
  int v48; // lr
  __int16 v49; // r8
  __int16 v50; // r1
  _WORD *v51; // r0
  __int16 v52; // r2
  unsigned int v53; // r11
  __int16 v54; // r5
  int v55; // r2
  int v56; // r11
  unsigned int v57; // r9
  int v58; // r0
  int v59; // r10
  __int16 v60; // r1
  __int16 v61; // r8
  int v62; // r7
  int v63; // r12
  _WORD *v64; // r0
  __int16 v65; // r1
  __int16 v66; // r5
  unsigned int i; // r0
  int v68; // r1
  int v69; // r2
  unsigned int j; // r0
  int v71; // r1
  int v72; // r2
  int *v73; // [sp+4h] [bp-54h]
  int *v74; // [sp+4h] [bp-54h]
  int *v75; // [sp+4h] [bp-54h]
  _DWORD *v76; // [sp+8h] [bp-50h]
  int v77; // [sp+Ch] [bp-4Ch]
  int v78; // [sp+10h] [bp-48h]
  unsigned int v79; // [sp+18h] [bp-40h]
  int v80; // [sp+1Ch] [bp-3Ch]
  int v81; // [sp+1Ch] [bp-3Ch]
  int v82; // [sp+1Ch] [bp-3Ch]
  int v83; // [sp+20h] [bp-38h]
  unsigned int v84; // [sp+24h] [bp-34h]
  int v85; // [sp+24h] [bp-34h]
  int v86; // [sp+28h] [bp-30h] BYREF
  int v87; // [sp+2Ch] [bp-2Ch]
  int v88; // [sp+30h] [bp-28h]

  if ( *a2 )
    result = dword_60CC73E8(*a2);
  else
    result = 0;
  v11 = a4 >> 1;
  v12 = (a4 >> 1) + 1;
  v84 = a4 >> 1;
  v13 = result + a2[1];
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v76 = a1;
      v74 = a2;
      if ( a3 )
      {
        v29 = (_WORD *)(v13 + 4);
        v30 = 0;
        v31 = 0;
        v32 = v11 * a3;
        v33 = 1 << a6;
        do
        {
          *(v29 - 2) = v12 * a3;
          *(v29 - 1) = v31;
          v30 += 4;
          v23 = v31 + v33 >= a3;
          *v29 = (v31 + v33) % a3 + v32;
          v34 = v32 + v31;
          v31 += v33;
          v29[1] = v34;
          v29 += 4;
        }
        while ( !v23 );
      }
      else
      {
        v30 = 0;
      }
      if ( v84 )
      {
        v55 = 1 << a6;
        if ( a3 )
        {
          v56 = 0;
          v57 = 0;
          v58 = v13 + 4;
          v59 = ~v55;
          v82 = v58;
          do
          {
            v60 = ~(_WORD)v84;
            v61 = v57 * a3;
            v57 += v55;
            v62 = v56;
            v63 = 0;
            v64 = (_WORD *)(v82 + 2 * v30);
            if ( v59 > (int)~v84 )
              v60 = v59;
            v65 = a3 * ~v60;
            do
            {
              *(v64 - 2) = v62;
              v30 += 4;
              v23 = v63 + v55 >= a3;
              *(v64 - 1) = (v63 + v55) % a3 + v61;
              v66 = v65 + v63;
              *v64 = v62;
              v62 += v55;
              v63 += v55;
              v64[1] = v66;
              v64 += 4;
            }
            while ( !v23 );
            v59 -= v55;
            v56 += v55 * a3;
          }
          while ( v57 < v84 );
        }
        else
        {
          for ( i = 0; i < v84; i += v55 )
            ;
        }
      }
      v39 = 1;
      v68 = v74[1];
      v69 = v74[2];
      v86 = *v74;
      v87 = v68;
      v88 = v69;
      v38 = v76;
      result = sub_60919D48(v76, &v86, 1, v30);
    }
    else
    {
      if ( a5 != 2 )
        return result;
      v73 = a2;
      v80 = result + a2[1];
      v14 = 1 << a6;
      if ( a3 )
      {
        v15 = v13 + 2;
        v16 = ~v14;
        v17 = 0;
        v85 = v15;
        v18 = 0;
        do
        {
          v19 = v17 * a3;
          v17 += v14;
          v20 = 0;
          v21 = (_WORD *)(v85 + 2 * v18);
          v22 = ~(_WORD)v11;
          if ( v16 > (int)~v11 )
            v22 = v16;
          do
          {
            v18 += 2;
            v23 = v20 + v14 >= a3;
            *(v21 - 1) = (v20 + v14) % a3 + v19;
            v24 = a3 * ~v22 + v20;
            v20 += v14;
            *v21 = v24;
            v21 += 2;
          }
          while ( !v23 );
          v16 -= v14;
        }
        while ( v17 < v12 );
      }
      else
      {
        v18 = 0;
        v35 = 0;
        do
          v35 += v14;
        while ( v35 < v12 );
      }
      *(_WORD *)(v80 + 2 * v18) = v12 * a3;
      v36 = v73[1];
      v37 = v73[2];
      v86 = *v73;
      v87 = v36;
      v88 = v37;
      v38 = a1;
      result = sub_60919D48(a1, &v86, 1, v18 + 1);
      v39 = 0;
    }
  }
  else
  {
    if ( a3 )
    {
      v25 = (_WORD *)(v13 + 2);
      v26 = 0;
      v27 = 0;
      v28 = 1 << a6;
      do
      {
        *(v25 - 1) = v12 * a3;
        v26 += 3;
        v23 = v27 + v28 >= a3;
        *v25 = (v27 + v28) % a3;
        v25[1] = v27;
        v25 += 3;
        v27 += v28;
      }
      while ( !v23 );
    }
    else
    {
      v26 = 0;
    }
    v75 = a2;
    if ( v11 )
    {
      v40 = v13;
      v41 = 1 << a6;
      if ( a3 )
      {
        v42 = ~v41;
        v43 = 0;
        v44 = v40 + 6;
        v45 = 0;
        v78 = v44;
        v77 = ~v11;
        do
        {
          v46 = v45 * a3;
          v47 = v45 + v41;
          v83 = v42;
          v81 = v43;
          v79 = v47;
          if ( (int)v11 < v47 )
            LOWORD(v47) = v11;
          v48 = 0;
          v49 = v47 * a3;
          v50 = v77;
          v51 = (_WORD *)(v78 + 2 * v26);
          if ( v42 > v77 )
            v50 = v42;
          do
          {
            v52 = a3 * ~v50 + v48;
            *(v51 - 3) = v43;
            v43 += v41;
            v26 += 6;
            v53 = (v48 + v41) / a3;
            v23 = v48 + v41 >= a3;
            v48 += v41;
            v54 = v48 - v53 * a3;
            *(v51 - 2) = v54 + v46;
            *(v51 - 1) = v52;
            *v51 = v52;
            v51[1] = v54 + v46;
            v51[2] = v54 + v49;
            v51 += 6;
          }
          while ( !v23 );
          v11 = v84;
          v45 = v79;
          v42 = v83 - v41;
          v43 = v81 + v41 * a3;
        }
        while ( v79 < v84 );
      }
      else
      {
        for ( j = 0; j < v11; j += v41 )
          ;
      }
    }
    v71 = v75[1];
    v72 = v75[2];
    v86 = *v75;
    v87 = v71;
    v88 = v72;
    v38 = a1;
    result = sub_60919D48(a1, &v86, 1, v26);
    v39 = 4;
  }
  v38[2] = v39;
  return result;
}
