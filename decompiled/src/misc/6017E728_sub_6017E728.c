/* sub_6017E728
 * address: 0x6017E728   size: 2804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017E728(int a1, _DWORD *a2, int *a3, unsigned int a4)
{
  int *v5; // r9
  int v7; // r5
  int v8; // r1
  int v9; // r0
  bool v10; // cc
  char *v11; // r1
  int v12; // r5
  int v13; // r1
  int v14; // r2
  char *v15; // r2
  int v16; // r5
  int v17; // r0
  int v18; // r1
  char *v19; // r1
  bool v20; // nf
  int v21; // r5
  unsigned int v22; // r0
  int v23; // r5
  unsigned int v24; // r7
  int v25; // r1
  char *v26; // r1
  int v27; // r0
  int v28; // r1
  char *v29; // r1
  int v30; // r5
  int v31; // r9
  unsigned int v32; // r5
  int v33; // r2
  unsigned int v34; // r12
  int v35; // r0
  int v36; // r3
  char *v37; // r1
  char *v38; // r11
  int v39; // r0
  size_t v40; // r5
  int v41; // r0
  int v42; // r0
  int v43; // r1
  char *v44; // r1
  unsigned int v45; // r1
  int v46; // r5
  int v47; // r0
  int v48; // r1
  char *v49; // r1
  int v50; // r5
  unsigned int v51; // r5
  int v52; // r2
  unsigned int v53; // r12
  int v54; // r7
  int v55; // r3
  char *v56; // r1
  char *v57; // r0
  int v58; // r2
  int v59; // r7
  size_t v60; // r5
  int v61; // r2
  char *v62; // r2
  int v63; // r0
  int v64; // r1
  char *v65; // r1
  int v66; // r5
  int v67; // r0
  int v68; // r1
  char *v69; // r1
  int v70; // r1
  int v71; // r5
  int v72; // r0
  int v73; // r1
  char *v74; // r1
  int v75; // r5
  int v76; // r0
  int v77; // r1
  char *v78; // r1
  int v79; // r1
  int v80; // r2
  char *v81; // r2
  unsigned int v82; // r1
  unsigned int v83; // r0
  int v84; // r0
  int result; // r0
  unsigned int v86; // [sp+Ch] [bp-44h]
  int v87; // [sp+10h] [bp-40h]
  unsigned int v88; // [sp+20h] [bp-30h]
  unsigned int v89; // [sp+20h] [bp-30h]
  int *v91; // [sp+28h] [bp-28h]

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
    v88 = 0;
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
    v91 = v5;
    if ( *v19 == 34 )
    {
      v22 = 0;
      v23 = v21 + 1;
      v24 = 0;
      if ( a4 < 2 )
        v22 = a4;
      *v5 = v23;
      v89 = v22;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v27 = a2[1];
        v28 = 0;
        while ( *(_BYTE *)(v27 + v28) )
        {
          if ( !*(_BYTE *)(v27 + v28 + 1) )
          {
            ++v28;
            break;
          }
          if ( !*(_BYTE *)(v27 + v28 + 2) )
          {
            v28 += 2;
            break;
          }
          v10 = v28 + 2 <= 0x7FFFF;
          v28 += 3;
          if ( !v10 )
          {
            v28 = 0;
            break;
          }
        }
        v10 = v28 < v23;
        v29 = &byte_60B3BA34;
        if ( !v10 )
          v29 = (char *)(v27 + v23);
        if ( v23 < 0 )
          v29 = &byte_60B3BA34;
        if ( *v29 == 44 )
        {
          v30 = *v5;
        }
        else
        {
          v31 = *v5;
          v32 = FIELD_U32(a1, 28);
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v33 = a2[1];
          v34 = 0;
          v35 = 0;
          if ( v24 < 4 )
            v34 = v24;
          if ( v32 >= 0x100 )
            v32 = 0;
          while ( *(_BYTE *)(v33 + v35) )
          {
            if ( !*(_BYTE *)(v33 + v35 + 1) )
            {
              ++v35;
              break;
            }
            if ( !*(_BYTE *)(v33 + v35 + 2) )
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
          v36 = a1 + 1096 * v32 + 80 * v89 + 20 * v34;
          v37 = &byte_60B3BA34;
          if ( v35 >= v31 )
            v37 = (char *)(v33 + v31);
          v38 = *(char **)(v36 + 68);
          if ( v31 < 0 )
            v37 = &byte_60B3BA34;
          if ( v38 != v37 )
          {
            v39 = FIELD_U32(v36, 72);
            v40 = v39 - 1;
            if ( v39 > 4 )
              v40 = 4;
            qmemcpy(*(void **)(v36 + 68), v37, v40);
            v38[v40] = 0;
          }
          v5 = v91;
          v30 = *v91 + 4;
          *v91 = v30;
        }
        *v5 = v30 + 1;
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v41 = a2[1];
        ++v24;
        v25 = 0;
        while ( *(_BYTE *)(v41 + v25) )
        {
          if ( !*(_BYTE *)(v41 + v25 + 1) )
          {
            ++v25;
            break;
          }
          if ( !*(_BYTE *)(v41 + v25 + 2) )
          {
            v25 += 2;
            break;
          }
          v10 = v25 + 2 <= 0x7FFFF;
          v25 += 3;
          if ( !v10 )
          {
            v25 = 0;
            break;
          }
        }
        v10 = v25 < v30;
        v26 = &byte_60B3BA34;
        if ( !v10 )
          v26 = (char *)(v41 + v30);
        if ( v30 < 0 )
          v26 = &byte_60B3BA34;
        if ( *v26 != 34 )
        {
          v23 = *v5;
          continue;
        }
        break;
      }
      v88 = v24;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v42 = a2[1];
      v43 = 0;
      while ( *(_BYTE *)(v42 + v43) )
      {
        if ( !*(_BYTE *)(v42 + v43 + 1) )
        {
          ++v43;
          break;
        }
        if ( !*(_BYTE *)(v42 + v43 + 2) )
        {
          v43 += 2;
          break;
        }
        v10 = v43 + 2 <= 0x7FFFF;
        v43 += 3;
        if ( !v10 )
        {
          v43 = 0;
          break;
        }
      }
      v10 = v43 < v21;
      v44 = &byte_60B3BA34;
      if ( !v10 )
        v44 = (char *)(v42 + v21);
      if ( v21 < 0 )
        v44 = &byte_60B3BA34;
      v88 = 0;
      if ( *v44 != 44 )
      {
        v45 = 0;
        v88 = 0;
        if ( a4 < 2 )
          v45 = a4;
        v86 = v45;
        while ( 1 )
        {
          v46 = *v5;
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v47 = a2[1];
          v48 = 0;
          while ( *(_BYTE *)(v47 + v48) )
          {
            if ( !*(_BYTE *)(v47 + v48 + 1) )
            {
              ++v48;
              break;
            }
            if ( !*(_BYTE *)(v47 + v48 + 2) )
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
          v10 = v48 < v46;
          v49 = &byte_60B3BA34;
          if ( !v10 )
            v49 = (char *)(v47 + v46);
          if ( v46 < 0 )
            v49 = &byte_60B3BA34;
          if ( *v49 == 44 )
          {
            v50 = *v5;
          }
          else
          {
            v87 = *v5;
            v51 = FIELD_U32(a1, 28);
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v52 = a2[1];
            v53 = 0;
            v54 = 0;
            if ( v88 < 4 )
              v53 = v88;
            if ( v51 >= 0x100 )
              v51 = 0;
            while ( *(_BYTE *)(v52 + v54) )
            {
              if ( !*(_BYTE *)(v52 + v54 + 1) )
              {
                ++v54;
                break;
              }
              if ( !*(_BYTE *)(v52 + v54 + 2) )
              {
                v54 += 2;
                break;
              }
              v10 = v54 + 2 <= 0x7FFFF;
              v54 += 3;
              if ( !v10 )
              {
                v54 = 0;
                break;
              }
            }
            v55 = a1 + 1096 * v51 + 80 * v86 + 20 * v53;
            v56 = &byte_60B3BA34;
            if ( v54 >= v87 )
              v56 = (char *)(v52 + v87);
            v57 = *(char **)(v55 + 68);
            if ( v87 < 0 )
              v56 = &byte_60B3BA34;
            if ( v57 != v56 )
            {
              v58 = FIELD_U32(v55, 72);
              v59 = FIELD_U32(v55, 68);
              v60 = v58 - 1;
              if ( v58 > 4 )
                v60 = 4;
              qmemcpy(v57, v56, v60);
              *(_BYTE *)(v59 + v60) = 0;
            }
            v50 = *v5 + 4;
            *v5 = v50;
          }
          ++v88;
          while ( 2 )
          {
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v63 = a2[1];
            v64 = 0;
            while ( *(_BYTE *)(v63 + v64) )
            {
              if ( !*(_BYTE *)(v63 + v64 + 1) )
              {
                ++v64;
                break;
              }
              if ( !*(_BYTE *)(v63 + v64 + 2) )
              {
                v64 += 2;
                break;
              }
              v10 = v64 + 2 <= 0x7FFFF;
              v64 += 3;
              if ( !v10 )
              {
                v64 = 0;
                break;
              }
            }
            v10 = v64 < v50;
            v65 = &byte_60B3BA34;
            if ( !v10 )
              v65 = (char *)(v63 + v50);
            if ( v50 < 0 )
              v65 = &byte_60B3BA34;
            if ( *v65 != 44 )
            {
              v66 = *v5;
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v67 = a2[1];
              v68 = 0;
              while ( *(_BYTE *)(v67 + v68) )
              {
                if ( !*(_BYTE *)(v67 + v68 + 1) )
                {
                  ++v68;
                  break;
                }
                if ( !*(_BYTE *)(v67 + v68 + 2) )
                {
                  v68 += 2;
                  break;
                }
                v10 = v68 + 2 <= 0x7FFFF;
                v68 += 3;
                if ( !v10 )
                {
                  v68 = 0;
                  break;
                }
              }
              v10 = v68 < v66;
              v69 = &byte_60B3BA34;
              if ( !v10 )
                v69 = (char *)(v67 + v66);
              if ( v66 < 0 )
                v69 = &byte_60B3BA34;
              if ( *v69 != 13 )
                goto LABEL_151;
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v70 = a2[1];
              v61 = 0;
              while ( *(_BYTE *)(v70 + v61) )
              {
                if ( !*(_BYTE *)(v70 + v61 + 1) )
                {
                  ++v61;
                  break;
                }
                if ( !*(_BYTE *)(v70 + v61 + 2) )
                {
                  v61 += 2;
                  break;
                }
                v10 = v61 + 2 <= 0x7FFFF;
                v61 += 3;
                if ( !v10 )
                {
                  v61 = 0;
                  break;
                }
              }
              v10 = v61 <= v66;
              v62 = &byte_60B3BA34;
              if ( !v10 )
                v62 = (char *)(v70 + v66 + 1);
              if ( v66 < -1 )
                v62 = &byte_60B3BA34;
              if ( *v62 != 10 )
              {
LABEL_151:
                v50 = *v5 + 1;
                *v5 = v50;
                continue;
              }
            }
            break;
          }
          v71 = *v5;
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v72 = a2[1];
          v73 = 0;
          while ( *(_BYTE *)(v72 + v73) )
          {
            if ( !*(_BYTE *)(v72 + v73 + 1) )
            {
              ++v73;
              break;
            }
            if ( !*(_BYTE *)(v72 + v73 + 2) )
            {
              v73 += 2;
              break;
            }
            v10 = v73 + 2 <= 0x7FFFF;
            v73 += 3;
            if ( !v10 )
            {
              v73 = 0;
              break;
            }
          }
          v10 = v73 < v71;
          v74 = &byte_60B3BA34;
          if ( !v10 )
            v74 = (char *)(v72 + v71);
          if ( v71 < 0 )
            v74 = &byte_60B3BA34;
          if ( *v74 == 44 )
            break;
          v75 = *v5;
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v76 = a2[1];
          v77 = 0;
          while ( *(_BYTE *)(v76 + v77) )
          {
            if ( !*(_BYTE *)(v76 + v77 + 1) )
            {
              ++v77;
              break;
            }
            if ( !*(_BYTE *)(v76 + v77 + 2) )
            {
              v77 += 2;
              break;
            }
            v10 = v77 + 2 <= 0x7FFFF;
            v77 += 3;
            if ( !v10 )
            {
              v77 = 0;
              break;
            }
          }
          v10 = v77 < v75;
          v78 = &byte_60B3BA34;
          if ( !v10 )
            v78 = (char *)(v76 + v75);
          if ( v75 < 0 )
            v78 = &byte_60B3BA34;
          if ( *v78 == 13 )
          {
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v79 = a2[1];
            v80 = 0;
            while ( *(_BYTE *)(v79 + v80) )
            {
              if ( !*(_BYTE *)(v79 + v80 + 1) )
              {
                ++v80;
                break;
              }
              if ( !*(_BYTE *)(v79 + v80 + 2) )
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
            v10 = v80 <= v75;
            v81 = &byte_60B3BA34;
            if ( !v10 )
              v81 = (char *)(v79 + v75 + 1);
            if ( v75 < -1 )
              v81 = &byte_60B3BA34;
            if ( *v81 == 10 )
              break;
          }
        }
      }
    }
  }
  v82 = 0;
  v83 = FIELD_U32(a1, 28);
  if ( v83 >= 0x100 )
    v83 = 0;
  v84 = a1 + 1096 * v83;
  if ( a4 < 2 )
    v82 = a4;
  result = v84 + 4 * v82;
  FIELD_U32(result, 1088) = v88;
  return result;
}
