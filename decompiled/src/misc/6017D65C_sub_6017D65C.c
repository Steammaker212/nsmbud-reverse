/* sub_6017D65C
 * address: 0x6017D65C   size: 4188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017D65C(int a1, _DWORD *a2, int *a3)
{
  int v6; // r6
  int v7; // r1
  int v8; // r0
  bool v9; // cc
  char *v10; // r1
  int v11; // r6
  int v12; // r1
  int v13; // r2
  char *v14; // r2
  int result; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r1
  char *v19; // r1
  int v20; // r6
  int v21; // r0
  int v22; // r1
  int v23; // r7
  char *v24; // r1
  int v25; // r0
  int v26; // r2
  char *v27; // r2
  unsigned int v28; // r6
  int v29; // r1
  char *v30; // r2
  char *v31; // r1
  int v32; // r0
  int v33; // r1
  char *v34; // r1
  int v35; // r7
  int v36; // r0
  int v37; // r1
  char *v38; // r1
  int v39; // r7
  int v40; // r0
  int v41; // r1
  char *v42; // r1
  int v43; // r1
  int v44; // r2
  char *v45; // r2
  int v46; // r7
  int v47; // r0
  _BYTE *v48; // r0
  int v49; // r4
  unsigned __int8 *v50; // r6
  unsigned __int8 *v51; // r11
  signed int v52; // r7
  int v53; // r0
  int v54; // r6
  int v55; // r0
  unsigned __int8 *v56; // r4
  int i; // r1
  unsigned int v58; // r0
  int v59; // r0
  int v60; // r6
  int v61; // r0
  unsigned __int8 *v62; // r4
  int j; // r1
  unsigned int v64; // r0
  int v65; // r0
  int v66; // r6
  int v67; // r0
  unsigned __int8 *v68; // r4
  int k; // r1
  unsigned int v70; // r0
  int v71; // r0
  int v72; // r6
  int v73; // r0
  unsigned __int8 *v74; // r4
  int m; // r1
  unsigned int v76; // r0
  unsigned __int8 *v77; // r4
  char *v78; // r0
  int v79; // r1
  unsigned int v80; // r2
  int v81; // r0
  int v82; // r6
  int v83; // r0
  int v84; // r1
  char *v85; // r1
  int v86; // r6
  int v87; // r0
  int v88; // r1
  char *v89; // r1
  int v90; // r6
  int v91; // r0
  int v92; // r1
  char *v93; // r1
  int v94; // r1
  int v95; // r6
  int v96; // r1
  int v97; // r0
  char *v98; // r1
  int v99; // r1
  int v100; // r2
  char *v101; // r2
  int v102; // [sp+10h] [bp-C0h]
  int (**v103)(); // [sp+58h] [bp-78h] BYREF
  unsigned __int8 *v104; // [sp+5Ch] [bp-74h]
  int (**v105)(); // [sp+60h] [bp-70h] BYREF
  char *v106; // [sp+64h] [bp-6Ch]
  int v107; // [sp+68h] [bp-68h]
  int v108; // [sp+6Ch] [bp-64h] BYREF
  _BYTE v109[68]; // [sp+8Ch] [bp-44h] BYREF

  v6 = *a3;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v7 = 0;
  v8 = a2[1];
  while ( *(_BYTE *)(v8 + v7) )
  {
    if ( !*(_BYTE *)(v8 + v7 + 1) )
    {
      ++v7;
      break;
    }
    if ( !*(_BYTE *)(v8 + v7 + 2) )
    {
      v7 += 2;
      break;
    }
    v9 = v7 + 2 <= 0x7FFFF;
    v7 += 3;
    if ( !v9 )
    {
      v7 = 0;
      break;
    }
  }
  v9 = v7 < v6;
  v10 = &byte_60B3BA34;
  if ( !v9 )
    v10 = (char *)(v8 + v6);
  if ( v6 < 0 )
    v10 = &byte_60B3BA34;
  if ( *v10 == 34 )
  {
    v11 = *a3;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v12 = a2[1];
    v13 = 0;
    while ( *(_BYTE *)(v12 + v13) )
    {
      if ( !*(_BYTE *)(v12 + v13 + 1) )
      {
        ++v13;
        break;
      }
      if ( !*(_BYTE *)(v12 + v13 + 2) )
      {
        v13 += 2;
        break;
      }
      v9 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v9 )
      {
        v13 = 0;
        break;
      }
    }
    v9 = v13 <= v11;
    v14 = &byte_60B3BA34;
    if ( !v9 )
      v14 = (char *)(v12 + v11 + 1);
    if ( v11 < -1 )
      v14 = &byte_60B3BA34;
    if ( *v14 == 34 )
    {
      result = *a3 + 3;
LABEL_308:
      *a3 = result;
      return result;
    }
  }
  v16 = *a3;
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
    v9 = v18 + 2 <= 0x7FFFF;
    v18 += 3;
    if ( !v9 )
    {
      v18 = 0;
      break;
    }
  }
  v9 = v18 < v16;
  v19 = &byte_60B3BA34;
  if ( !v9 )
    v19 = (char *)(v17 + v16);
  if ( v16 < 0 )
    v19 = &byte_60B3BA34;
  if ( *v19 == 44 )
    goto LABEL_307;
  v20 = *a3;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v21 = a2[1];
  v22 = 0;
  while ( *(_BYTE *)(v21 + v22) )
  {
    if ( !*(_BYTE *)(v21 + v22 + 1) )
    {
      ++v22;
      break;
    }
    if ( !*(_BYTE *)(v21 + v22 + 2) )
    {
      v22 += 2;
      break;
    }
    v9 = v22 + 2 <= 0x7FFFF;
    v22 += 3;
    if ( !v9 )
    {
      v22 = 0;
      break;
    }
  }
  v9 = v22 < v20;
  v23 = *a3;
  v24 = &byte_60B3BA34;
  if ( !v9 )
    v24 = (char *)(v21 + v20);
  if ( v20 < 0 )
    v24 = &byte_60B3BA34;
  if ( *v24 == 34 )
  {
    ++v23;
    v25 = 1;
    *a3 = v23;
  }
  else
  {
    v25 = 0;
  }
  v102 = v25;
  while ( 2 )
  {
    v28 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v32 = a2[1];
      v33 = 0;
      while ( *(_BYTE *)(v32 + v33) )
      {
        if ( !*(_BYTE *)(v32 + v33 + 1) )
        {
          ++v33;
          break;
        }
        if ( !*(_BYTE *)(v32 + v33 + 2) )
        {
          v33 += 2;
          break;
        }
        v9 = v33 + 2 <= 0x7FFFF;
        v33 += 3;
        if ( !v9 )
        {
          v33 = 0;
          break;
        }
      }
      v9 = v33 < v23;
      v34 = &byte_60B3BA34;
      if ( !v9 )
        v34 = (char *)(v32 + v23);
      if ( v23 < 0 )
        v34 = &byte_60B3BA34;
      if ( *v34 == 44 )
        break;
      v35 = *a3;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v36 = a2[1];
      v37 = 0;
      while ( *(_BYTE *)(v36 + v37) )
      {
        if ( !*(_BYTE *)(v36 + v37 + 1) )
        {
          ++v37;
          break;
        }
        if ( !*(_BYTE *)(v36 + v37 + 2) )
        {
          v37 += 2;
          break;
        }
        v9 = v37 + 2 <= 0x7FFFF;
        v37 += 3;
        if ( !v9 )
        {
          v37 = 0;
          break;
        }
      }
      v9 = v37 < v35;
      v38 = &byte_60B3BA34;
      if ( !v9 )
        v38 = (char *)(v36 + v35);
      if ( v35 < 0 )
        v38 = &byte_60B3BA34;
      if ( *v38 == 34 )
        break;
      v39 = *a3;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v40 = a2[1];
      v41 = 0;
      while ( *(_BYTE *)(v40 + v41) )
      {
        if ( !*(_BYTE *)(v40 + v41 + 1) )
        {
          ++v41;
          break;
        }
        if ( !*(_BYTE *)(v40 + v41 + 2) )
        {
          v41 += 2;
          break;
        }
        v9 = v41 + 2 <= 0x7FFFF;
        v41 += 3;
        if ( !v9 )
        {
          v41 = 0;
          break;
        }
      }
      v9 = v41 < v39;
      v42 = &byte_60B3BA34;
      if ( !v9 )
        v42 = (char *)(v40 + v39);
      if ( v39 < 0 )
        v42 = &byte_60B3BA34;
      if ( *v42 == 13 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v43 = a2[1];
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
          v9 = v44 + 2 <= 0x7FFFF;
          v44 += 3;
          if ( !v9 )
          {
            v44 = 0;
            break;
          }
        }
        v9 = v44 <= v39;
        v45 = &byte_60B3BA34;
        if ( !v9 )
          v45 = (char *)(v43 + v39 + 1);
        if ( v39 < -1 )
          v45 = &byte_60B3BA34;
        if ( *v45 == 10 )
          break;
      }
      v46 = *a3;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v47 = a2[1];
      v29 = 0;
      while ( *(_BYTE *)(v47 + v29) )
      {
        if ( !*(_BYTE *)(v47 + v29 + 1) )
        {
          ++v29;
          break;
        }
        if ( !*(_BYTE *)(v47 + v29 + 2) )
        {
          v29 += 2;
          break;
        }
        v9 = v29 + 2 <= 0x7FFFF;
        v29 += 3;
        if ( !v9 )
        {
          v29 = 0;
          break;
        }
      }
      v30 = v109;
      if ( v28 < 0x20 )
        v30 = &v109[v28];
      v9 = v29 < v46;
      ++v28;
      v31 = &byte_60B3BA34;
      if ( !v9 )
        v31 = (char *)(v47 + v46);
      if ( v46 < 0 )
        v31 = &byte_60B3BA34;
      *v30 = *v31;
      v23 = *a3 + 1;
      *a3 = v23;
    }
    v48 = v109;
    v49 = a1;
    if ( v28 < 0x20 )
      v48 = &v109[v28];
    *v48 = 0;
    v103 = &sead__SafeStringBase__vtable;
    v104 = v109;
    v106 = (char *)&v108;
    v105 = &BufferedSafeStringBase_char_vtable_probably;
    v107 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v105);
    v105 = &off_60BD4C38;
    v50 = (unsigned __int8 *)v106;
    ((void (__fastcall *)(int (***)()))v103[3])(&v103);
    v51 = v104;
    if ( v50 != v104 )
    {
      ((void (__fastcall *)(int (***)()))v103[3])(&v103);
      v52 = 0;
      while ( v104[v52] )
      {
        if ( !v104[v52 + 1] )
        {
          ++v52;
          break;
        }
        if ( !v104[v52 + 2] )
        {
          v52 += 2;
          break;
        }
        v9 = v52 + 2 <= 0x7FFFF;
        v52 += 3;
        if ( !v9 )
        {
          v52 = 0;
          break;
        }
      }
      if ( v52 >= v107 )
        v52 = v107 - 1;
      qmemcpy(v50, v51, v52);
      v50[v52] = 0;
    }
    a1 = v49;
    v105 = &off_60BD4C20;
    v53 = 0;
    while ( 1 )
    {
      v54 = v53;
      v55 = sub_60183BE8();
      v103 = &sead__SafeStringBase__vtable;
      v104 = (unsigned __int8 *)v55;
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      v56 = (unsigned __int8 *)v106;
      ((void (__fastcall *)(int (***)()))v103[3])(&v103);
      if ( v56 == v104 )
        break;
      for ( i = 1; (unsigned __int8)v106[i - 1] == v104[i - 1]; i += 2 )
      {
        if ( !v106[i - 1] )
          goto LABEL_161;
        if ( i >= 524289 || (unsigned __int8)v106[i] != v104[i] )
          break;
        if ( !v106[i] )
          goto LABEL_161;
      }
      v53 = v54 + 1;
      if ( v54 > 17 )
        v53 = 18;
      if ( v53 == 18 )
        goto LABEL_164;
    }
LABEL_161:
    v58 = FIELD_U32(a1, 28);
    if ( v58 >= 0x100 )
      v58 = 0;
    *(_DWORD *)(a1 + 1096 * v58 + 1112) |= 1 << v54;
LABEL_164:
    v59 = 0;
    while ( 1 )
    {
      v60 = v59;
      v61 = sub_60183F9C();
      v103 = &sead__SafeStringBase__vtable;
      v104 = (unsigned __int8 *)v61;
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      v62 = (unsigned __int8 *)v106;
      ((void (__fastcall *)(int (***)()))v103[3])(&v103);
      if ( v62 == v104 )
        break;
      for ( j = 1; (unsigned __int8)v106[j - 1] == v104[j - 1]; j += 2 )
      {
        if ( !v106[j - 1] )
          goto LABEL_178;
        if ( j >= 524289 || (unsigned __int8)v106[j] != v104[j] )
          break;
        if ( !v106[j] )
          goto LABEL_178;
      }
      v59 = v60 + 1;
      if ( v60 > 30 )
        v59 = 31;
      if ( v59 == 31 )
        goto LABEL_181;
    }
LABEL_178:
    v64 = FIELD_U32(a1, 28);
    if ( v64 >= 0x100 )
      v64 = 0;
    *(_DWORD *)(a1 + 1096 * v64 + 1116) |= 1 << v60;
LABEL_181:
    v65 = 0;
    while ( 1 )
    {
      v66 = v65;
      v67 = sub_60184350();
      v103 = &sead__SafeStringBase__vtable;
      v104 = (unsigned __int8 *)v67;
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      v68 = (unsigned __int8 *)v106;
      ((void (__fastcall *)(int (***)()))v103[3])(&v103);
      if ( v68 == v104 )
        break;
      for ( k = 1; (unsigned __int8)v106[k - 1] == v104[k - 1]; k += 2 )
      {
        if ( !v106[k - 1] )
          goto LABEL_195;
        if ( k >= 524289 || (unsigned __int8)v106[k] != v104[k] )
          break;
        if ( !v106[k] )
          goto LABEL_195;
      }
      v65 = v66 + 1;
      if ( v66 > 31 )
        v65 = 32;
      if ( v65 == 32 )
        goto LABEL_198;
    }
LABEL_195:
    v70 = FIELD_U32(a1, 28);
    if ( v70 >= 0x100 )
      v70 = 0;
    *(_DWORD *)(a1 + 1096 * v70 + 1120) |= 1 << v66;
LABEL_198:
    v71 = 0;
    while ( 1 )
    {
      v72 = v71;
      v73 = sub_60184704();
      v103 = &sead__SafeStringBase__vtable;
      v104 = (unsigned __int8 *)v73;
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      ((void (__fastcall *)(int (***)()))v105[3])(&v105);
      v74 = (unsigned __int8 *)v106;
      ((void (__fastcall *)(int (***)()))v103[3])(&v103);
      if ( v74 == v104 )
        break;
      for ( m = 1; (unsigned __int8)v106[m - 1] == v104[m - 1]; m += 2 )
      {
        if ( !v106[m - 1] )
          goto LABEL_212;
        if ( m >= 524289 || (unsigned __int8)v106[m] != v104[m] )
          break;
        if ( !v106[m] )
          goto LABEL_212;
      }
      v71 = v72 + 1;
      if ( v72 > 11 )
        v71 = 12;
      if ( v71 == 12 )
        goto LABEL_215;
    }
LABEL_212:
    v76 = FIELD_U32(a1, 28);
    if ( v76 >= 0x100 )
      v76 = 0;
    *(_DWORD *)(a1 + 1096 * v76 + 1128) |= 1 << v72;
LABEL_215:
    v103 = &sead__SafeStringBase__vtable;
    v104 = "lookW";
    ((void (__fastcall *)(int (***)()))v105[3])(&v105);
    ((void (__fastcall *)(int (***)()))v105[3])(&v105);
    v77 = (unsigned __int8 *)v106;
    ((void (__fastcall *)(int (***)()))v103[3])(&v103);
    if ( v77 == v104
      || (unsigned __int8)*v106 == *v104
      && (!*v106
       || (unsigned __int8)v106[1] == v104[1]
       && (!v106[1]
        || (unsigned __int8)v106[2] == v104[2]
        && (!v106[2] || (unsigned __int8)v106[3] == v104[3] && (!v106[3] || (unsigned __int8)v106[4] == v104[4])))) )
    {
      v78 = &byte_60B3BA34;
      v79 = 0;
      if ( v107 > 6 )
      {
        v78 = v106 + 7;
        if ( v107 == 7 )
          v78 = &byte_60B3BA34;
        v79 = (unsigned __int8)v106[6];
      }
      v80 = FIELD_U32(a1, 28);
      v81 = (unsigned __int8)*v78 + 10 * v79;
      if ( v80 >= 0x100 )
        v80 = 0;
      *(_DWORD *)(a1 + 1096 * v80 + 1124) = v81 - 528;
    }
    v82 = *a3;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v83 = a2[1];
    v84 = 0;
    while ( *(_BYTE *)(v83 + v84) )
    {
      if ( !*(_BYTE *)(v83 + v84 + 1) )
      {
        ++v84;
        break;
      }
      if ( !*(_BYTE *)(v83 + v84 + 2) )
      {
        v84 += 2;
        break;
      }
      v9 = v84 + 2 <= 0x7FFFF;
      v84 += 3;
      if ( !v9 )
      {
        v84 = 0;
        break;
      }
    }
    v9 = v84 < v82;
    v85 = &byte_60B3BA34;
    if ( !v9 )
      v85 = (char *)(v83 + v82);
    if ( v82 < 0 )
      v85 = &byte_60B3BA34;
    if ( *v85 == 34 )
    {
      v95 = *a3 + 1;
      *a3 = v95;
    }
    else
    {
      if ( v102 )
        goto LABEL_63;
      v86 = *a3;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v87 = a2[1];
      v88 = 0;
      while ( *(_BYTE *)(v87 + v88) )
      {
        if ( !*(_BYTE *)(v87 + v88 + 1) )
        {
          ++v88;
          break;
        }
        if ( !*(_BYTE *)(v87 + v88 + 2) )
        {
          v88 += 2;
          break;
        }
        v9 = v88 + 2 <= 0x7FFFF;
        v88 += 3;
        if ( !v9 )
        {
          v88 = 0;
          break;
        }
      }
      v9 = v88 < v86;
      v89 = &byte_60B3BA34;
      if ( !v9 )
        v89 = (char *)(v87 + v86);
      if ( v86 < 0 )
        v89 = &byte_60B3BA34;
      if ( *v89 != 44 )
      {
LABEL_63:
        v90 = *a3;
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
          v9 = v92 + 2 <= 0x7FFFF;
          v92 += 3;
          if ( !v9 )
          {
            v92 = 0;
            break;
          }
        }
        v9 = v92 < v90;
        v93 = &byte_60B3BA34;
        if ( !v9 )
          v93 = (char *)(v91 + v90);
        if ( v90 < 0 )
          v93 = &byte_60B3BA34;
        if ( *v93 != 13 )
          goto LABEL_64;
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v94 = a2[1];
        v26 = 0;
        while ( *(_BYTE *)(v94 + v26) )
        {
          if ( !*(_BYTE *)(v94 + v26 + 1) )
          {
            ++v26;
            break;
          }
          if ( !*(_BYTE *)(v94 + v26 + 2) )
          {
            v26 += 2;
            break;
          }
          v9 = v26 + 2 <= 0x7FFFF;
          v26 += 3;
          if ( !v9 )
          {
            v26 = 0;
            break;
          }
        }
        v9 = v26 <= v90;
        v27 = &byte_60B3BA34;
        if ( !v9 )
          v27 = (char *)(v94 + v90 + 1);
        if ( v90 < -1 )
          v27 = &byte_60B3BA34;
        if ( *v27 != 10 )
        {
LABEL_64:
          v23 = *a3 + 1;
          *a3 = v23;
          continue;
        }
      }
      v95 = *a3;
    }
    break;
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v96 = 0;
  v97 = a2[1];
  while ( *(_BYTE *)(v97 + v96) )
  {
    if ( !*(_BYTE *)(v97 + v96 + 1) )
    {
      ++v96;
      break;
    }
    if ( !*(_BYTE *)(v97 + v96 + 2) )
    {
      v96 += 2;
      break;
    }
    v9 = v96 + 2 <= 0x7FFFF;
    v96 += 3;
    if ( !v9 )
    {
      v96 = 0;
      break;
    }
  }
  v9 = v96 < v95;
  v98 = &byte_60B3BA34;
  if ( !v9 )
    v98 = (char *)(v97 + v95);
  if ( v95 < 0 )
    v98 = &byte_60B3BA34;
  if ( *v98 != 13 )
    goto LABEL_307;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v99 = a2[1];
  v100 = 0;
  while ( *(_BYTE *)(v99 + v100) )
  {
    if ( !*(_BYTE *)(v99 + v100 + 1) )
    {
      ++v100;
      break;
    }
    if ( !*(_BYTE *)(v99 + v100 + 2) )
    {
      v100 += 2;
      break;
    }
    v9 = v100 + 2 <= 0x7FFFF;
    v100 += 3;
    if ( !v9 )
    {
      v100 = 0;
      break;
    }
  }
  v9 = v100 <= v95;
  v101 = &byte_60B3BA34;
  if ( !v9 )
    v101 = (char *)(v99 + v95 + 1);
  if ( v95 < -1 )
    v101 = &byte_60B3BA34;
  result = (unsigned __int8)*v101;
  if ( result != 10 )
  {
LABEL_307:
    result = *a3 + 1;
    goto LABEL_308;
  }
  return result;
}
