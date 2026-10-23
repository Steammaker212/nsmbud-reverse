/* sub_6094EDDC
 * address: 0x6094EDDC   size: 2036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094EDDC(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6, char a7)
{
  __int16 v9; // r10
  int result; // r0
  unsigned int v13; // r1
  int v14; // lr
  int v15; // r12
  int v16; // r3
  unsigned int v17; // r7
  _WORD *v18; // r4
  __int16 v19; // r5
  int v20; // r3
  unsigned int v21; // r7
  _WORD *v22; // r4
  __int16 v23; // r5
  int v24; // r0
  int v25; // lr
  unsigned int v26; // r9
  int v27; // r8
  _WORD *v28; // r4
  unsigned int v29; // r5
  int v30; // r0
  __int16 v31; // r2
  int v32; // r2
  int v33; // r0
  __int16 v34; // r10
  __int16 v35; // r8
  unsigned int v36; // r12
  _WORD *v37; // r7
  __int16 v38; // r5
  __int16 v39; // r0
  unsigned int v40; // r0
  unsigned int v41; // lr
  int v42; // r10
  _WORD *v43; // r5
  int v44; // r7
  __int16 v45; // r4
  unsigned int v46; // r0
  __int16 v47; // r12
  __int16 v48; // r2
  __int16 v49; // r7
  unsigned int v50; // r0
  int v51; // lr
  unsigned int v52; // r10
  __int16 v53; // r11
  __int16 v54; // r8
  _WORD *v55; // r4
  unsigned int v56; // r7
  int v57; // r5
  __int16 v58; // r12
  __int16 v59; // r0
  unsigned int v60; // r0
  __int16 v61; // r0
  int v62; // r5
  __int16 v63; // r10
  __int16 v64; // lr
  unsigned int v65; // r2
  int v66; // r7
  unsigned int v67; // r9
  __int16 v68; // r4
  _WORD *v69; // r11
  __int16 v70; // r0
  int v71; // r5
  __int16 v72; // r7
  unsigned int v73; // r0
  __int16 v74; // lr
  int v75; // r5
  __int16 v76; // r0
  int v77; // r7
  __int16 v78; // r9
  unsigned int v79; // r12
  __int16 v80; // r11
  __int16 v81; // r10
  int v82; // r2
  _WORD *v83; // r4
  __int16 v84; // r8
  __int16 v85; // r7
  __int16 v86; // r0
  unsigned int v87; // r0
  int *v88; // r12
  unsigned int v89; // r5
  _WORD *v90; // r7
  __int16 v91; // r0
  __int16 v92; // r2
  __int16 v93; // r4
  int v94; // r1
  int v95; // r2
  int v96; // r4
  _DWORD *v97; // r5
  unsigned int v98; // r0
  int *v99; // r12
  unsigned int v100; // r5
  _WORD *v101; // r7
  __int16 v102; // r0
  __int16 v103; // r2
  __int16 v104; // r4
  int v105; // r1
  int v106; // r2
  int v107; // [sp+4h] [bp-6Ch]
  int v108; // [sp+4h] [bp-6Ch]
  int *v109; // [sp+8h] [bp-68h]
  int *v110; // [sp+8h] [bp-68h]
  _DWORD *v111; // [sp+Ch] [bp-64h]
  _DWORD *v112; // [sp+Ch] [bp-64h]
  int v113; // [sp+10h] [bp-60h]
  int v114; // [sp+10h] [bp-60h]
  int v115; // [sp+14h] [bp-5Ch]
  int v116; // [sp+14h] [bp-5Ch]
  int v117; // [sp+18h] [bp-58h]
  int v118; // [sp+1Ch] [bp-54h]
  int v119; // [sp+24h] [bp-4Ch]
  int v120; // [sp+28h] [bp-48h]
  unsigned int v121; // [sp+30h] [bp-40h]
  int v122; // [sp+34h] [bp-3Ch]
  int v123; // [sp+34h] [bp-3Ch]
  __int16 v124; // [sp+34h] [bp-3Ch]
  int v125; // [sp+38h] [bp-38h]
  __int16 v126; // [sp+38h] [bp-38h]
  int v127; // [sp+38h] [bp-38h]
  unsigned int v128; // [sp+3Ch] [bp-34h]
  int v129; // [sp+40h] [bp-30h] BYREF
  int v130; // [sp+44h] [bp-2Ch]
  int v131; // [sp+48h] [bp-28h]

  v9 = a5;
  if ( *a2 )
    result = dword_60CC73E8(*a2);
  else
    result = 0;
  v121 = a5 - (1 << a7);
  v117 = v121 * a3;
  v118 = a3 << a7;
  v13 = 1 << a7;
  v14 = a2[1];
  v128 = a4;
  v15 = (a3 << a7) - a3 + 1;
  if ( a6 )
  {
    if ( a6 != 1 )
      return result;
    v107 = (a4 + (1 << a7)) * a3;
    v111 = a1;
    if ( a3 )
    {
      v16 = 0;
      v17 = 0;
      v18 = (_WORD *)(result + v14 + 2);
      do
      {
        v19 = v15 + v17;
        v17 += v13;
        v16 += 2;
        *(v18 - 1) = v19;
        *v18 = 0;
        v18 += 2;
      }
      while ( v17 < a3 );
    }
    else
    {
      v16 = 0;
    }
    v109 = a2;
    v115 = result;
    v113 = v14;
    if ( v13 < a5 )
    {
      if ( a3 )
      {
        v24 = result + v14;
        v25 = 1;
        v26 = 1 << a7;
        v27 = v24 + 4;
        do
        {
          v28 = (_WORD *)(v27 + 2 * v16);
          v29 = 0;
          v30 = v25;
          do
          {
            v29 += v13;
            v16 += 4;
            *(v28 - 2) = v118 + a3 * (v13 - 1) + v30;
            v31 = v118 - a3 + v30;
            v30 += v13;
            *(v28 - 1) = v31;
            *v28 = v31;
            v28[1] = v29 % a3 + v15 + (v26 - v13) * a3;
            v28 += 4;
          }
          while ( v29 < a3 );
          v26 += v13;
          v25 += v13 * a3;
        }
        while ( v26 < a5 );
      }
      else
      {
        v40 = 1 << a7;
        do
          v40 += v13;
        while ( v40 < a5 );
      }
    }
    v126 = v15 + v117;
    if ( a3 )
    {
      v41 = 0;
      v42 = 1;
      do
      {
        v43 = (_WORD *)(v115 + v113 + 4 + 2 * v16);
        v44 = v42;
        v45 = v126 + v41 * a3;
        v41 += v13;
        v46 = 0;
        do
        {
          v47 = v118 + a3 * (a5 - 1) + v44;
          v48 = v118 + a3 * (a5 - 1 - v13) + v44;
          v46 += v13;
          v44 += v13;
          v16 += 4;
          *(v43 - 2) = v47;
          *(v43 - 1) = v48;
          *v43 = v48;
          v43[1] = v46 % a3 + v45;
          v43 += 4;
        }
        while ( v46 < a3 );
        v49 = v128;
        v42 += v13 * a3;
      }
      while ( v41 <= v128 );
    }
    else
    {
      v49 = v128;
      v50 = 0;
      do
        v50 += v13;
      while ( v50 <= v128 );
    }
    if ( v13 < v121 )
    {
      if ( a3 )
      {
        v51 = 1;
        v52 = 1 << a7;
        v53 = v118 + a3 * (a5 + v49 - 1);
        v54 = v118 + a3 * (v13 + a5 + v49 - 1);
        do
        {
          v55 = (_WORD *)(v115 + v113 + 4 + 2 * v16);
          v56 = 0;
          v57 = v51;
          do
          {
            v58 = v54 + v57;
            v59 = v53 + v57;
            v56 += v13;
            v57 += v13;
            v16 += 4;
            *(v55 - 2) = v58;
            *(v55 - 1) = v59;
            *v55 = v59;
            v55[1] = v56 % a3 + v126 + v107 + (v52 - v13) * a3;
            v55 += 4;
          }
          while ( v56 < a3 );
          v52 += v13;
          v51 += v13 * a3;
        }
        while ( v52 < v121 );
      }
      else
      {
        v87 = 1 << a7;
        do
          v87 += v13;
        while ( v87 < v121 );
      }
    }
    if ( a3 )
    {
      v88 = v109;
      v89 = 0;
      v90 = (_WORD *)(v115 + v113 + 2 * v16 + 6);
      v91 = v107 + ((_WORD)a3 << a7) - a3 + 1 + 2 * v117;
      v92 = v91 - v118;
      do
      {
        v93 = v92 + v89;
        v89 += v13;
        *(v90 - 3) = v91;
        v16 += 4;
        *(v90 - 2) = v93;
        *(v90 - 1) = v93;
        *v90 = v89 % a3 + v92;
        v90 += 4;
      }
      while ( v89 < a3 );
    }
    else
    {
      v88 = v109;
    }
    v94 = v88[1];
    v95 = v88[2];
    v96 = 1;
    v129 = *v88;
    v130 = v94;
    v131 = v95;
    v97 = v111;
    result = sub_60919D48(v111, &v129, 1, v16);
  }
  else
  {
    v112 = a1;
    v108 = (a4 + (1 << a7)) * a3;
    if ( a3 )
    {
      v20 = 0;
      v21 = 0;
      v22 = (_WORD *)(result + v14 + 2);
      do
      {
        v23 = v15 + v21;
        v21 += v13;
        v20 += 3;
        *(v22 - 1) = v23;
        *v22 = 0;
        v22[1] = v21 % a3 + v15;
        v22 += 3;
      }
      while ( v21 < a3 );
    }
    else
    {
      v20 = 0;
    }
    v110 = a2;
    v116 = result;
    v114 = v14;
    if ( v13 < a5 )
    {
      if ( a3 )
      {
        v32 = 1;
        v119 = result + v14 + 6;
        v33 = 1 << a7;
        do
        {
          v34 = v15 + v33 * a3;
          v122 = v33;
          v125 = v32;
          v35 = v15 + (v33 - v13) * a3;
          v36 = 0;
          v37 = (_WORD *)(v119 + 2 * v20);
          do
          {
            v36 += v13;
            v20 += 6;
            *(v37 - 3) = v118 + a3 * (v13 - 1) + v32;
            v38 = v118 - a3 + v32;
            v32 += v13;
            *(v37 - 2) = v38;
            v39 = v36 % a3 + v34;
            *(v37 - 1) = v39;
            *v37 = v39;
            v37[1] = v38;
            v37[2] = v36 % a3 + v35;
            v37 += 6;
          }
          while ( v36 < a3 );
          v9 = a5;
          v15 = (a3 << a7) - a3 + 1;
          v32 = v125 + v13 * a3;
          v33 = v122 + v13;
        }
        while ( v122 + v13 < a5 );
      }
      else
      {
        v60 = 1 << a7;
        do
          v60 += v13;
        while ( v60 < a5 );
      }
    }
    v120 = v15 + v117;
    if ( a3 )
    {
      v61 = v9 - 1;
      v62 = 1;
      v63 = v118 + a3 * (v9 - 1);
      v64 = v118 + a3 * (v61 - v13);
      v65 = 0;
      do
      {
        v66 = v62;
        v67 = 0;
        v123 = v62;
        v68 = v120 + v65 * a3;
        v65 += v13;
        v69 = (_WORD *)(v116 + v114 + 6 + 2 * v20);
        do
        {
          v67 += v13;
          v20 += 6;
          *(v69 - 3) = v63 + v66;
          v70 = v64 + v66;
          v66 += v13;
          *(v69 - 2) = v70;
          v71 = v67 % a3 + v120 + v65 * a3;
          *(v69 - 1) = v71;
          *v69 = v71;
          v69[1] = v70;
          v69[2] = v67 % a3 + v68;
          v69 += 6;
        }
        while ( v67 < a3 );
        v72 = v128;
        v62 = v123 + v13 * a3;
      }
      while ( v65 <= v128 );
    }
    else
    {
      v72 = v128;
      v73 = 0;
      do
        v73 += v13;
      while ( v73 <= v128 );
    }
    if ( v13 < v121 )
    {
      if ( a3 )
      {
        v124 = v120 + v108;
        v74 = v118 + a3 * (a5 + v72 - 1);
        v75 = 1;
        v76 = v13 + a5 + v72;
        v77 = 1 << a7;
        v78 = v118 + a3 * (v76 - 1);
        do
        {
          v79 = 0;
          v127 = v77;
          v80 = v124 + (v77 - v13) * a3;
          v81 = v124 + v77 * a3;
          v82 = v75;
          v83 = (_WORD *)(v116 + v114 + 6 + 2 * v20);
          do
          {
            v79 += v13;
            v84 = v78 + v82;
            v85 = v74 + v82;
            v82 += v13;
            v20 += 6;
            *(v83 - 3) = v84;
            *(v83 - 2) = v85;
            v86 = v79 % a3 + v81;
            *(v83 - 1) = v86;
            *v83 = v86;
            v83[1] = v85;
            v83[2] = v79 % a3 + v80;
            v83 += 6;
          }
          while ( v79 < a3 );
          v75 += v13 * a3;
          v77 = v127 + v13;
        }
        while ( v127 + v13 < v121 );
      }
      else
      {
        v98 = 1 << a7;
        do
          v98 += v13;
        while ( v98 < v121 );
      }
    }
    if ( a3 )
    {
      v99 = v110;
      v100 = 0;
      v101 = (_WORD *)(v116 + v114 + 2 * v20 + 4);
      v102 = v108 + ((_WORD)a3 << a7) - a3 + 1 + 2 * v117;
      v103 = v102 - v118;
      do
      {
        v104 = v103 + v100;
        v100 += v13;
        *(v101 - 2) = v102;
        v20 += 3;
        *(v101 - 1) = v104;
        *v101 = v100 % a3 + v103;
        v101 += 3;
      }
      while ( v100 < a3 );
    }
    else
    {
      v99 = v110;
    }
    v105 = v99[1];
    v106 = v99[2];
    v129 = *v99;
    v130 = v105;
    v131 = v106;
    v97 = v112;
    result = sub_60919D48(v112, &v129, 1, v20);
    v96 = 4;
  }
  v97[2] = v96;
  return result;
}
