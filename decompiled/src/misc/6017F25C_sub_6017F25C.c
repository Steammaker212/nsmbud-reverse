/* sub_6017F25C
 * address: 0x6017F25C   size: 3800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017F25C(int a1, _DWORD *a2, int *a3, unsigned int a4)
{
  int *v5; // r11
  int v7; // r4
  int v8; // r1
  int v9; // r0
  bool v10; // cc
  char *v11; // r1
  int v12; // r4
  int v13; // r1
  int v14; // r2
  char *v15; // r2
  int v16; // r4
  int v17; // r0
  int v18; // r1
  char *v19; // r1
  bool v20; // nf
  int v21; // r4
  unsigned int v22; // r0
  unsigned int v23; // r1
  int v24; // r8
  int v25; // r4
  int v26; // r0
  int v27; // r1
  char *v28; // r1
  int v29; // r4
  int v30; // r0
  int v31; // r1
  char *v32; // r1
  int v33; // r4
  int v34; // r0
  int v35; // r1
  char *v36; // r1
  int v37; // r11
  unsigned int v38; // r4
  int v39; // r1
  _DWORD *v40; // r7
  int v41; // r2
  char *v42; // r1
  int v43; // r0
  int v44; // r11
  int v45; // r0
  signed int v46; // r4
  int v47; // r4
  int v48; // r1
  int v49; // r0
  char *v50; // r1
  int v51; // r0
  int v52; // r1
  char *v53; // r1
  unsigned int v54; // r1
  unsigned int v55; // r1
  int v56; // r10
  int v57; // r4
  int v58; // r0
  int v59; // r1
  char *v60; // r1
  int v61; // r4
  int v62; // r0
  int v63; // r1
  char *v64; // r1
  int v65; // r4
  int v66; // r0
  int v67; // r1
  char *v68; // r1
  int v69; // r11
  unsigned int v70; // r4
  int v71; // r1
  _DWORD *v72; // r8
  int v73; // r2
  char *v74; // r1
  int v75; // r0
  int v76; // r4
  int v77; // r0
  signed int v78; // r8
  int v79; // r4
  int v80; // r2
  char *v81; // r0
  int v82; // r0
  int v83; // r1
  char *v84; // r1
  int v85; // r4
  int v86; // r0
  int v87; // r1
  char *v88; // r1
  int v89; // r1
  int v90; // r4
  int v91; // r0
  int v92; // r1
  char *v93; // r1
  int v94; // r4
  int v95; // r0
  int v96; // r1
  char *v97; // r1
  int v98; // r1
  int v99; // r2
  char *v100; // r0
  unsigned int v101; // r1
  unsigned int v102; // r0
  int v103; // r0
  int result; // r0
  unsigned int v105; // [sp+8h] [bp-70h]
  unsigned int v106; // [sp+28h] [bp-50h]
  unsigned int v107; // [sp+2Ch] [bp-4Ch]
  unsigned int v108; // [sp+30h] [bp-48h]
  unsigned int v109; // [sp+34h] [bp-44h]
  unsigned int v110; // [sp+38h] [bp-40h]
  int v111; // [sp+38h] [bp-40h]
  int *v112; // [sp+3Ch] [bp-3Ch]
  int v114; // [sp+44h] [bp-34h]
  int (**v115)(); // [sp+4Ch] [bp-2Ch] BYREF
  char *v116; // [sp+50h] [bp-28h]

  v5 = a3;
  v7 = *a3;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v8 = 0;
  v9 = a2[1];
  while ( *(_BYTE *)(v9 + v8) )
  {
    if ( !*(_BYTE *)(v9 + v8 + 1) )
    {
      ++v8;
      break;
    }
    if ( !*(_BYTE *)(v9 + v8 + 2) )
    {
      v8 += 2;
      break;
    }
    v10 = v8 + 2 <= 0x7FFFF;
    v8 += 3;
    if ( !v10 )
    {
      v8 = 0;
      break;
    }
  }
  v10 = v8 < v7;
  v11 = &byte_60B3BA34;
  if ( !v10 )
    v11 = (char *)(v9 + v7);
  if ( v7 < 0 )
    v11 = &byte_60B3BA34;
  v105 = a4;
  if ( *v11 != 34 )
    goto LABEL_28;
  v12 = *v5;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v13 = a2[1];
  v14 = 0;
  while ( *(_BYTE *)(v13 + v14) )
  {
    if ( !*(_BYTE *)(v13 + v14 + 1) )
    {
      ++v14;
      break;
    }
    if ( !*(_BYTE *)(v13 + v14 + 2) )
    {
      v14 += 2;
      break;
    }
    v10 = v14 + 2 <= 0x7FFFF;
    v14 += 3;
    if ( !v10 )
    {
      v14 = 0;
      break;
    }
  }
  v10 = v14 <= v12;
  v15 = &byte_60B3BA34;
  if ( !v10 )
    v15 = (char *)(v13 + v12 + 1);
  if ( v12 < -1 )
    v15 = &byte_60B3BA34;
  if ( *v15 == 34 )
  {
    *v5 += 2;
    v109 = 0;
  }
  else
  {
LABEL_28:
    v16 = *v5;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v17 = a2[1];
    v18 = 0;
    while ( *(_BYTE *)(v17 + v18) )
    {
      if ( !*(_BYTE *)(v17 + v18 + 1) )
      {
        ++v18;
        break;
      }
      if ( !*(_BYTE *)(v17 + v18 + 2) )
      {
        v18 += 2;
        break;
      }
      v10 = v18 + 2 <= 0x7FFFF;
      v18 += 3;
      if ( !v10 )
      {
        v18 = 0;
        break;
      }
    }
    v10 = v18 < v16;
    v19 = &byte_60B3BA34;
    if ( !v10 )
      v19 = (char *)(v17 + v16);
    v20 = v16 < 0;
    v21 = *v5;
    if ( v20 )
      v19 = &byte_60B3BA34;
    v112 = v5;
    if ( *v19 == 34 )
    {
      *v5 = v21 + 1;
      v109 = 0;
      v22 = 0;
      if ( a4 < 2 )
        v22 = a4;
      v108 = v22;
      do
      {
        v23 = 0;
        v24 = 0;
        if ( v109 < 0x10 )
          v23 = v109;
        v110 = v23;
        do
        {
          v25 = *v5;
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v26 = a2[1];
          v27 = 0;
          while ( *(_BYTE *)(v26 + v27) )
          {
            if ( !*(_BYTE *)(v26 + v27 + 1) )
            {
              ++v27;
              break;
            }
            if ( !*(_BYTE *)(v26 + v27 + 2) )
            {
              v27 += 2;
              break;
            }
            v10 = v27 + 2 <= 0x7FFFF;
            v27 += 3;
            if ( !v10 )
            {
              v27 = 0;
              break;
            }
          }
          v10 = v27 < v25;
          v28 = &byte_60B3BA34;
          if ( !v10 )
            v28 = (char *)(v26 + v25);
          if ( v25 < 0 )
            v28 = &byte_60B3BA34;
          if ( *v28 != 44 )
          {
            v29 = *v5;
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v30 = a2[1];
            v31 = 0;
            while ( *(_BYTE *)(v30 + v31) )
            {
              if ( !*(_BYTE *)(v30 + v31 + 1) )
              {
                ++v31;
                break;
              }
              if ( !*(_BYTE *)(v30 + v31 + 2) )
              {
                v31 += 2;
                break;
              }
              v10 = v31 + 2 <= 0x7FFFF;
              v31 += 3;
              if ( !v10 )
              {
                v31 = 0;
                break;
              }
            }
            v10 = v31 < v29;
            v32 = &byte_60B3BA34;
            if ( !v10 )
              v32 = (char *)(v30 + v29);
            if ( v29 < 0 )
              v32 = &byte_60B3BA34;
            if ( *v32 != 34 )
            {
              v33 = *v5;
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v34 = a2[1];
              v35 = 0;
              while ( *(_BYTE *)(v34 + v35) )
              {
                if ( !*(_BYTE *)(v34 + v35 + 1) )
                {
                  ++v35;
                  break;
                }
                if ( !*(_BYTE *)(v34 + v35 + 2) )
                {
                  v35 += 2;
                  break;
                }
                v10 = v35 + 2 <= 0x7FFFF;
                v35 += 3;
                if ( !v10 )
                {
                  v35 = 0;
                  break;
                }
              }
              v10 = v35 < v33;
              v36 = &byte_60B3BA34;
              if ( !v10 )
                v36 = (char *)(v34 + v33);
              if ( v33 < 0 )
                v36 = &byte_60B3BA34;
              if ( *v36 != 32 )
              {
                v37 = *v5;
                v38 = FIELD_U32(a1, 28);
                (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
                v39 = 0;
                if ( v38 >= 0x100 )
                  v38 = 0;
                v40 = (_DWORD *)(a1 + 1096 * v38 + 384 * v108 + 24 * v110);
                v41 = a2[1];
                while ( *(_BYTE *)(v41 + v39) )
                {
                  if ( !*(_BYTE *)(v41 + v39 + 1) )
                  {
                    ++v39;
                    break;
                  }
                  if ( !*(_BYTE *)(v41 + v39 + 2) )
                  {
                    v39 += 2;
                    break;
                  }
                  v10 = v39 + 2 <= 0x7FFFF;
                  v39 += 3;
                  if ( !v10 )
                  {
                    v39 = 0;
                    break;
                  }
                }
                v10 = v39 < v37;
                v115 = &sead__SafeStringBase__vtable;
                v42 = &byte_60B3BA34;
                if ( !v10 )
                  v42 = (char *)(v41 + v37);
                if ( v37 < 0 )
                  v42 = &byte_60B3BA34;
                v116 = v42;
                v114 = v40[57];
                (*(void (__fastcall **)(_DWORD *))(v40[56] + 12))(v40 + 56);
                v43 = v40[57];
                v44 = 0;
                while ( *(_BYTE *)(v43 + v44) )
                {
                  if ( !*(_BYTE *)(v43 + v44 + 1) )
                  {
                    ++v44;
                    break;
                  }
                  if ( !*(_BYTE *)(v43 + v44 + 2) )
                  {
                    v44 += 2;
                    break;
                  }
                  v10 = v44 + 2 <= 0x7FFFF;
                  v44 += 3;
                  if ( !v10 )
                  {
                    v44 = 0;
                    break;
                  }
                }
                v45 = v40[58] - v24;
                v46 = v45 - 1;
                if ( v45 > 1 )
                  v46 = 1;
                if ( v46 >= 1 )
                {
                  ((void (__fastcall *)(int (***)()))v115[3])(&v115);
                  qmemcpy((void *)(v114 + v24), v116, v46);
                  if ( v46 + v24 > v44 )
                    *(_BYTE *)(v114 + v46 + v24) = 0;
                }
                v5 = v112;
              }
              ++*v5;
            }
          }
          ++v24;
        }
        while ( v24 != 9 );
        v47 = (*v5)++;
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v48 = 0;
        ++v109;
        v49 = a2[1];
        while ( *(_BYTE *)(v49 + v48) )
        {
          if ( !*(_BYTE *)(v49 + v48 + 1) )
          {
            ++v48;
            break;
          }
          if ( !*(_BYTE *)(v49 + v48 + 2) )
          {
            v48 += 2;
            break;
          }
          v10 = v48 + 2 <= 0x7FFFF;
          v48 += 3;
          if ( !v10 )
          {
            v48 = 0;
            break;
          }
        }
        v10 = v48 < v47;
        v50 = &byte_60B3BA34;
        if ( !v10 )
          v50 = (char *)(v49 + v47);
        if ( v47 < 0 )
          v50 = &byte_60B3BA34;
      }
      while ( *v50 != 34 );
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v51 = a2[1];
      v52 = 0;
      while ( *(_BYTE *)(v51 + v52) )
      {
        if ( !*(_BYTE *)(v51 + v52 + 1) )
        {
          ++v52;
          break;
        }
        if ( !*(_BYTE *)(v51 + v52 + 2) )
        {
          v52 += 2;
          break;
        }
        v10 = v52 + 2 <= 0x7FFFF;
        v52 += 3;
        if ( !v10 )
        {
          v52 = 0;
          break;
        }
      }
      v10 = v52 < v21;
      v53 = &byte_60B3BA34;
      if ( !v10 )
        v53 = (char *)(v51 + v21);
      if ( v21 < 0 )
        v53 = &byte_60B3BA34;
      v109 = 0;
      if ( *v53 != 44 )
      {
        v54 = 0;
        v109 = 0;
        if ( a4 < 2 )
          v54 = a4;
        v106 = v54;
        while ( 1 )
        {
          v55 = 0;
          v56 = 0;
          if ( v109 < 0x10 )
            v55 = v109;
          v107 = v55;
          do
          {
            v57 = *v5;
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v58 = a2[1];
            v59 = 0;
            while ( *(_BYTE *)(v58 + v59) )
            {
              if ( !*(_BYTE *)(v58 + v59 + 1) )
              {
                ++v59;
                break;
              }
              if ( !*(_BYTE *)(v58 + v59 + 2) )
              {
                v59 += 2;
                break;
              }
              v10 = v59 + 2 <= 0x7FFFF;
              v59 += 3;
              if ( !v10 )
              {
                v59 = 0;
                break;
              }
            }
            v10 = v59 < v57;
            v60 = &byte_60B3BA34;
            if ( !v10 )
              v60 = (char *)(v58 + v57);
            if ( v57 < 0 )
              v60 = &byte_60B3BA34;
            if ( *v60 != 44 )
            {
              v61 = *v5;
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v62 = a2[1];
              v63 = 0;
              while ( *(_BYTE *)(v62 + v63) )
              {
                if ( !*(_BYTE *)(v62 + v63 + 1) )
                {
                  ++v63;
                  break;
                }
                if ( !*(_BYTE *)(v62 + v63 + 2) )
                {
                  v63 += 2;
                  break;
                }
                v10 = v63 + 2 <= 0x7FFFF;
                v63 += 3;
                if ( !v10 )
                {
                  v63 = 0;
                  break;
                }
              }
              v10 = v63 < v61;
              v64 = &byte_60B3BA34;
              if ( !v10 )
                v64 = (char *)(v62 + v61);
              if ( v61 < 0 )
                v64 = &byte_60B3BA34;
              if ( *v64 != 34 )
              {
                v65 = *v5;
                (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
                v66 = a2[1];
                v67 = 0;
                while ( *(_BYTE *)(v66 + v67) )
                {
                  if ( !*(_BYTE *)(v66 + v67 + 1) )
                  {
                    ++v67;
                    break;
                  }
                  if ( !*(_BYTE *)(v66 + v67 + 2) )
                  {
                    v67 += 2;
                    break;
                  }
                  v10 = v67 + 2 <= 0x7FFFF;
                  v67 += 3;
                  if ( !v10 )
                  {
                    v67 = 0;
                    break;
                  }
                }
                v10 = v67 < v65;
                v68 = &byte_60B3BA34;
                if ( !v10 )
                  v68 = (char *)(v66 + v65);
                if ( v65 < 0 )
                  v68 = &byte_60B3BA34;
                if ( *v68 != 32 )
                {
                  v69 = *v5;
                  v70 = FIELD_U32(a1, 28);
                  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
                  v71 = 0;
                  if ( v70 >= 0x100 )
                    v70 = 0;
                  v72 = (_DWORD *)(a1 + 1096 * v70 + 384 * v106 + 24 * v107);
                  v73 = a2[1];
                  while ( *(_BYTE *)(v73 + v71) )
                  {
                    if ( !*(_BYTE *)(v73 + v71 + 1) )
                    {
                      ++v71;
                      break;
                    }
                    if ( !*(_BYTE *)(v73 + v71 + 2) )
                    {
                      v71 += 2;
                      break;
                    }
                    v10 = v71 + 2 <= 0x7FFFF;
                    v71 += 3;
                    if ( !v10 )
                    {
                      v71 = 0;
                      break;
                    }
                  }
                  v10 = v71 < v69;
                  v115 = &sead__SafeStringBase__vtable;
                  v74 = &byte_60B3BA34;
                  if ( !v10 )
                    v74 = (char *)(v73 + v69);
                  if ( v69 < 0 )
                    v74 = &byte_60B3BA34;
                  v116 = v74;
                  v111 = v72[57];
                  (*(void (__fastcall **)(_DWORD *))(v72[56] + 12))(v72 + 56);
                  v75 = v72[57];
                  v5 = v112;
                  v76 = 0;
                  while ( *(_BYTE *)(v75 + v76) )
                  {
                    if ( !*(_BYTE *)(v75 + v76 + 1) )
                    {
                      ++v76;
                      break;
                    }
                    if ( !*(_BYTE *)(v75 + v76 + 2) )
                    {
                      v76 += 2;
                      break;
                    }
                    v10 = v76 + 2 <= 0x7FFFF;
                    v76 += 3;
                    if ( !v10 )
                    {
                      v76 = 0;
                      break;
                    }
                  }
                  v77 = v72[58] - v56;
                  v78 = v77 - 1;
                  if ( v77 > 1 )
                    v78 = 1;
                  if ( v78 >= 1 )
                  {
                    ((void (__fastcall *)(int (***)()))v115[3])(&v115);
                    qmemcpy((void *)(v111 + v56), v116, v78);
                    if ( v78 + v56 > v76 )
                      *(_BYTE *)(v111 + v78 + v56) = 0;
                  }
                }
                ++*v5;
              }
            }
            ++v56;
          }
          while ( v56 != 9 );
          ++v109;
          v79 = *v5;
          while ( 2 )
          {
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v82 = a2[1];
            v83 = 0;
            while ( *(_BYTE *)(v82 + v83) )
            {
              if ( !*(_BYTE *)(v82 + v83 + 1) )
              {
                ++v83;
                break;
              }
              if ( !*(_BYTE *)(v82 + v83 + 2) )
              {
                v83 += 2;
                break;
              }
              v10 = v83 + 2 <= 0x7FFFF;
              v83 += 3;
              if ( !v10 )
              {
                v83 = 0;
                break;
              }
            }
            v10 = v83 < v79;
            v84 = &byte_60B3BA34;
            if ( !v10 )
              v84 = (char *)(v82 + v79);
            if ( v79 < 0 )
              v84 = &byte_60B3BA34;
            if ( *v84 != 44 )
            {
              v85 = *v5;
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v86 = a2[1];
              v87 = 0;
              while ( *(_BYTE *)(v86 + v87) )
              {
                if ( !*(_BYTE *)(v86 + v87 + 1) )
                {
                  ++v87;
                  break;
                }
                if ( !*(_BYTE *)(v86 + v87 + 2) )
                {
                  v87 += 2;
                  break;
                }
                v10 = v87 + 2 <= 0x7FFFF;
                v87 += 3;
                if ( !v10 )
                {
                  v87 = 0;
                  break;
                }
              }
              v10 = v87 < v85;
              v88 = &byte_60B3BA34;
              if ( !v10 )
                v88 = (char *)(v86 + v85);
              if ( v85 < 0 )
                v88 = &byte_60B3BA34;
              if ( *v88 != 13 )
                goto LABEL_225;
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v89 = a2[1];
              v80 = 0;
              while ( *(_BYTE *)(v89 + v80) )
              {
                if ( !*(_BYTE *)(v89 + v80 + 1) )
                {
                  ++v80;
                  break;
                }
                if ( !*(_BYTE *)(v89 + v80 + 2) )
                {
                  v80 += 2;
                  break;
                }
                v10 = v80 + 2 <= 0x7FFFF;
                v80 += 3;
                if ( !v10 )
                {
                  v80 = 0;
                  break;
                }
              }
              v81 = &byte_60B3BA34;
              if ( v80 > v85 )
                v81 = (char *)(v89 + v85 + 1);
              if ( v85 < -1 )
                v81 = &byte_60B3BA34;
              if ( *v81 != 10 )
              {
LABEL_225:
                v79 = *v5 + 1;
                *v5 = v79;
                continue;
              }
            }
            break;
          }
          v90 = *v5;
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v91 = a2[1];
          v92 = 0;
          while ( *(_BYTE *)(v91 + v92) )
          {
            if ( !*(_BYTE *)(v91 + v92 + 1) )
            {
              ++v92;
              break;
            }
            if ( !*(_BYTE *)(v91 + v92 + 2) )
            {
              v92 += 2;
              break;
            }
            v10 = v92 + 2 <= 0x7FFFF;
            v92 += 3;
            if ( !v10 )
            {
              v92 = 0;
              break;
            }
          }
          v10 = v92 < v90;
          v93 = &byte_60B3BA34;
          if ( !v10 )
            v93 = (char *)(v91 + v90);
          if ( v90 < 0 )
            v93 = &byte_60B3BA34;
          if ( *v93 == 44 )
            break;
          v94 = *v5;
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v95 = a2[1];
          v96 = 0;
          while ( *(_BYTE *)(v95 + v96) )
          {
            if ( !*(_BYTE *)(v95 + v96 + 1) )
            {
              ++v96;
              break;
            }
            if ( !*(_BYTE *)(v95 + v96 + 2) )
            {
              v96 += 2;
              break;
            }
            v10 = v96 + 2 <= 0x7FFFF;
            v96 += 3;
            if ( !v10 )
            {
              v96 = 0;
              break;
            }
          }
          v10 = v96 < v94;
          v97 = &byte_60B3BA34;
          if ( !v10 )
            v97 = (char *)(v95 + v94);
          if ( v94 < 0 )
            v97 = &byte_60B3BA34;
          if ( *v97 == 13 )
          {
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v98 = a2[1];
            v99 = 0;
            while ( *(_BYTE *)(v98 + v99) )
            {
              if ( !*(_BYTE *)(v98 + v99 + 1) )
              {
                ++v99;
                break;
              }
              if ( !*(_BYTE *)(v98 + v99 + 2) )
              {
                v99 += 2;
                break;
              }
              v10 = v99 + 2 <= 0x7FFFF;
              v99 += 3;
              if ( !v10 )
              {
                v99 = 0;
                break;
              }
            }
            v100 = &byte_60B3BA34;
            if ( v99 > v94 )
              v100 = (char *)(v98 + v94 + 1);
            if ( v94 < -1 )
              v100 = &byte_60B3BA34;
            if ( *v100 == 10 )
              break;
          }
        }
      }
    }
  }
  v101 = 0;
  v102 = FIELD_U32(a1, 28);
  if ( v102 >= 0x100 )
    v102 = 0;
  v103 = a1 + 1096 * v102;
  if ( v105 < 2 )
    v101 = v105;
  result = v103 + 4 * v101;
  FIELD_U32(result, 1096) = v109;
  return result;
}
