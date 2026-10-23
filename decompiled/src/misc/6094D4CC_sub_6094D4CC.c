/* sub_6094D4CC
 * address: 0x6094D4CC   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094D4CC(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, int a5, char a6)
{
  int result; // r0
  int v11; // lr
  int v12; // r9
  _WORD *v13; // r11
  int v14; // r3
  int v15; // r12
  int v16; // r0
  int v17; // lr
  int v18; // r10
  unsigned int v19; // r9
  __int16 v20; // r4
  __int16 v21; // r7
  int v22; // r2
  __int16 v23; // r4
  _WORD *v24; // r0
  bool v25; // cf
  __int16 v26; // r1
  __int16 v27; // r1
  int v28; // r3
  unsigned int v29; // r7
  _WORD *v30; // r2
  int v31; // r3
  int v32; // r4
  int v33; // r12
  unsigned int v34; // r0
  __int16 v35; // r7
  __int16 v36; // r1
  __int16 v37; // r0
  __int16 v38; // r0
  unsigned int v39; // r1
  signed int v40; // r2
  int v41; // r4
  int v42; // r11
  unsigned int v43; // r7
  int v44; // r1
  int v45; // r12
  _WORD *v46; // lr
  int v47; // r0
  __int16 v48; // r5
  __int16 v49; // r9
  unsigned int v50; // r5
  int v51; // r7
  __int16 v52; // r10
  __int16 v53; // r7
  unsigned int v54; // r8
  int v55; // r2
  int v56; // r11
  unsigned int v57; // r10
  int v58; // r0
  int v59; // r9
  __int16 v60; // r7
  int v61; // r1
  int v62; // lr
  _WORD *v63; // r4
  __int16 v64; // r0
  __int16 v65; // r0
  __int16 v66; // r5
  unsigned int v67; // r0
  int *v68; // lr
  int v69; // r4
  int v70; // r12
  __int16 v71; // r1
  _WORD *v72; // r7
  __int16 v73; // r0
  int v74; // r1
  int v75; // r2
  int v76; // r4
  unsigned int i; // r0
  int v78; // r1
  int v79; // r2
  unsigned int v80; // r0
  int v81; // r1
  int v82; // r1
  int v83; // r2
  int v84; // [sp+0h] [bp-58h]
  int v85; // [sp+4h] [bp-54h]
  int *v86; // [sp+8h] [bp-50h]
  int *v87; // [sp+8h] [bp-50h]
  int *v88; // [sp+8h] [bp-50h]
  _DWORD *v89; // [sp+Ch] [bp-4Ch]
  int v90; // [sp+14h] [bp-44h]
  int v91; // [sp+18h] [bp-40h]
  int v92; // [sp+1Ch] [bp-3Ch]
  unsigned int v93; // [sp+20h] [bp-38h]
  int v94; // [sp+24h] [bp-34h]
  unsigned int v95; // [sp+24h] [bp-34h]
  unsigned int v96; // [sp+24h] [bp-34h]
  unsigned int v97; // [sp+24h] [bp-34h]
  int v98; // [sp+28h] [bp-30h] BYREF
  int v99; // [sp+2Ch] [bp-2Ch]
  int v100; // [sp+30h] [bp-28h]

  result = *a2;
  if ( *a2 )
  {
    result = dword_60CC73E8(result);
    v11 = result;
  }
  else
  {
    v11 = 0;
  }
  v12 = a2[1];
  v93 = a4;
  if ( a5 )
  {
    v13 = (_WORD *)(v11 + v12);
    if ( a5 == 1 )
    {
      v87 = a2;
      if ( a3 )
      {
        v31 = 0;
        v32 = 0;
        v33 = 1 << a6;
        v34 = a4 - 1;
        v35 = a4 * a3;
        v36 = v34 * a3;
        v95 = v34;
        do
        {
          *v13 = v35;
          v13[1] = v32;
          v13[2] = v35 + 1;
          v31 += 6;
          v25 = v32 + v33 >= a3;
          v37 = (v32 + v33) % a3 + v36;
          v13[3] = v37;
          v13[4] = v37;
          v38 = v36 + v32;
          v32 += v33;
          v13[5] = v38;
          v13 += 6;
        }
        while ( !v25 );
        v39 = v95;
      }
      else
      {
        v39 = a4 - 1;
        v31 = 0;
      }
      if ( v39 )
      {
        v55 = 1 << a6;
        if ( a3 )
        {
          v56 = 0;
          v57 = 0;
          v97 = v39;
          v58 = v11 + v12;
          v59 = ~v55;
          v92 = v58 + 4;
          v91 = ~v39;
          do
          {
            v60 = v57 * a3;
            v57 += v55;
            v61 = v56;
            v62 = 0;
            v63 = (_WORD *)(v92 + 2 * v31);
            v64 = v91;
            if ( v59 > v91 )
              v64 = v59;
            v65 = a3 * ~v64;
            do
            {
              *(v63 - 2) = v61;
              v31 += 4;
              v25 = v62 + v55 >= a3;
              *(v63 - 1) = (v62 + v55) % a3 + v60;
              v66 = v65 + v62;
              *v63 = v61;
              v61 += v55;
              v62 += v55;
              v63[1] = v66;
              v63 += 4;
            }
            while ( !v25 );
            v59 -= v55;
            v56 += v55 * a3;
          }
          while ( v57 < v97 );
        }
        else
        {
          for ( i = 0; i < v39; i += v55 )
            ;
        }
      }
      v76 = 1;
      v78 = v87[1];
      v79 = v87[2];
      v98 = *v87;
      v99 = v78;
      v100 = v79;
      result = sub_60919D48(a1, &v98, 1, v31);
    }
    else
    {
      if ( a5 != 2 )
        return result;
      v14 = 0;
      v86 = a2;
      if ( a4 )
      {
        v15 = 1 << a6;
        if ( a3 )
        {
          v16 = v11 + v12;
          v17 = -a4;
          v18 = ~v15;
          v14 = 0;
          v19 = 0;
          v94 = v16 + 2;
          do
          {
            v20 = v17;
            v21 = v19 * a3;
            v19 += v15;
            v22 = 0;
            if ( v18 > v17 )
              v20 = v18;
            v23 = a3 * ~v20;
            v24 = (_WORD *)(v94 + 2 * v14);
            do
            {
              v14 += 2;
              v25 = v22 + v15 >= a3;
              *(v24 - 1) = (v22 + v15) % a3 + v21;
              v26 = v23 + v22;
              v22 += v15;
              *v24 = v26;
              v24 += 2;
            }
            while ( !v25 );
            LOWORD(a4) = v93;
            v18 -= v15;
          }
          while ( v19 < v93 );
        }
        else
        {
          v14 = 0;
          v80 = 0;
          do
            v80 += v15;
          while ( v80 < a4 );
        }
      }
      v81 = v14;
      v13[v81] = a4 * a3;
      v13[v81 + 1] = a4 * a3 + 1;
      v82 = v86[1];
      v83 = v86[2];
      v98 = *v86;
      v99 = v82;
      v100 = v83;
      result = sub_60919D48(a1, &v98, 1, v14 + 2);
      v76 = 0;
    }
  }
  else
  {
    if ( a3 )
    {
      v27 = a4 * a3;
      v28 = 0;
      v29 = 0;
      v30 = (_WORD *)(v11 + v12 + 2);
      do
      {
        *(v30 - 1) = v27;
        *v30 = v29;
        v29 += 1 << a6;
        v28 += 3;
        v30[1] = v29 % a3;
        v30 += 3;
      }
      while ( v29 < a3 );
    }
    else
    {
      v28 = 0;
    }
    v89 = a1;
    v88 = a2;
    v84 = v12;
    v85 = v11;
    v40 = v93 - 1;
    if ( v93 != 1 )
    {
      v41 = 1 << a6;
      if ( a3 )
      {
        v42 = 0;
        v43 = 0;
        v90 = v11 + v12 + 6;
        v44 = ~v41;
        do
        {
          v45 = v42;
          v46 = (_WORD *)(v90 + 2 * v28);
          v47 = v43 * a3;
          v48 = v43 + v41;
          v96 = v43 + v41;
          if ( v40 < (int)(v43 + v41) )
            v48 = v40;
          v49 = v48 * a3;
          v50 = 0;
          v51 = -v93;
          if ( v44 > (signed int)-v93 )
            LOWORD(v51) = v44;
          v52 = a3 * ~(_WORD)v51;
          do
          {
            v53 = v52 + v50;
            v50 += v41;
            *(v46 - 3) = v45;
            v45 += v41;
            v28 += 6;
            *(v46 - 2) = v53;
            v54 = v50 % a3 + v47;
            *(v46 - 1) = v54;
            *v46 = v53;
            v46[1] = v50 % a3 + v49;
            v46[2] = v54;
            v46 += 6;
          }
          while ( v50 < a3 );
          v40 = v93 - 1;
          v43 = v96;
          v44 -= v41;
          v42 += v41 * a3;
        }
        while ( v96 < v93 - 1 );
      }
      else
      {
        v67 = 0;
        do
          v67 += v41;
        while ( v67 < v40 );
      }
    }
    if ( a3 )
    {
      a1 = v89;
      v68 = v88;
      v69 = 0;
      v70 = 1 << a6;
      v71 = v40 * a3;
      v72 = (_WORD *)(v85 + v84 + 2 * v28 + 4);
      do
      {
        *(v72 - 2) = v93 * a3 + 1;
        v28 += 3;
        v25 = v69 + v70 >= a3;
        *(v72 - 1) = (v69 + v70) % a3 + v71;
        v73 = v71 + v69;
        v69 += v70;
        *v72 = v73;
        v72 += 3;
      }
      while ( !v25 );
    }
    else
    {
      a1 = v89;
      v68 = v88;
    }
    v74 = v68[1];
    v75 = v68[2];
    v98 = *v68;
    v99 = v74;
    v100 = v75;
    result = sub_60919D48(a1, &v98, 1, v28);
    v76 = 4;
  }
  a1[2] = v76;
  return result;
}
