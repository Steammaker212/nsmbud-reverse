/* sub_60437A74
 * address: 0x60437A74   size: 7988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60437A74(int a1, int a2)
{
  int v3; // r4
  int v4; // r11
  int v5; // r0
  bool v6; // zf
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  char v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r1
  int v17; // r0
  bool v18; // zf
  char *v19; // r0
  int v20; // r6
  char *v21; // r5
  int i; // r1
  int v23; // r6
  char *v24; // r5
  int v25; // r0
  bool v26; // zf
  char *v27; // r0
  char *v28; // r5
  int j; // r1
  char v30; // r7
  int v31; // r7
  char *v32; // r5
  char *v33; // r5
  int i14; // r1
  char *v35; // r5
  int k; // r1
  int v37; // r0
  bool v38; // zf
  char *v39; // r0
  char v40; // r5
  int n; // r3
  int v42; // r0
  bool v43; // zf
  char *v44; // r1
  char v45; // r0
  int ii; // r7
  int v47; // r0
  bool v48; // zf
  char *v49; // r0
  int v50; // r6
  int (**jj)(); // r0
  char *v52; // r1
  char *v53; // r4
  int kk; // r1
  int v55; // r0
  bool v56; // zf
  char *v57; // r0
  char *v58; // r4
  int mm; // r1
  int v60; // r3
  int v61; // r0
  bool v62; // zf
  int nn; // r4
  int v64; // r0
  int v65; // r0
  bool v66; // zf
  int v67; // r0
  char *v68; // r0
  int v69; // r0
  bool v70; // zf
  int (**v71)(); // r0
  char *v72; // r1
  int v73; // r2
  int v74; // r3
  int v75; // r0
  bool v76; // zf
  int v77; // r0
  char *v78; // r0
  int (**v79)(); // r0
  int v80; // r5
  char *v81; // r4
  int i2; // r1
  int v83; // r0
  bool v84; // zf
  int v85; // r0
  char *v86; // r0
  int v87; // r0
  int v88; // r5
  int (**i3)(); // r0
  char *v90; // r4
  int i4; // r1
  int v92; // r0
  bool v93; // zf
  int v94; // r0
  char *v95; // r0
  int v96; // r6
  int v97; // r5
  int (**i5)(); // r0
  char *v99; // r4
  int i6; // r1
  int v101; // r0
  bool v102; // zf
  int v103; // r0
  char *v104; // r0
  int v105; // r11
  int v106; // r4
  int (**i7)(); // r0
  char *v108; // r6
  int i8; // r1
  _BYTE *v110; // r6
  int v111; // r0
  bool v112; // zf
  int v113; // r0
  char *v114; // r0
  int (**v115)(); // r0
  int v116; // r5
  char *v117; // r4
  int i9; // r1
  int v119; // r0
  bool v120; // zf
  int v121; // r0
  char *v122; // r0
  int v123; // r4
  int (**v124)(); // r0
  int v125; // r5
  char *v126; // r7
  int i10; // r1
  int v128; // r0
  bool v129; // zf
  char *v130; // r1
  char v131; // r0
  int i11; // r3
  int v133; // r0
  bool v134; // zf
  int v135; // s16
  int *v136; // r0
  _DWORD *v137; // r10
  int v138; // r11
  int v139; // r0
  int *v140; // r6
  int v141; // r7
  int v142; // r5
  int v143; // r6
  int v144; // r4
  unsigned __int16 *v145; // r0
  unsigned int v146; // r7
  size_t v147; // r2
  int v148; // r0
  int v149; // r1
  int v150; // r0
  int v151; // r0
  bool v152; // zf
  char *v153; // r0
  int v154; // r6
  int (**i12)(); // r0
  char *v156; // r1
  char *v157; // r4
  int i13; // r1
  int v159; // r0
  int v160; // r6
  char *v161; // r0
  int result; // r0
  bool v163; // zf
  int v164; // r5
  int i16; // r1
  int i17; // r1
  char *v167; // r5
  int i18; // r1
  bool v169; // zf
  bool v170; // zf
  bool v171; // zf
  char *v172; // r5
  int i15; // r1
  char *v174; // r5
  int m; // r1
  int v176; // [sp+8h] [bp-120h]
  int v178; // [sp+88h] [bp-A0h]
  int v179; // [sp+8Ch] [bp-9Ch]
  char v180; // [sp+90h] [bp-98h]
  int i1; // [sp+C4h] [bp-64h]
  int (**v182)(); // [sp+C8h] [bp-60h] BYREF
  char *v183; // [sp+CCh] [bp-5Ch]
  int (**v184)(); // [sp+D0h] [bp-58h] BYREF
  char *v185; // [sp+D4h] [bp-54h]
  int (**v186)(); // [sp+D8h] [bp-50h] BYREF
  char *v187; // [sp+DCh] [bp-4Ch]
  int (**v188)(); // [sp+E0h] [bp-48h] BYREF
  char *v189; // [sp+E4h] [bp-44h]
  int v190; // [sp+E8h] [bp-40h]
  int v191; // [sp+ECh] [bp-3Ch]
  int (**v192)(); // [sp+F0h] [bp-38h] BYREF
  char *v193; // [sp+F4h] [bp-34h]

  v3 = 0;
  v4 = FIELD_U32(a2, 12);
  do
  {
    sub_60440004(&v188, v3);
    ((void (__fastcall *)(int (***)()))v188[3])(&v188);
    v5 = sub_604399E4(v4, v189);
    v6 = v5 == 0;
    if ( v5 )
      v6 = FIELD_U16(v5, 16) == 0;
    if ( v6 )
    {
      v7 = 1 << v3;
    }
    else
    {
      v7 = 1 << v3;
      v8 = **(_DWORD **)(v5 + 8);
      v188 = &sead__SafeStringBase__vtable;
      v189 = (char *)(v8 + 2);
      if ( sub_6044022C(&v188) == 1 )
      {
        v9 = FIELD_U32(a1, 12) | v7;
        goto LABEL_10;
      }
    }
    v9 = FIELD_U32(a1, 12) & ~v7;
LABEL_10:
    ++v3;
    FIELD_U32(a1, 12) = v9;
  }
  while ( v3 != 9 );
  gsys_priority_hint_ref(&v188);
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  v10 = sub_604399E4(v4, v189);
  v11 = v10 == 0;
  if ( v10 )
    v11 = FIELD_U16(v10, 16) == 0;
  if ( v11 )
  {
    v13 = 0;
  }
  else
  {
    v12 = **(_DWORD **)(v10 + 8) + 2;
    v188 = &sead__SafeStringBase__vtable;
    v189 = (char *)v12;
    v13 = sub_60440108(&v188);
  }
  FIELD_U8(a1, 7) = v13;
  priority_ref(&v188);
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  v14 = sub_604399E4(v4, v189);
  v15 = v14 == 0;
  LOBYTE(v16) = 0;
  if ( v14 )
    v15 = FIELD_U16(v14, 16) == 0;
  if ( !v15 )
    v16 = **(_DWORD **)(v14 + 8);
  FIELD_U8(a1, 8) = v16;
  sub_60440030(&v188, 0);
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  v17 = sub_604399E4(v4, v189);
  v18 = v17 == 0;
  if ( v17 )
    v18 = FIELD_U16(v17, 16) == 0;
  if ( v18 )
  {
    v192 = &sead__SafeStringBase__vtable;
    v19 = off_60C5CB34;
  }
  else
  {
    v19 = (char *)(**(_DWORD **)(v17 + 8) + 2);
    v192 = &sead__SafeStringBase__vtable;
  }
  v193 = v19;
  v20 = 0;
  sub_6044005C(&v188, 0);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  v21 = v193;
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  if ( v21 == v189 )
    goto LABEL_43;
  for ( i = 1; v193[i - 1] == v189[i - 1]; i += 2 )
  {
    if ( !v193[i - 1] )
      goto LABEL_43;
    if ( i >= 524289 || v193[i] != v189[i] )
      break;
    if ( !v193[i] )
      goto LABEL_43;
  }
  v23 = 1;
  sub_6044005C(&v188, 1);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  v24 = v193;
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  if ( v24 == v189 )
  {
LABEL_42:
    v20 = 1;
    goto LABEL_43;
  }
  while ( v193[v23 - 1] == v189[v23 - 1] )
  {
    if ( !v193[v23 - 1] )
      goto LABEL_42;
    if ( v23 >= 524289 || v193[v23] != v189[v23] )
      break;
    if ( !v193[v23] )
      goto LABEL_42;
    v23 += 2;
  }
  v20 = 2;
  sub_6044005C(&v188, 2);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  v33 = v193;
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  if ( v33 == v189 )
  {
LABEL_43:
    sub_60440030(&v188, 1);
    ((void (__fastcall *)(int (***)()))v188[3])(&v188);
    v25 = sub_604399E4(v4, v189);
    v26 = v25 == 0;
    v176 = v20;
    if ( v25 )
      v26 = FIELD_U16(v25, 16) == 0;
    if ( v26 )
    {
      v188 = &sead__SafeStringBase__vtable;
      v27 = off_60C5CB34;
    }
    else
    {
      v27 = (char *)(**(_DWORD **)(v25 + 8) + 2);
      v188 = &sead__SafeStringBase__vtable;
    }
    v189 = v27;
    sub_60440088(&v192, 0);
    ((void (__fastcall *)(int (***)()))v188[3])(&v188);
    ((void (__fastcall *)(int (***)()))v188[3])(&v188);
    v28 = v189;
    ((void (__fastcall *)(int (***)()))v192[3])(&v192);
    if ( v28 == v193 )
    {
LABEL_56:
      v30 = 2;
    }
    else
    {
      for ( j = 1; v189[j - 1] == v193[j - 1]; j += 2 )
      {
        if ( !v189[j - 1] )
          goto LABEL_56;
        if ( j >= 524289 || v189[j] != v193[j] )
          break;
        if ( !v189[j] )
          goto LABEL_56;
      }
      v31 = 1;
      sub_60440088(&v192, 1);
      ((void (__fastcall *)(int (***)()))v188[3])(&v188);
      ((void (__fastcall *)(int (***)()))v188[3])(&v188);
      v32 = v189;
      ((void (__fastcall *)(int (***)()))v192[3])(&v192);
      if ( v32 == v193 )
      {
LABEL_65:
        v30 = 1;
      }
      else
      {
        while ( v189[v31 - 1] == v193[v31 - 1] )
        {
          if ( !v189[v31 - 1] )
            goto LABEL_65;
          if ( v31 >= 524289 || v189[v31] != v193[v31] )
            break;
          if ( !v189[v31] )
            goto LABEL_65;
          v31 += 2;
        }
        sub_60440088(&v192, 2);
        ((void (__fastcall *)(int (***)()))v188[3])(&v188);
        ((void (__fastcall *)(int (***)()))v188[3])(&v188);
        v35 = v189;
        ((void (__fastcall *)(int (***)()))v192[3])(&v192);
        if ( v35 == v193 )
        {
LABEL_83:
          v30 = 0;
        }
        else
        {
          for ( k = 1; v189[k - 1] == v193[k - 1]; k += 2 )
          {
            if ( !v189[k - 1] )
              goto LABEL_83;
            if ( k >= 524289 || v189[k] != v193[k] )
              break;
            if ( !v189[k] )
              goto LABEL_83;
          }
          v30 = 3;
          sub_60440088(&v192, 3);
          ((void (__fastcall *)(int (***)()))v188[3])(&v188);
          ((void (__fastcall *)(int (***)()))v188[3])(&v188);
          v174 = v189;
          ((void (__fastcall *)(int (***)()))v192[3])(&v192);
          if ( v174 != v193 )
          {
            for ( m = 1; v189[m - 1] == v193[m - 1]; m += 2 )
            {
              if ( !v189[m - 1] )
                goto LABEL_84;
              if ( m >= 524289 || v189[m] != v193[m] )
                break;
              if ( !v189[m] )
                goto LABEL_84;
            }
LABEL_85:
            sub_60440030(&v188, 3);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            v37 = sub_604399E4(v4, v189);
            v38 = v37 == 0;
            if ( v37 )
              v38 = FIELD_U16(v37, 16) == 0;
            if ( v38 )
              v39 = off_60C5CB34;
            else
              v39 = (char *)(**(_DWORD **)(v37 + 8) + 2);
            v40 = 1;
            if ( v39 != "true" )
            {
              for ( n = 0; n < 524289; ++n )
              {
                if ( v39[n] != aTrue[n] )
                  break;
                if ( !v39[n] )
                  goto LABEL_96;
              }
              v40 = 0;
            }
LABEL_96:
            sub_60440030(&v188, 4);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            v42 = sub_604399E4(v4, v189);
            v43 = v42 == 0;
            if ( v42 )
              v43 = FIELD_U16(v42, 16) == 0;
            if ( v43 )
              v44 = off_60C5CB34;
            else
              v44 = (char *)(**(_DWORD **)(v42 + 8) + 2);
            v45 = 1;
            if ( v44 != "true" )
            {
              for ( ii = 0; ii < 524289; ++ii )
              {
                if ( v44[ii] != aTrue[ii] )
                  break;
                if ( !v44[ii] )
                  goto LABEL_107;
              }
              v45 = 0;
            }
LABEL_107:
            FIELD_U8(a1, 16) = v40;
            FIELD_U8(a1, 17) = v45;
            sub_60440030(&v188, 5);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            v47 = sub_604399E4(v4, v189);
            v48 = v47 == 0;
            v178 = a1;
            v179 = v4;
            if ( v47 )
              v48 = FIELD_U16(v47, 16) == 0;
            if ( v48 )
            {
              v192 = &sead__SafeStringBase__vtable;
              v49 = off_60C5CB34;
            }
            else
            {
              v49 = (char *)(**(_DWORD **)(v47 + 8) + 2);
              v192 = &sead__SafeStringBase__vtable;
            }
            v193 = v49;
            v50 = 0;
            for ( jj = &sead__SafeStringBase__vtable; ; jj = v192 )
            {
              v52 = off_60BFA920[v50];
              v188 = &sead__SafeStringBase__vtable;
              v189 = v52;
              jj[3]();
              ((void (__fastcall *)(int (***)()))v192[3])(&v192);
              v53 = v193;
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              if ( v53 == v189 )
                break;
              for ( kk = 1; v193[kk - 1] == v189[kk - 1]; kk += 2 )
              {
                if ( !v193[kk - 1] )
                  goto LABEL_125;
                if ( kk >= 524289 || v193[kk] != v189[kk] )
                  break;
                if ( !v193[kk] )
                  goto LABEL_125;
              }
              if ( ++v50 > 7 )
              {
                v50 = 8;
                break;
              }
            }
LABEL_125:
            FIELD_U8(a1, 104) = dword_60AF4B90[v50];
            sub_60440030(&v188, 2);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            v55 = sub_604399E4(v4, v189);
            v56 = v55 == 0;
            if ( v55 )
              v56 = FIELD_U16(v55, 16) == 0;
            if ( v56 )
            {
              v188 = &sead__SafeStringBase__vtable;
              v57 = off_60C5CB34;
            }
            else
            {
              v57 = (char *)(**(_DWORD **)(v55 + 8) + 2);
              v188 = &sead__SafeStringBase__vtable;
            }
            v189 = v57;
            sub_604400B4(&v192, 0);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            v58 = v189;
            ((void (__fastcall *)(int (***)()))v192[3])(&v192);
            if ( v58 == v193 )
            {
LABEL_138:
              v60 = 0;
            }
            else
            {
              for ( mm = 1; ; mm += 2 )
              {
                v50 = (unsigned __int8)v193[mm - 1];
                v60 = -1;
                if ( (unsigned __int8)v189[mm - 1] != v50 )
                  break;
                if ( !v189[mm - 1] )
                  goto LABEL_138;
                if ( mm >= 524289 )
                  break;
                v50 = (unsigned __int8)v193[mm];
                if ( (unsigned __int8)v189[mm] != v50 )
                  break;
                if ( !v189[mm] )
                  goto LABEL_138;
              }
            }
            FIELD_U32(a1, 20) = v60;
            v188 = 0;
            v189 = 0;
            v190 = 0;
            v191 = 1065353216;
            sub_60440030(&v192, 15);
            ((void (__fastcall *)(int (***)()))v192[3])(&v192);
            v61 = sub_604399E4(v4, v193);
            v62 = v61 == 0;
            if ( v61 )
            {
              v50 = FIELD_U16(v61, 16);
              v62 = v50 == 0;
            }
            if ( !v62 )
            {
              for ( nn = 0; v50 != nn; ++nn )
              {
                sub_60440030(&v192, 15);
                ((void (__fastcall *)(int (***)()))v192[3])(&v192);
                v64 = *(unsigned __int8 *)(sub_604399E4(v4, v193) + 18);
                if ( v64 == 1 )
                {
                  sub_60440030(&v192, 15);
                  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
                  v69 = sub_604399E4(v4, v193);
                  if ( !v69 )
                    continue;
                  v70 = FIELD_U16(v69, 16) == 0;
                  if ( FIELD_U16(v69, 16) )
                  {
                    v69 = FIELD_U32(v69, 8);
                    v70 = v69 == 0;
                  }
                  if ( v70 )
                    continue;
                  v71 = *(int (***)())v69;
                }
                else
                {
                  if ( v64 != 2 )
                    continue;
                  sub_60440030(&v192, 15);
                  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
                  v65 = sub_604399E4(v4, v193);
                  v66 = v65 == 0;
                  if ( v65 )
                    v66 = FIELD_U16(v65, 16) == 0;
                  if ( v66 )
                  {
                    v68 = off_60C5CB34;
                    v192 = &sead__SafeStringBase__vtable;
                  }
                  else
                  {
                    v67 = *(_DWORD *)(FIELD_U32(v65, 8) + 8 * nn);
                    v192 = &sead__SafeStringBase__vtable;
                    v68 = (char *)(v67 + 2);
                  }
                  v193 = v68;
                  if ( sub_60900FB4((float *)&v186, &v192) != 1 )
                    continue;
                  v71 = v186;
                }
                (&v188)[nn] = v71;
              }
            }
            v72 = v189;
            v73 = v190;
            v74 = v191;
            FIELD_U32(a1, 24) = v188;
            FIELD_U32(a1, 28) = v72;
            FIELD_U32(a1, 32) = v73;
            FIELD_U32(a1, 36) = v74;
            for ( i1 = 0; i1 != 8; ++i1 )
            {
              sub_60440030(&v188, 9);
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              v75 = sub_604399E4(v4, v189);
              v76 = v75 == 0;
              if ( v75 )
                v76 = FIELD_U16(v75, 16) == 0;
              if ( v76 )
              {
                v192 = &sead__SafeStringBase__vtable;
                v78 = off_60C5CB34;
              }
              else
              {
                v77 = **(_DWORD **)(v75 + 8);
                v192 = &sead__SafeStringBase__vtable;
                v78 = (char *)(v77 + 2);
              }
              v193 = v78;
              v79 = &sead__SafeStringBase__vtable;
              v80 = 0;
              while ( 1 )
              {
                v188 = &sead__SafeStringBase__vtable;
                v189 = off_60BFA940[v80];
                ((void (__fastcall *)(int (***)()))v79[3])(&v192);
                ((void (__fastcall *)(int (***)()))v192[3])(&v192);
                v81 = v193;
                ((void (__fastcall *)(int (***)()))v188[3])(&v188);
                if ( v81 == v189 )
                  break;
                for ( i2 = 1; v193[i2 - 1] == v189[i2 - 1]; i2 += 2 )
                {
                  if ( !v193[i2 - 1] )
                    goto LABEL_178;
                  if ( i2 >= 524289 || v193[i2] != v189[i2] )
                    break;
                  if ( !v193[i2] )
                    goto LABEL_178;
                }
                if ( ++v80 > 18 )
                {
                  v80 = 19;
                  break;
                }
                v79 = v192;
              }
LABEL_178:
              sub_60440030(&v188, 10);
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              v83 = sub_604399E4(v4, v189);
              v84 = v83 == 0;
              if ( v83 )
                v84 = FIELD_U16(v83, 16) == 0;
              if ( v84 )
              {
                v186 = &sead__SafeStringBase__vtable;
                v86 = off_60C5CB34;
              }
              else
              {
                v85 = **(_DWORD **)(v83 + 8);
                v186 = &sead__SafeStringBase__vtable;
                v86 = (char *)(v85 + 2);
              }
              v187 = v86;
              v87 = dword_60B022FC[v80];
              v88 = 0;
              v180 = v87;
              for ( i3 = &sead__SafeStringBase__vtable; ; i3 = v186 )
              {
                v188 = &sead__SafeStringBase__vtable;
                v189 = off_60BFA940[v88];
                ((void (__fastcall *)(int (***)()))i3[3])(&v186);
                ((void (__fastcall *)(int (***)()))v186[3])(&v186);
                v90 = v187;
                ((void (__fastcall *)(int (***)()))v188[3])(&v188);
                if ( v90 == v189 )
                  break;
                for ( i4 = 1; v187[i4 - 1] == v189[i4 - 1]; i4 += 2 )
                {
                  if ( !v187[i4 - 1] )
                    goto LABEL_196;
                  if ( i4 >= 524289 || v187[i4] != v189[i4] )
                    break;
                  if ( !v187[i4] )
                    goto LABEL_196;
                }
                if ( ++v88 > 18 )
                {
                  v88 = 19;
                  break;
                }
              }
LABEL_196:
              sub_60440030(&v188, 12);
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              v92 = sub_604399E4(v4, v189);
              v93 = v92 == 0;
              if ( v92 )
                v93 = FIELD_U16(v92, 16) == 0;
              if ( v93 )
              {
                v184 = &sead__SafeStringBase__vtable;
                v95 = off_60C5CB34;
              }
              else
              {
                v94 = **(_DWORD **)(v92 + 8);
                v184 = &sead__SafeStringBase__vtable;
                v95 = (char *)(v94 + 2);
              }
              v185 = v95;
              v96 = 0;
              v97 = dword_60B022FC[v88];
              for ( i5 = &sead__SafeStringBase__vtable; ; i5 = v184 )
              {
                v188 = &sead__SafeStringBase__vtable;
                v189 = off_60BFA940[v96];
                ((void (__fastcall *)(int (***)()))i5[3])(&v184);
                ((void (__fastcall *)(int (***)()))v184[3])(&v184);
                v99 = v185;
                ((void (__fastcall *)(int (***)()))v188[3])(&v188);
                if ( v99 == v189 )
                  break;
                for ( i6 = 1; v185[i6 - 1] == v189[i6 - 1]; i6 += 2 )
                {
                  if ( !v185[i6 - 1] )
                    goto LABEL_214;
                  if ( i6 >= 524289 || v185[i6] != v189[i6] )
                    break;
                  if ( !v185[i6] )
                    goto LABEL_214;
                }
                if ( ++v96 > 18 )
                {
                  v96 = 19;
                  break;
                }
              }
LABEL_214:
              sub_60440030(&v188, 13);
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              v101 = sub_604399E4(v4, v189);
              v102 = v101 == 0;
              if ( v101 )
                v102 = FIELD_U16(v101, 16) == 0;
              if ( v102 )
              {
                v182 = &sead__SafeStringBase__vtable;
                v104 = off_60C5CB34;
              }
              else
              {
                v103 = **(_DWORD **)(v101 + 8);
                v182 = &sead__SafeStringBase__vtable;
                v104 = (char *)(v103 + 2);
              }
              v183 = v104;
              v105 = 0;
              v106 = dword_60B022FC[v96];
              for ( i7 = &sead__SafeStringBase__vtable; ; i7 = v182 )
              {
                v188 = &sead__SafeStringBase__vtable;
                v189 = off_60BFA940[v105];
                ((void (__fastcall *)(int (***)()))i7[3])(&v182);
                ((void (__fastcall *)(int (***)()))v182[3])(&v182);
                v108 = v183;
                ((void (__fastcall *)(int (***)()))v188[3])(&v188);
                if ( v108 == v189 )
                  break;
                for ( i8 = 1; v183[i8 - 1] == v189[i8 - 1]; i8 += 2 )
                {
                  if ( !v183[i8 - 1] )
                    goto LABEL_232;
                  if ( i8 >= 524289 || v183[i8] != v189[i8] )
                    break;
                  if ( !v183[i8] )
                    goto LABEL_232;
                }
                if ( ++v105 > 18 )
                {
                  v105 = 19;
                  break;
                }
              }
LABEL_232:
              v110 = (_BYTE *)(a1 + 6 * i1);
              v110[56] = v180;
              v110[57] = v106;
              v110[58] = v97;
              v110[59] = dword_60B022FC[v105];
              sub_60440030(&v188, 11);
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              v4 = v179;
              v111 = sub_604399E4(v179, v189);
              v112 = v111 == 0;
              if ( v111 )
                v112 = FIELD_U16(v111, 16) == 0;
              if ( v112 )
              {
                v192 = &sead__SafeStringBase__vtable;
                v114 = off_60C5CB34;
              }
              else
              {
                v113 = **(_DWORD **)(v111 + 8);
                v192 = &sead__SafeStringBase__vtable;
                v114 = (char *)(v113 + 2);
              }
              v193 = v114;
              v115 = &sead__SafeStringBase__vtable;
              v116 = 0;
              while ( 1 )
              {
                v188 = &sead__SafeStringBase__vtable;
                v189 = off_60BFA98C[v116];
                ((void (__fastcall *)(int (***)()))v115[3])(&v192);
                ((void (__fastcall *)(int (***)()))v192[3])(&v192);
                v117 = v193;
                ((void (__fastcall *)(int (***)()))v188[3])(&v188);
                if ( v117 == v189 )
                  break;
                for ( i9 = 1; v193[i9 - 1] == v189[i9 - 1]; i9 += 2 )
                {
                  if ( !v193[i9 - 1] )
                    goto LABEL_250;
                  if ( i9 >= 524289 || v193[i9] != v189[i9] )
                    break;
                  if ( !v193[i9] )
                    goto LABEL_250;
                }
                if ( ++v116 > 4 )
                {
                  v116 = 5;
                  break;
                }
                v115 = v192;
              }
LABEL_250:
              sub_60440030(&v188, 14);
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              v119 = sub_604399E4(v179, v189);
              v120 = v119 == 0;
              if ( v119 )
                v120 = FIELD_U16(v119, 16) == 0;
              if ( v120 )
              {
                v186 = &sead__SafeStringBase__vtable;
                v122 = off_60C5CB34;
              }
              else
              {
                v121 = **(_DWORD **)(v119 + 8);
                v186 = &sead__SafeStringBase__vtable;
                v122 = (char *)(v121 + 2);
              }
              v187 = v122;
              v123 = dword_60B02348[v116];
              v124 = &sead__SafeStringBase__vtable;
              v125 = 0;
              while ( 1 )
              {
                v188 = &sead__SafeStringBase__vtable;
                v189 = off_60BFA98C[v125];
                ((void (__fastcall *)(int (***)()))v124[3])(&v186);
                ((void (__fastcall *)(int (***)()))v186[3])(&v186);
                v126 = v187;
                ((void (__fastcall *)(int (***)()))v188[3])(&v188);
                if ( v126 == v189 )
                  break;
                for ( i10 = 1; v187[i10 - 1] == v189[i10 - 1]; i10 += 2 )
                {
                  if ( !v187[i10 - 1] )
                    goto LABEL_268;
                  if ( i10 >= 524289 || v187[i10] != v189[i10] )
                    break;
                  if ( !v187[i10] )
                    goto LABEL_268;
                }
                if ( ++v125 > 4 )
                {
                  v125 = 5;
                  break;
                }
                v124 = v186;
              }
LABEL_268:
              v110[60] = v123;
              v110[61] = dword_60B02348[v125];
            }
            sub_60440030(&v188, 6);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            v128 = sub_604399E4(v179, v189);
            v129 = v128 == 0;
            if ( v128 )
              v129 = FIELD_U16(v128, 16) == 0;
            if ( v129 )
              v130 = off_60C5CB34;
            else
              v130 = (char *)(**(_DWORD **)(v128 + 8) + 2);
            v131 = 1;
            if ( v130 != "true" )
            {
              for ( i11 = 0; i11 < 524289; ++i11 )
              {
                if ( v130[i11] != aTrue[i11] )
                  break;
                if ( !v130[i11] )
                  goto LABEL_280;
              }
              v131 = 0;
            }
LABEL_280:
            FIELD_U8(a1, 18) = v131;
            sub_60440030(&v188, 8);
            ((void (__fastcall *)(int (***)()))v188[3])(&v188);
            v133 = sub_604399E4(v179, v189);
            v134 = v133 == 0;
            v135 = 0;
            if ( v133 )
              v134 = FIELD_U16(v133, 16) == 0;
            if ( !v134 )
            {
              v136 = *(int **)(v133 + 8);
              if ( v136 )
                v135 = *v136;
            }
            v137 = *(_DWORD **)(a2 + 12);
            v138 = v137[24];
            if ( !v138 )
            {
LABEL_305:
              sub_60440030(&v188, 7);
              ((void (__fastcall *)(int (***)()))v188[3])(&v188);
              v151 = sub_604399E4(v179, v189);
              v152 = v151 == 0;
              if ( v151 )
                v152 = FIELD_U16(v151, 16) == 0;
              if ( v152 )
              {
                v192 = &sead__SafeStringBase__vtable;
                v153 = off_60C5CB34;
              }
              else
              {
                v153 = (char *)(**(_DWORD **)(v151 + 8) + 2);
                v192 = &sead__SafeStringBase__vtable;
              }
              v193 = v153;
              v154 = 0;
              for ( i12 = &sead__SafeStringBase__vtable; ; i12 = v192 )
              {
                v156 = off_60BFA920[v154];
                v188 = &sead__SafeStringBase__vtable;
                v189 = v156;
                i12[3]();
                ((void (__fastcall *)(int (***)()))v192[3])(&v192);
                v157 = v193;
                ((void (__fastcall *)(int (***)()))v188[3])(&v188);
                if ( v157 == v189 )
                  break;
                for ( i13 = 1; v193[i13 - 1] == v189[i13 - 1]; i13 += 2 )
                {
                  if ( !v193[i13 - 1] )
                    goto LABEL_323;
                  if ( i13 >= 524289 || v193[i13] != v189[i13] )
                    break;
                  if ( !v193[i13] )
                    goto LABEL_323;
                }
                if ( ++v154 > 7 )
                {
                  v154 = 8;
                  break;
                }
              }
LABEL_323:
              a1 = v178;
              FIELD_U8(v178, 106) = dword_60AF4B90[v154];
              FIELD_U32(v178, 40) = v135;
              v4 = v179;
              v159 = sub_604399E4(v179, "polygon_offset");
              if ( v159 )
              {
                v160 = v176;
                if ( FIELD_U16(v159, 16) )
                {
                  v161 = **(char ***)(v159 + 8);
                  if ( v161 + 2 == "yes" || v161[2] == 121 && v161[3] == 101 && v161[4] == 115 )
                    FIELD_U8(v178, 6) |= 4u;
                }
              }
              else
              {
                v160 = v176;
              }
              goto LABEL_330;
            }
            v139 = FIELD_U16(v138, 12);
            v140 = (int *)(v138 + 8 + 16 * v139);
            v141 = *v140;
            if ( FIELD_U32(v138, 8) < *v140 )
            {
              v142 = v138 + 8;
              do
              {
                v143 = 0;
                if ( (unsigned int)(v141 >> 3) <= 0x18 )
                  v143 = ((unsigned __int8)aGsysAlphaTestR[24 - (v141 >> 3)] >> (v141 & 7)) & 1;
                v144 = *(_DWORD *)(v142 + 16 * v139);
                v139 = *(unsigned __int16 *)(v142 + 16 * v139 + 2 * v143 + 4);
                v140 = (int *)(v142 + 16 * v139);
                v141 = *v140;
              }
              while ( v144 < *v140 );
            }
            v145 = (unsigned __int16 *)v140[2];
            v146 = *v145;
            v147 = v146;
            if ( v146 >= 0x19 )
              v147 = 25;
            if ( v147 )
            {
              v148 = memcmp(v145 + 1, "gsys_alpha_test_ref_value", v147);
              v149 = v148;
              if ( !v148 )
                v149 = 1;
              if ( v146 > 0x19 || v148 )
                goto LABEL_302;
            }
            else if ( v146 > 0x19 )
            {
              goto LABEL_305;
            }
            v149 = 0;
            if ( v146 < 0x19 )
              v149 = -1;
LABEL_302:
            if ( !v149 )
            {
              v150 = (int)v140 - v138 - 24;
              if ( v150 >> 4 != -1 )
                *(_DWORD *)(v137[26] + *(unsigned __int16 *)(v137[22] + 32 * (v150 >> 4) + 18)) = v135;
            }
            goto LABEL_305;
          }
        }
      }
    }
LABEL_84:
    FIELD_U8(a1, 6) = v30;
    goto LABEL_85;
  }
  for ( i14 = 1; v193[i14 - 1] == v189[i14 - 1]; i14 += 2 )
  {
    if ( !v193[i14 - 1] )
      goto LABEL_43;
    if ( i14 >= 524289 || v193[i14] != v189[i14] )
      break;
    if ( !v193[i14] )
      goto LABEL_43;
  }
  sub_6044005C(&v188, 3);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  ((void (__fastcall *)(int (***)()))v192[3])(&v192);
  v172 = v193;
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  if ( v172 == v189 )
  {
LABEL_382:
    v20 = 5;
    goto LABEL_43;
  }
  for ( i15 = 1; v193[i15 - 1] == v189[i15 - 1]; i15 += 2 )
  {
    if ( !v193[i15 - 1] )
      goto LABEL_382;
    if ( i15 >= 524289 || v193[i15] != v189[i15] )
      break;
    if ( !v193[i15] )
      goto LABEL_382;
  }
  v160 = 0;
LABEL_330:
  FIELD_U8(a1, 5) = v160;
  gsys_pass_ref(&v188);
  ((void (__fastcall *)(int (***)()))v188[3])(&v188);
  result = sub_604399E4(v4, v189);
  v163 = result == 0;
  FIELD_U8(a1, 9) = 0;
  if ( result )
    v163 = FIELD_U16(result, 16) == 0;
  if ( !v163 )
  {
    v164 = **(_DWORD **)(result + 8) + 2;
    v188 = &sead__SafeStringBase__vtable;
    v189 = (char *)v164;
    sub_6044025C(&v192, 1);
    ((void (__fastcall *)(int (***)()))v192[3])(&v192);
    if ( (char *)v164 == v193 )
    {
LABEL_357:
      v170 = v160 == 5;
      if ( v160 != 5 )
        v170 = v160 == 2;
      if ( v170 )
        LOBYTE(v160) = 3;
      FIELD_U8(a1, 6) |= 4u;
      result = 1;
    }
    else
    {
      for ( i16 = 0; i16 < 524289; ++i16 )
      {
        if ( *(unsigned __int8 *)(v164 + i16) != (unsigned __int8)v193[i16] )
          break;
        if ( !*(_BYTE *)(v164 + i16) )
          goto LABEL_357;
      }
      sub_6044025C(&v192, 2);
      ((void (__fastcall *)(int (***)()))v192[3])(&v192);
      if ( (char *)v164 == v193 )
      {
LABEL_363:
        v171 = v160 == 5;
        if ( v160 != 5 )
          v171 = v160 == 2;
        if ( v171 )
          LOBYTE(v160) = 4;
        result = 2;
      }
      else
      {
        for ( i17 = 0; i17 < 524289; ++i17 )
        {
          if ( *(unsigned __int8 *)(v164 + i17) != (unsigned __int8)v193[i17] )
            break;
          if ( !*(_BYTE *)(v164 + i17) )
            goto LABEL_363;
        }
        sub_6044025C(&v192, 3);
        sead__SafeStringBase__assureTerminationImpl_const();
        ((void (__fastcall *)(int (***)()))v188[3])(&v188);
        v167 = v189;
        ((void (__fastcall *)(int (***)()))v192[3])(&v192);
        result = (int)v193;
        if ( v167 != v193 )
        {
          for ( i18 = 1; v189[i18 - 1] == v193[i18 - 1]; i18 += 2 )
          {
            if ( !v189[i18 - 1] )
              goto LABEL_351;
            if ( i18 >= 524289 || v189[i18] != v193[i18] )
              break;
            if ( !v189[i18] )
              goto LABEL_351;
          }
          if ( v160 == 5 )
          {
            result = FIELD_U8(a1, 17);
            LOBYTE(v160) = 5;
            if ( FIELD_U8(a1, 17) )
            {
              result = FIELD_U32(a2, 128) | 0x100;
              FIELD_U32(a2, 128) = result;
            }
          }
          goto LABEL_370;
        }
LABEL_351:
        v169 = v160 == 5;
        if ( v160 != 5 )
          v169 = v160 == 2;
        if ( v169 )
          FIELD_U32(a2, 128) |= 0x80u;
        result = 3;
      }
    }
    FIELD_U8(a1, 9) = result;
  }
LABEL_370:
  FIELD_U8(a1, 4) = v160;
  return result;
}
