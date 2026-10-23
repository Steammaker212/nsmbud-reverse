/* sub_608FD64C
 * address: 0x608FD64C   size: 1276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FD64C(char *a1, int *a2, int a3, char *a4, int a5, _DWORD *a6, _DWORD *a7, bool *a8)
{
  signed int v9; // r6
  int v13; // r0
  int v14; // r11
  bool v15; // cc
  int v16; // r0
  int v17; // r11
  int v18; // r5
  int v19; // r4
  int v20; // r10
  bool v21; // zf
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r5
  int v26; // r4
  int v27; // r9
  char *v28; // r10
  char *v29; // r7
  signed int v30; // r7
  signed int v31; // r2
  char *v32; // r0
  signed int v33; // r10
  int v34; // r1
  int v35; // r0
  int v36; // r0
  int v37; // r9
  int v38; // r4
  int v39; // r0
  int v40; // r0
  char *v41; // r1
  char *v42; // r10
  int v43; // r5
  char *v44; // r8
  int v45; // r4
  signed int v46; // r2
  int v48; // [sp+Ch] [bp-44h]
  const void *v49; // [sp+10h] [bp-40h]
  char *v50; // [sp+14h] [bp-3Ch]
  int *v51; // [sp+18h] [bp-38h]
  int v52; // [sp+18h] [bp-38h]
  int v53; // [sp+1Ch] [bp-34h]
  int v54; // [sp+20h] [bp-30h]
  int v55; // [sp+20h] [bp-30h]
  char *v56; // [sp+24h] [bp-2Ch]
  char *v57; // [sp+24h] [bp-2Ch]
  void *s2; // [sp+28h] [bp-28h]

  v9 = 0;
  *a8 = 0;
  (*(void (__fastcall **)(_DWORD *))(*a6 + 12))(a6);
  s2 = (void *)a6[1];
  (*(void (__fastcall **)(_DWORD *))(*a6 + 12))(a6);
  v13 = a6[1];
  v14 = a3 - 1;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v13 + v9) )
      goto LABEL_10;
    if ( !*(_BYTE *)(v13 + v9 + 1) )
    {
      if ( ++v9 )
        goto LABEL_11;
      goto LABEL_17;
    }
    if ( !*(_BYTE *)(v13 + v9 + 2) )
      break;
    v15 = v9 + 2 <= 0x7FFFF;
    v9 += 3;
    if ( !v15 )
      goto LABEL_17;
  }
  v9 += 2;
LABEL_10:
  if ( !v9 )
  {
LABEL_17:
    v18 = 0;
    if ( a1 != a4 )
    {
      *a8 = a5 >= a3;
      if ( a5 < a3 )
      {
        qmemcpy(a1, a4, a5 + 1);
        if ( a2 )
          *a2 = a5;
      }
      else
      {
        qmemcpy(a1, a4, a3 - 1);
        v18 = 0;
        a1[v14] = 0;
        if ( a2 )
          *a2 = v14;
      }
    }
    return v18;
  }
LABEL_11:
  v56 = a4;
  v53 = a3 - 1;
  (*(void (__fastcall **)(_DWORD *))(*a7 + 12))(a7);
  v49 = (const void *)a7[1];
  (*(void (__fastcall **)(_DWORD *))(*a7 + 12))(a7);
  v16 = a7[1];
  v17 = 0;
  v51 = a2;
  while ( *(_BYTE *)(v16 + v17) )
  {
    if ( !*(_BYTE *)(v16 + v17 + 1) )
    {
      ++v17;
      break;
    }
    if ( !*(_BYTE *)(v16 + v17 + 2) )
    {
      v17 += 2;
      break;
    }
    v15 = v17 + 2 <= 0x7FFFF;
    v17 += 3;
    if ( !v15 )
    {
      v17 = 0;
      break;
    }
  }
  if ( a1 == a4 && v9 < v17 )
  {
    v19 = 0;
    v20 = 0;
    while ( v20 < a5 )
    {
      v21 = memcmp(&a1[v20], s2, v9) == 0;
      v22 = 1;
      if ( v21 )
        v22 = v17;
      v19 += v22;
      v23 = 1;
      if ( v21 )
        v23 = v9;
      v20 += v23;
      if ( v19 >= a3 )
      {
        *a8 = 1;
        goto LABEL_56;
      }
    }
    if ( *a8 )
    {
LABEL_56:
      a1[v53] = 0;
      if ( v51 )
        *v51 = v53;
      if ( v20 >= 1 )
      {
LABEL_59:
        v36 = v17 + a3;
        v37 = v19 - 1;
        v38 = v20 - 1;
        v18 = 0;
        v50 = a1;
        v48 = v36 - 2;
        v39 = -v9;
        do
        {
          v40 = v39 + v38;
          v55 = v18;
          v41 = &a1[v37];
          v42 = &a1[v38];
          v43 = 0;
          v44 = &a1[v40];
          v57 = v41;
          v52 = v40;
          while ( memcmp(&v44[v43 + 1], s2, v9) )
          {
            if ( v37 + v43 < v53 )
              v57[v43] = v42[v43];
            --v43;
            if ( v38 + v43 + 1 <= 0 )
              return v55;
          }
          v45 = v37 - v17;
          v46 = v48 - v37 - v43;
          if ( v17 < v46 )
            v46 = v17;
          a1 = v50;
          if ( v46 >= 1 )
          {
            qmemcpy(&v50[v45 + 1 + v43], v49, v46);
            ++v55;
          }
          v37 = v45 + v43;
          v39 = -v9;
          v38 = v52 + v43;
          v18 = v55;
        }
        while ( v38 >= 0 );
        return v18;
      }
    }
    else
    {
      a1[v19] = 0;
      if ( v51 )
        *v51 = v19;
      if ( v20 >= 1 )
        goto LABEL_59;
    }
    return 0;
  }
  v18 = 0;
  v24 = 0;
  if ( a5 < 1 )
  {
LABEL_76:
    a1[v24] = 0;
    if ( v51 )
      *v51 = v24;
  }
  else
  {
    v25 = 0;
    v26 = 0;
    v54 = 0;
    while ( 2 )
    {
      v27 = 0;
      v28 = &a1[v26];
      v29 = &v56[v25];
      while ( memcmp(&v29[v27], s2, v9) )
      {
        if ( v53 <= v26 + v27 )
        {
          *a8 = 1;
          a1[v53] = 0;
          v18 = v54;
          if ( v51 )
            *v51 = v53;
          return v18;
        }
        v28[v27] = v29[v27];
        ++v27;
        if ( v25 + v27 >= a5 )
        {
          v24 = v26 + v27;
LABEL_75:
          v18 = v54;
          goto LABEL_76;
        }
      }
      v30 = v53 - v26 - v27;
      v31 = v30;
      if ( v17 < v30 )
        v31 = v17;
      if ( v31 >= 1 )
      {
        v32 = &v28[v27];
        v33 = v31;
        qmemcpy(v32, v49, v31);
        v31 = v33;
      }
      v34 = v54;
      if ( v31 > 0 )
        v34 = v54 + 1;
      if ( !v17 )
        v34 = v54 + 1;
      v54 = v34;
      if ( v17 <= v30 )
      {
        v25 += v9 + v27;
        v35 = v17 + v26;
        v26 += v17 + v27;
        if ( v25 < a5 )
          continue;
        v24 = v35 + v27;
        goto LABEL_75;
      }
      break;
    }
    *a8 = 1;
    a1[v53] = 0;
    if ( v51 )
      *v51 = v53;
    return v34;
  }
  return v18;
}
