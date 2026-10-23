/* sub_60945324
 * address: 0x60945324   size: 2440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60945324(int result, int a2)
{
  int v2; // r4
  int v3; // r1
  int v4; // r9
  bool v5; // zf
  char *v6; // r7
  int i; // r1
  int v8; // r0
  char *v9; // r7
  int j; // r1
  char *v11; // r0
  int v12; // r4
  bool v13; // cc
  char *v14; // r0
  int v15; // r4
  int (***v16)(); // r4
  int v17; // r5
  int (**v18)(); // r1
  int v19; // r0
  int v20; // r9
  char *v21; // r11
  int v22; // r6
  int (**v23)(); // r7
  int v24; // r0
  int k; // r1
  bool v26; // zf
  unsigned int v27; // r0
  int (***v28)(); // r4
  int v29; // r5
  int (**v30)(); // r1
  int v31; // r0
  int v32; // r9
  char *v33; // r11
  int v34; // r6
  int (**v35)(); // r7
  int v36; // r0
  int m; // r1
  bool v38; // zf
  int v39; // r5
  int (***v40)(); // r4
  int v41; // r7
  int (**v42)(); // r1
  int v43; // r0
  int v44; // r4
  char *v45; // r6
  int v46; // r11
  int (**v47)(); // r9
  int v48; // r0
  int n; // r1
  bool v50; // zf
  int v51; // s0
  int v52; // r0
  int v53; // r2
  int v54; // r1
  int v55; // r1
  unsigned int v56; // [sp+8h] [bp-1F0h]
  int v57; // [sp+Ch] [bp-1ECh]
  int v58; // [sp+10h] [bp-1E8h]
  int v59; // [sp+14h] [bp-1E4h]
  unsigned int v60; // [sp+18h] [bp-1E0h]
  int v61; // [sp+1Ch] [bp-1DCh]
  char *v62; // [sp+24h] [bp-1D4h]
  _DWORD v63[30]; // [sp+28h] [bp-1D0h] BYREF
  int (**v64)(); // [sp+A0h] [bp-158h] BYREF
  char *v65; // [sp+A4h] [bp-154h]
  int v66; // [sp+A8h] [bp-150h]
  int v67; // [sp+ACh] [bp-14Ch] BYREF
  int (***v68)(); // [sp+1ACh] [bp-4Ch] BYREF
  char *v69; // [sp+1B0h] [bp-48h]
  int (**v70)(); // [sp+1B4h] [bp-44h] BYREF
  const char *v71; // [sp+1B8h] [bp-40h]
  int (**v72)(); // [sp+1BCh] [bp-3Ch] BYREF
  char *v73; // [sp+1C0h] [bp-38h]
  _DWORD v74[2]; // [sp+1C4h] [bp-34h] BYREF
  int (**v75)(); // [sp+1CCh] [bp-2Ch] BYREF
  char *v76; // [sp+1D0h] [bp-28h]

  v3 = FIELD_U32(a2, 8);
  v4 = 2;
  v5 = v3 == 0;
  if ( v3 )
  {
    v2 = v3 - 4;
    v5 = v3 == 4;
  }
  if ( v5 )
    goto LABEL_155;
  v59 = result;
  while ( 1 )
  {
    v63[0] = &sead__SafeStringBase__vtable;
    v63[1] = "name";
    sub_609A5C60(&v64, v2, v63);
    v68 = (int (***)())&sead__SafeStringBase__vtable;
    v69 = off_60C5CB34;
    ((void (__fastcall *)(int (***)()))v64[3])(&v64);
    ((void (__fastcall *)(int (***)()))v64[3])(&v64);
    v6 = v65;
    ((void (__fastcall *)(int (****)()))v68[3])(&v68);
    result = (int)v69;
    if ( v6 != v69 )
    {
      for ( i = 1; v65[i - 1] == v69[i - 1]; i += 2 )
      {
        if ( !v65[i - 1] )
          goto LABEL_13;
        if ( i >= 524289 || v65[i] != v69[i] )
          break;
        if ( !v65[i] )
          goto LABEL_13;
      }
      goto LABEL_22;
    }
LABEL_13:
    v74[0] = &sead__SafeStringBase__vtable;
    v74[1] = "type";
    sub_609A5C60(&v75, v2, v74);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v59 + 28))(v59);
    v72 = &sead__SafeStringBase__vtable;
    v73 = off_60C5E588[v8 - 9];
    ((void (__fastcall *)(int (***)()))v75[3])(&v75);
    ((void (__fastcall *)(int (***)()))v75[3])(&v75);
    v9 = v76;
    ((void (__fastcall *)(int (***)()))v72[3])(&v72);
    result = (int)v73;
    if ( v9 == v73 )
      break;
    for ( j = 1; v76[j - 1] == v73[j - 1]; j += 2 )
    {
      if ( !v76[j - 1] )
        goto LABEL_26;
      if ( j >= 524289 || v76[j] != v73[j] )
        break;
      if ( !v76[j] )
        goto LABEL_26;
    }
LABEL_22:
    v2 = FIELD_U32(v2, 12);
    if ( v2 )
      v2 -= 4;
    if ( !v2 )
      goto LABEL_155;
  }
LABEL_26:
  if ( (unsigned int)((*(int (__fastcall **)(int))(*(_DWORD *)v59 + 28))(v59) - 9) > 3 )
    goto LABEL_154;
  v11 = *(char **)(v2 + 96);
  v12 = 0;
  v68 = &v75;
  v69 = 0;
  v75 = &sead__SafeStringBase__vtable;
  v70 = &sead__SafeStringBase__vtable;
  v76 = v11;
  v71 = " \r\n\t";
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
  v65 = (char *)&v67;
  v64 = &BufferedSafeStringBase_char_vtable_probably;
  v66 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v64);
  *v65 = 0;
  v64 = &off_60BD94BC;
  v14 = (char *)(v12 + 1);
  v15 = 0;
  v62 = v14;
  while ( 1 )
  {
    v58 = v15;
    v16 = v68;
    v17 = (int)v69;
    if ( v68 == &v75 && v69 == v62 )
      break;
    if ( v69 != v62 || v68 != &v75 )
    {
      do
      {
        ((void (__fastcall *)(int (***)()))(*v16)[3])(v16);
        v18 = v16[1];
        v19 = 0;
        while ( *((_BYTE *)v18 + v19) )
        {
          if ( !*((_BYTE *)v18 + v19 + 1) )
          {
            ++v19;
            if ( v17 < 0 )
              goto LABEL_66;
            goto LABEL_51;
          }
          if ( !*((_BYTE *)v18 + v19 + 2) )
          {
            v19 += 2;
            break;
          }
          v13 = v19 + 2 <= 0x7FFFF;
          v19 += 3;
          if ( !v13 )
          {
            v19 = 0;
            if ( v17 < 0 )
              goto LABEL_66;
            goto LABEL_51;
          }
        }
        if ( v17 < 0 )
          goto LABEL_66;
LABEL_51:
        if ( v17 <= v19 )
        {
          ((void (__fastcall *)(int (***)()))v64[3])(&v64);
          v20 = v66;
          if ( v66 >= 1 )
          {
            v21 = v65;
            v22 = 0;
            while ( 1 )
            {
              v23 = v68[1];
              if ( !*((_BYTE *)v23 + v17) )
                break;
              ((void (__fastcall *)(int (***)()))v70[3])(&v70);
              v24 = *((unsigned __int8 *)v23 + v17);
              for ( k = 1; v71[k - 1]; k += 2 )
              {
                if ( (unsigned __int8)v71[k - 1] == v24 )
                  goto LABEL_65;
                if ( k >= 524289 || !v71[k] )
                  break;
                if ( (unsigned __int8)v71[k] == v24 )
                  goto LABEL_65;
              }
              v21[v22++] = v24;
              ++v17;
              if ( v20 <= v22 )
                goto LABEL_66;
            }
LABEL_65:
            v21[v22] = 0;
            v69 = (char *)(v17 + 1);
          }
        }
LABEL_66:
        if ( *v65 )
          break;
        v16 = v68;
        v17 = (int)v69;
        v26 = v69 == v62;
        if ( v69 == v62 )
          v26 = v68 == &v75;
      }
      while ( !v26 );
    }
    v27 = sub_60901464(&v64, -1);
    v28 = v68;
    v56 = v27;
    v29 = (int)v69;
    if ( v27 >= 0x1E )
      v27 = 30;
    v60 = v27;
    if ( v68 == &v75 && v69 == v62 )
      break;
    if ( v69 != v62 || v68 != &v75 )
    {
      do
      {
        ((void (__fastcall *)(int (***)()))(*v28)[3])(v28);
        v30 = v28[1];
        v31 = 0;
        while ( *((_BYTE *)v30 + v31) )
        {
          if ( !*((_BYTE *)v30 + v31 + 1) )
          {
            ++v31;
            if ( v29 < 0 )
              goto LABEL_103;
            goto LABEL_88;
          }
          if ( !*((_BYTE *)v30 + v31 + 2) )
          {
            v31 += 2;
            break;
          }
          v13 = v31 + 2 <= 0x7FFFF;
          v31 += 3;
          if ( !v13 )
          {
            v31 = 0;
            if ( v29 < 0 )
              goto LABEL_103;
            goto LABEL_88;
          }
        }
        if ( v29 < 0 )
          goto LABEL_103;
LABEL_88:
        if ( v29 <= v31 )
        {
          ((void (__fastcall *)(int (***)()))v64[3])(&v64);
          v32 = v66;
          if ( v66 >= 1 )
          {
            v33 = v65;
            v34 = 0;
            while ( 1 )
            {
              v35 = v68[1];
              if ( !*((_BYTE *)v35 + v29) )
                break;
              ((void (__fastcall *)(int (***)()))v70[3])(&v70);
              v36 = *((unsigned __int8 *)v35 + v29);
              for ( m = 1; v71[m - 1]; m += 2 )
              {
                if ( (unsigned __int8)v71[m - 1] == v36 )
                  goto LABEL_102;
                if ( m >= 524289 || !v71[m] )
                  break;
                if ( (unsigned __int8)v71[m] == v36 )
                  goto LABEL_102;
              }
              v33[v34++] = v36;
              ++v29;
              if ( v32 <= v34 )
                goto LABEL_103;
            }
LABEL_102:
            v33[v34] = 0;
            v69 = (char *)(v29 + 1);
          }
        }
LABEL_103:
        if ( *v65 )
          break;
        v28 = v68;
        v29 = (int)v69;
        v38 = v69 == v62;
        if ( v69 == v62 )
          v38 = v68 == &v75;
      }
      while ( !v38 );
    }
    v57 = sub_60901464(&v64, -1);
    if ( v60 )
    {
      v39 = 0;
      do
      {
        v40 = v68;
        v41 = (int)v69;
        v61 = v39;
        if ( v68 == &v75 && v69 == v62 )
          goto LABEL_152;
        if ( v69 != v62 || v68 != &v75 )
        {
          do
          {
            ((void (__fastcall *)(int (***)()))(*v40)[3])(v40);
            v42 = v40[1];
            v43 = 0;
            while ( *((_BYTE *)v42 + v43) )
            {
              if ( !*((_BYTE *)v42 + v43 + 1) )
              {
                ++v43;
                if ( v41 < 0 )
                  goto LABEL_140;
                goto LABEL_125;
              }
              if ( !*((_BYTE *)v42 + v43 + 2) )
              {
                v43 += 2;
                break;
              }
              v13 = v43 + 2 <= 0x7FFFF;
              v43 += 3;
              if ( !v13 )
              {
                v43 = 0;
                if ( v41 < 0 )
                  goto LABEL_140;
                goto LABEL_125;
              }
            }
            if ( v41 < 0 )
              goto LABEL_140;
LABEL_125:
            if ( v41 <= v43 )
            {
              ((void (__fastcall *)(int (***)()))v64[3])(&v64);
              v44 = v66;
              if ( v66 >= 1 )
              {
                v45 = v65;
                v46 = 0;
                while ( 1 )
                {
                  v47 = v68[1];
                  if ( !*((_BYTE *)v47 + v41) )
                    break;
                  ((void (__fastcall *)(int (***)()))v70[3])(&v70);
                  v48 = *((unsigned __int8 *)v47 + v41);
                  for ( n = 1; v71[n - 1]; n += 2 )
                  {
                    if ( (unsigned __int8)v71[n - 1] == v48 )
                      goto LABEL_139;
                    if ( n >= 524289 || !v71[n] )
                      break;
                    if ( (unsigned __int8)v71[n] == v48 )
                      goto LABEL_139;
                  }
                  v45[v46++] = v48;
                  ++v41;
                  if ( v44 <= v46 )
                    goto LABEL_140;
                }
LABEL_139:
                v45[v46] = 0;
                v69 = (char *)(v41 + 1);
              }
            }
LABEL_140:
            if ( *v65 )
              break;
            v40 = v68;
            v41 = (int)v69;
            v50 = v69 == v62;
            if ( v69 == v62 )
              v50 = v68 == &v75;
          }
          while ( !v50 );
        }
        sub_60901490((int)&v64);
        ++v39;
        v63[v61] = v51;
      }
      while ( v61 + 1 < v60 );
    }
    v52 = 32 * v58;
    v53 = v59 + 60;
    v54 = v59 + 12 * v58;
    FIELD_U8(v54, 20) = v57;
    FIELD_U8(v54, 23) = v60;
    *(_DWORD *)(v53 + 4 * (v52 | 1)) = v57;
    *(_DWORD *)(v53 + 4 * v52) = v60;
    if ( v60 )
    {
      v55 = ~v56;
      if ( v56 == 30 || ~v56 < 0xFFFFFFE1 )
        v55 = -31;
      qmemcpy((void *)(v59 + ((v58 << 7) | 8) + 60), v63, -4 - 4 * v55);
    }
    v15 = v58 + 1;
    if ( (unsigned int)(v58 + 1) >= 4 )
    {
      v4 = 6;
      goto LABEL_153;
    }
  }
LABEL_152:
  v4 = 1;
LABEL_153:
  result = 1;
  if ( v4 == 6 )
  {
LABEL_154:
    v4 = 1;
    result = 0;
  }
LABEL_155:
  if ( v4 == 2 )
    return 2;
  return result;
}
