/* sub_6022C360
 * address: 0x6022C360   size: 2144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022C360(int a1, _DWORD *a2)
{
  char *v3; // r1
  int v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r8
  int v8; // r9
  int v9; // r6
  _DWORD *v10; // r5
  char *v11; // r0
  int v12; // r1
  bool v13; // cc
  int v14; // r9
  int v15; // r8
  int v16; // r5
  _DWORD *v17; // r4
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int i; // r2
  int v22; // r8
  int v23; // r5
  _DWORD *v24; // r4
  int v25; // r7
  int v26; // r0
  int v27; // r1
  int m; // r2
  int v29; // r8
  int v30; // r5
  _DWORD *v31; // r4
  int v32; // r0
  int v33; // r1
  char *v34; // r0
  char *v35; // r4
  int v36; // r1
  int k; // r2
  int v38; // r8
  int v39; // r7
  _DWORD *v40; // r4
  int v41; // r0
  int v42; // r1
  char *v43; // r0
  char *v44; // r4
  int v45; // r1
  int j; // r2
  int v47; // r0
  int v48; // r7
  int v49; // r2
  int v50; // r4
  int v51; // r5
  int v52; // r0
  bool v53; // zf
  int v54; // r0
  int v55; // r4
  int v56; // r5
  int v57; // r1
  bool v58; // zf
  int v59; // r1
  bool v60; // zf
  int v61; // r5
  int v62; // r0
  bool v63; // zf
  int v64; // r1
  int v65; // r2
  bool v66; // zf
  int v67; // r0
  bool v68; // zf
  int result; // r0
  char *v70; // [sp+0h] [bp-60h]
  int v71; // [sp+4h] [bp-5Ch]
  int v72; // [sp+14h] [bp-4Ch]
  int v73; // [sp+18h] [bp-48h]
  char v74; // [sp+24h] [bp-3Ch]
  char v75; // [sp+28h] [bp-38h]
  int v76; // [sp+2Ch] [bp-34h]
  int v77; // [sp+30h] [bp-30h]
  int (**v78)(); // [sp+34h] [bp-2Ch] BYREF
  char *v79; // [sp+38h] [bp-28h]

  v74 = 0;
  v75 = 1;
  v3 = (char *)&unk_60AFD55C + 20 * sub_6040D4F0(a2);
  v70 = v3;
  v4 = 0;
  do
  {
    v72 = *(_DWORD *)&v3[4 * v4];
    if ( v72 == -1 )
      break;
    v5 = 0;
    v71 = v4;
    do
    {
      v6 = sub_601A443C(dword_60C89E18, v72, v5);
      v7 = v6;
      if ( !v6 )
        break;
      v73 = v5;
      v8 = FIELD_U32(v6, 32);
      if ( v8 >= 1 )
      {
        v9 = 0;
        v77 = v6;
        v76 = FIELD_U32(v6, 32);
        do
        {
          v10 = (_DWORD *)sub_60182E38(v7, v9);
          (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
          v11 = (char *)v10[1];
          v12 = 0;
          while ( v11[v12] )
          {
            if ( !v11[v12 + 1] )
            {
              ++v12;
              break;
            }
            if ( !v11[v12 + 2] )
            {
              v12 += 2;
              break;
            }
            v13 = v12 + 2 <= 0x7FFFF;
            v12 += 3;
            if ( !v13 )
            {
              v12 = 0;
              break;
            }
          }
          if ( v12 < 0 )
            v11 = &byte_60B3BA34;
          if ( *v11 != 87 )
            goto LABEL_122;
          v14 = 0;
          v15 = sub_60182EA8(v7, 0, v9);
          if ( v15 >= 1 )
          {
            v16 = 0;
            while ( 1 )
            {
              v17 = (_DWORD *)sub_60182E68(v77, 0, v9, v16);
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v18 = a2[1];
              (*(void (__fastcall **)(_DWORD *))(*v17 + 12))(v17);
              v19 = v17[1];
              if ( v18 == v19 )
                break;
              v20 = a2[1];
              for ( i = 1; *(unsigned __int8 *)(v20 + i - 1) == *(unsigned __int8 *)(v19 + i - 1); i += 2 )
              {
                v14 = 1;
                if ( !*(_BYTE *)(v20 + i - 1) )
                  goto LABEL_32;
                if ( i >= 524289 || *(unsigned __int8 *)(v20 + i) != *(unsigned __int8 *)(v19 + i) )
                  break;
                if ( !*(_BYTE *)(v20 + i) )
                  goto LABEL_32;
              }
              if ( ++v16 >= v15 )
              {
                v14 = 0;
                goto LABEL_32;
              }
            }
            v14 = 1;
          }
LABEL_32:
          v22 = sub_60182EA8(v77, 1, v9);
          if ( v22 < 1 )
          {
LABEL_44:
            v53 = v14 == 0;
            v8 = v76;
            if ( v53 )
            {
              v29 = sub_60182F10(v77, 0, v9);
              if ( v29 < 1 )
              {
LABEL_68:
                v38 = sub_60182F10(v77, 1, v9);
                if ( v38 < 1 )
                {
LABEL_90:
                  v7 = v77;
                  goto LABEL_122;
                }
                v39 = 0;
                while ( 1 )
                {
                  v40 = (_DWORD *)sub_60182ED0(v77, 1, v9, v39);
                  (*(void (__fastcall **)(_DWORD *))(*v40 + 12))(v40);
                  v41 = v40[1];
                  v42 = 0;
                  while ( *(_BYTE *)(v41 + v42) )
                  {
                    if ( !*(_BYTE *)(v41 + v42 + 1) )
                    {
                      ++v42;
                      break;
                    }
                    if ( !*(_BYTE *)(v41 + v42 + 2) )
                    {
                      v42 += 2;
                      break;
                    }
                    v13 = v42 + 2 <= 0x7FFFF;
                    v42 += 3;
                    if ( !v13 )
                    {
                      v42 = 0;
                      break;
                    }
                  }
                  v43 = (char *)(v41 + 5);
                  v78 = &sead__SafeStringBase__vtable;
                  if ( v42 < 5 )
                    v43 = &byte_60B3BA34;
                  v79 = v43;
                  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
                  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
                  v44 = (char *)a2[1];
                  ((void (__fastcall *)(int (***)()))v78[3])(&v78);
                  if ( v44 == v79 )
                    break;
                  v45 = a2[1];
                  for ( j = 1; *(unsigned __int8 *)(v45 + j - 1) == (unsigned __int8)v79[j - 1]; j += 2 )
                  {
                    if ( !*(_BYTE *)(v45 + j - 1) )
                      goto LABEL_102;
                    if ( j >= 524289 || *(unsigned __int8 *)(v45 + j) != (unsigned __int8)v79[j] )
                      break;
                    if ( !*(_BYTE *)(v45 + j) )
                      goto LABEL_102;
                  }
                  if ( ++v39 >= v38 )
                    goto LABEL_90;
                }
LABEL_102:
                v7 = v77;
                v48 = sub_60182E38(v77, v9);
                v49 = 0;
                goto LABEL_103;
              }
              v30 = 0;
              while ( 1 )
              {
                v31 = (_DWORD *)sub_60182ED0(v77, 0, v9, v30);
                (*(void (__fastcall **)(_DWORD *))(*v31 + 12))(v31);
                v32 = v31[1];
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
                  v13 = v33 + 2 <= 0x7FFFF;
                  v33 += 3;
                  if ( !v13 )
                  {
                    v33 = 0;
                    break;
                  }
                }
                v34 = (char *)(v32 + 5);
                v78 = &sead__SafeStringBase__vtable;
                if ( v33 < 5 )
                  v34 = &byte_60B3BA34;
                v79 = v34;
                (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
                (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
                v35 = (char *)a2[1];
                ((void (__fastcall *)(int (***)()))v78[3])(&v78);
                if ( v35 == v79 )
                  break;
                v36 = a2[1];
                for ( k = 1; *(unsigned __int8 *)(v36 + k - 1) == (unsigned __int8)v79[k - 1]; k += 2 )
                {
                  if ( !*(_BYTE *)(v36 + k - 1) )
                    goto LABEL_94;
                  if ( k >= 524289 || *(unsigned __int8 *)(v36 + k) != (unsigned __int8)v79[k] )
                    break;
                  if ( !*(_BYTE *)(v36 + k) )
                    goto LABEL_94;
                }
                if ( ++v30 >= v29 )
                  goto LABEL_68;
              }
            }
LABEL_94:
            v7 = v77;
            v48 = sub_60182E38(v77, v9);
            v50 = 0;
          }
          else
          {
            v23 = 0;
            while ( 1 )
            {
              v24 = (_DWORD *)sub_60182E68(v77, 1, v9, v23);
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
              v25 = a2[1];
              (*(void (__fastcall **)(_DWORD *))(*v24 + 12))(v24);
              v26 = v24[1];
              if ( v25 == v26 )
                break;
              v27 = a2[1];
              for ( m = 1; *(unsigned __int8 *)(v27 + m - 1) == *(unsigned __int8 *)(v26 + m - 1); m += 2 )
              {
                if ( !*(_BYTE *)(v27 + m - 1) )
                  goto LABEL_91;
                if ( m >= 524289 || *(unsigned __int8 *)(v27 + m) != *(unsigned __int8 *)(v26 + m) )
                  break;
                if ( !*(_BYTE *)(v27 + m) )
                  goto LABEL_91;
              }
              if ( ++v23 >= v22 )
                goto LABEL_44;
            }
LABEL_91:
            v7 = v77;
            v47 = sub_60182E38(v77, v9);
            v53 = v14 == 0;
            v8 = v76;
            v48 = v47;
            v49 = 0;
            v50 = 1;
            if ( v53 )
              goto LABEL_103;
          }
          v51 = sub_6040D4F0(v48);
          v52 = sub_6040D864(v48);
          v53 = v51 == -1;
          if ( v51 != -1 )
            v53 = v52 == -1;
          if ( v53 )
          {
            v49 = 0;
            if ( v50 != 1 )
              goto LABEL_121;
LABEL_103:
            v55 = v49;
            v56 = sub_6040D4F0(v48);
            v57 = sub_6040D864(v48);
            v58 = v56 == -1;
            v54 = 0;
            if ( v56 != -1 )
              v58 = v57 == -1;
            if ( !v58 )
              v54 = sub_6019AE80(v56);
            v49 = v55;
            goto LABEL_108;
          }
          v49 = sub_6019AE00(v51);
          v54 = 0;
          if ( v50 )
            goto LABEL_103;
LABEL_108:
          v59 = v49 ^ 1;
          v60 = v54 == 0;
          if ( !v54 )
            v60 = v59 == 0;
          if ( v60 )
          {
            v61 = sub_6040D4F0(v48);
            v62 = sub_6040D864(v48);
            v63 = v61 == -1;
            if ( v61 != -1 )
              v63 = v62 == -1;
            if ( v63 )
              return 3;
            v64 = dword_60CC6D78;
            if ( FIELD_U32(dword_60CC6D78, 448) != 2 )
              return 3;
            goto LABEL_116;
          }
          v67 = v54 ^ 1;
          if ( !(v49 | v67) )
          {
            v61 = sub_6040D4F0(v48);
            v62 = sub_6040D864(v48);
            v68 = v61 == -1;
            if ( v61 != -1 )
              v68 = v62 == -1;
            if ( v68 )
              return 3;
            v64 = dword_60CC6D78;
            if ( FIELD_U32(dword_60CC6D78, 448) != 3 )
              return 3;
LABEL_116:
            v65 = FIELD_U32(v64, 428);
            v66 = v65 == v61;
            if ( v65 == v61 )
              v66 = FIELD_U32(v64, 440) == v62;
            if ( !v66 )
              return 3;
            v74 = 1;
LABEL_121:
            v75 = 0;
            goto LABEL_122;
          }
          v75 = 0;
          if ( (v59 | v67) != 1 )
            return 3;
LABEL_122:
          ++v9;
        }
        while ( v9 < v8 );
      }
      v5 = v73 + 1;
    }
    while ( v73 + 1 < 2 );
    v3 = v70;
    v4 = v71 + 1;
  }
  while ( (unsigned int)(v71 + 1) < 0x2D );
  result = v75 & 1;
  if ( (v75 & 1) != 0 )
    result = 2;
  if ( (v74 & 1) != 0 )
    return 1;
  return result;
}
