/* sub_6018018C
 * address: 0x6018018C   size: 2632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018018C(int a1, _DWORD *a2, int *a3, unsigned int a4)
{
  int *v5; // r9
  int v6; // r6
  int v7; // r1
  int v8; // r0
  bool v9; // cc
  char *v10; // r1
  unsigned int v11; // r5
  int v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r2
  int v15; // r1
  int v16; // r9
  int v17; // r1
  int v18; // r0
  signed int v19; // r6
  char v20; // r12
  int v21; // r0
  int v22; // r1
  char *v23; // r1
  int v24; // r6
  int v25; // r0
  int v26; // r1
  char *v27; // r1
  int v28; // r6
  int v29; // r0
  int v30; // r1
  char *v31; // r1
  int v32; // r6
  int v33; // r1
  int v34; // r2
  char *v35; // r2
  int v36; // r7
  unsigned int v37; // r6
  int v38; // r1
  _DWORD *v39; // r6
  int v40; // r2
  char *v41; // r1
  int v42; // r7
  int v43; // r0
  int v44; // r7
  unsigned int v45; // r10
  int v46; // r6
  int v47; // t1
  int v48; // r0
  int v49; // r3
  int v50; // r2
  int v51; // r9
  int v52; // r0
  signed int v53; // r6
  unsigned int v54; // r0
  int v55; // r6
  int v56; // r0
  int v57; // r1
  char *v58; // r1
  int result; // r0
  int v60; // r6
  int v61; // r0
  int v62; // r1
  char *v63; // r1
  int v64; // r6
  int v65; // r0
  int v66; // r1
  char *v67; // r1
  int v68; // r6
  int v69; // r1
  int v70; // r2
  char *v71; // r2
  int v72; // r6
  int v73; // r0
  int v74; // r1
  char *v75; // r1
  char v76; // [sp+4h] [bp-64h]
  int *v78; // [sp+1Ch] [bp-4Ch]
  unsigned int v79; // [sp+28h] [bp-40h]
  int v80; // [sp+2Ch] [bp-3Ch]
  unsigned int v81; // [sp+30h] [bp-38h]
  int v83; // [sp+38h] [bp-30h]
  int (**v84)(); // [sp+3Ch] [bp-2Ch] BYREF
  char *v85; // [sp+40h] [bp-28h]

  v5 = a3;
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
  v78 = v5;
  if ( *v10 != 34 )
  {
    v12 = *v5;
    v11 = 0;
    v76 = 0;
    goto LABEL_17;
  }
  v11 = 0;
  v76 = 1;
  while ( 1 )
  {
    v12 = *v5 + 1;
    *v5 = v12;
LABEL_17:
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( v11 < 2 )
      v13 = v11;
    v79 = v13;
    if ( a4 < 2 )
      v14 = a4;
    v81 = v14;
    while ( 1 )
    {
      v83 = v15;
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
      v9 = v22 < v12;
      v23 = &byte_60B3BA34;
      if ( !v9 )
        v23 = (char *)(v21 + v12);
      if ( v12 < 0 )
        v23 = &byte_60B3BA34;
      if ( *v23 == 44 )
        break;
      v24 = *v5;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v25 = a2[1];
      v26 = 0;
      while ( *(_BYTE *)(v25 + v26) )
      {
        if ( !*(_BYTE *)(v25 + v26 + 1) )
        {
          ++v26;
          break;
        }
        if ( !*(_BYTE *)(v25 + v26 + 2) )
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
      v9 = v26 < v24;
      v27 = &byte_60B3BA34;
      if ( !v9 )
        v27 = (char *)(v25 + v24);
      if ( v24 < 0 )
        v27 = &byte_60B3BA34;
      if ( *v27 == 34 )
        break;
      v28 = *v5;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v29 = a2[1];
      v30 = 0;
      while ( *(_BYTE *)(v29 + v30) )
      {
        if ( !*(_BYTE *)(v29 + v30 + 1) )
        {
          ++v30;
          break;
        }
        if ( !*(_BYTE *)(v29 + v30 + 2) )
        {
          v30 += 2;
          break;
        }
        v9 = v30 + 2 <= 0x7FFFF;
        v30 += 3;
        if ( !v9 )
        {
          v30 = 0;
          break;
        }
      }
      v9 = v30 < v28;
      v31 = &byte_60B3BA34;
      if ( !v9 )
        v31 = (char *)(v29 + v28);
      if ( v28 < 0 )
        v31 = &byte_60B3BA34;
      if ( *v31 == 13 )
      {
        v32 = *v5;
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v33 = a2[1];
        v34 = 0;
        while ( *(_BYTE *)(v33 + v34) )
        {
          if ( !*(_BYTE *)(v33 + v34 + 1) )
          {
            ++v34;
            break;
          }
          if ( !*(_BYTE *)(v33 + v34 + 2) )
          {
            v34 += 2;
            break;
          }
          v9 = v34 + 2 <= 0x7FFFF;
          v34 += 3;
          if ( !v9 )
          {
            v34 = 0;
            break;
          }
        }
        v9 = v34 <= v32;
        v35 = &byte_60B3BA34;
        if ( !v9 )
          v35 = (char *)(v33 + v32 + 1);
        if ( v32 < -1 )
          v35 = &byte_60B3BA34;
        if ( *v35 == 10 )
          break;
      }
      v36 = *v5;
      v37 = FIELD_U32(a1, 28);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v38 = 0;
      if ( v37 >= 0x100 )
        v37 = 0;
      v39 = (_DWORD *)(a1 + 1096 * v37 + 48 * v81 + 24 * v79);
      v40 = a2[1];
      while ( *(_BYTE *)(v40 + v38) )
      {
        if ( !*(_BYTE *)(v40 + v38 + 1) )
        {
          ++v38;
          break;
        }
        if ( !*(_BYTE *)(v40 + v38 + 2) )
        {
          v38 += 2;
          break;
        }
        v9 = v38 + 2 <= 0x7FFFF;
        v38 += 3;
        if ( !v9 )
        {
          v38 = 0;
          break;
        }
      }
      v9 = v38 < v36;
      v84 = &sead__SafeStringBase__vtable;
      v41 = &byte_60B3BA34;
      if ( !v9 )
        v41 = (char *)(v40 + v36);
      if ( v36 < 0 )
        v41 = &byte_60B3BA34;
      v85 = v41;
      v42 = v39[249];
      (*(void (__fastcall **)(_DWORD *))(v39[248] + 12))(v39 + 248);
      v43 = v39[249];
      v16 = 0;
      while ( *(_BYTE *)(v43 + v16) )
      {
        if ( !*(_BYTE *)(v43 + v16 + 1) )
        {
          ++v16;
          break;
        }
        if ( !*(_BYTE *)(v43 + v16 + 2) )
        {
          v16 += 2;
          break;
        }
        v9 = v16 + 2 <= 0x7FFFF;
        v16 += 3;
        if ( !v9 )
        {
          v16 = 0;
          break;
        }
      }
      v17 = v83;
      v18 = v39[250] - v83;
      v19 = v18 - 1;
      if ( v18 > 1 )
        v19 = 1;
      if ( v19 >= 1 )
      {
        ((void (__fastcall *)(int (***)()))v84[3])(&v84);
        qmemcpy((void *)(v42 + v83), v85, v19);
        v17 = v83;
        if ( v19 + v83 > v16 )
          *(_BYTE *)(v42 + v19 + v83) = 0;
      }
      v5 = v78;
      v15 = v17 + 1;
      v12 = *v78 + 1;
      *v78 = v12;
    }
    if ( ((unsigned int)&dword_60C89480 & ~(1612187368 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C89480) )
    {
      dword_60C89488 = (int)&sead__SafeStringBase__vtable;
      dword_60C8948C = (int)&unk_60AF7B00;
      _cxa_guard_release(&dword_60C89480);
    }
    v44 = 0;
    v45 = FIELD_U32(a1, 28);
    if ( v45 >= 0x100 )
      v45 = 0;
    v46 = a1 + 1096 * v45 + 48 * v81 + 24 * v79;
    v47 = FIELD_U32(v46, 992);
    v46 += 992;
    v80 = FIELD_U32(v46, 4);
    (*(void (__fastcall **)(int))(v47 + 12))(v46);
    v48 = FIELD_U32(v46, 4);
    while ( 1 )
    {
      if ( !*(_BYTE *)(v48 + v44) )
      {
        v49 = 3 * v79;
        goto LABEL_116;
      }
      if ( !*(_BYTE *)(v48 + v44 + 1) )
      {
        v49 = 3 * v79;
        ++v44;
        goto LABEL_116;
      }
      if ( !*(_BYTE *)(v48 + v44 + 2) )
        break;
      v9 = v44 + 2 <= 0x7FFFF;
      v44 += 3;
      if ( !v9 )
      {
        v49 = 3 * v79;
        v44 = 0;
        goto LABEL_116;
      }
    }
    v49 = 3 * v79;
    v44 += 2;
LABEL_116:
    v50 = v83;
    v51 = v83;
    if ( v83 < 0 )
    {
      v51 = v83 + v44 + 1;
      if ( v51 <= 0 )
        v51 = 0;
    }
    v52 = *(_DWORD *)(a1 + 1096 * v45 + 48 * v81 + 8 * v49 + 1000) - v51;
    v53 = v52 - 1;
    if ( v52 > 1 )
      v53 = 1;
    if ( v53 >= 1 )
    {
      (*(void (__fastcall **)(int *))(dword_60C89488 + 12))(&dword_60C89488);
      qmemcpy((void *)(v80 + v51), (const void *)dword_60C8948C, v53);
      v50 = v83;
      if ( v53 + v51 > v44 )
        *(_BYTE *)(v80 + v53 + v51) = 0;
    }
    if ( v50 >= 1 )
    {
      v54 = FIELD_U32(a1, 28);
      if ( v54 >= 0x100 )
        v54 = 0;
      ++*(_DWORD *)(a1 + 1096 * v54 + 4 * v81 + 1104);
    }
    v5 = v78;
    v55 = *v78;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v56 = a2[1];
    v57 = 0;
    while ( *(_BYTE *)(v56 + v57) )
    {
      if ( !*(_BYTE *)(v56 + v57 + 1) )
      {
        ++v57;
        break;
      }
      if ( !*(_BYTE *)(v56 + v57 + 2) )
      {
        v57 += 2;
        break;
      }
      v9 = v57 + 2 <= 0x7FFFF;
      v57 += 3;
      if ( !v9 )
      {
        v57 = 0;
        break;
      }
    }
    v9 = v57 < v55;
    v58 = &byte_60B3BA34;
    if ( !v9 )
      v58 = (char *)(v56 + v55);
    if ( v55 < 0 )
      v58 = &byte_60B3BA34;
    if ( *v58 == 34 )
      goto LABEL_141;
    if ( (v76 & 1) == 0 )
    {
      v60 = *v78;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v61 = a2[1];
      v62 = 0;
      while ( *(_BYTE *)(v61 + v62) )
      {
        if ( !*(_BYTE *)(v61 + v62 + 1) )
        {
          ++v62;
          break;
        }
        if ( !*(_BYTE *)(v61 + v62 + 2) )
        {
          v62 += 2;
          break;
        }
        v9 = v62 + 2 <= 0x7FFFF;
        v62 += 3;
        if ( !v9 )
        {
          v62 = 0;
          break;
        }
      }
      v9 = v62 < v60;
      v63 = &byte_60B3BA34;
      if ( !v9 )
        v63 = (char *)(v61 + v60);
      if ( v60 < 0 )
        v63 = &byte_60B3BA34;
      if ( *v63 == 44 )
        break;
    }
    v64 = *v78;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v65 = a2[1];
    v66 = 0;
    while ( *(_BYTE *)(v65 + v66) )
    {
      if ( !*(_BYTE *)(v65 + v66 + 1) )
      {
        ++v66;
        break;
      }
      if ( !*(_BYTE *)(v65 + v66 + 2) )
      {
        v66 += 2;
        break;
      }
      v9 = v66 + 2 <= 0x7FFFF;
      v66 += 3;
      if ( !v9 )
      {
        v66 = 0;
        break;
      }
    }
    v9 = v66 < v64;
    v67 = &byte_60B3BA34;
    if ( !v9 )
      v67 = (char *)(v65 + v64);
    if ( v64 < 0 )
      v67 = &byte_60B3BA34;
    if ( *v67 == 13 )
    {
      v68 = *v78;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v69 = a2[1];
      v70 = 0;
      while ( *(_BYTE *)(v69 + v70) )
      {
        if ( !*(_BYTE *)(v69 + v70 + 1) )
        {
          ++v70;
          break;
        }
        if ( !*(_BYTE *)(v69 + v70 + 2) )
        {
          v70 += 2;
          break;
        }
        v9 = v70 + 2 <= 0x7FFFF;
        v70 += 3;
        if ( !v9 )
        {
          v70 = 0;
          break;
        }
      }
      v9 = v70 <= v68;
      v71 = &byte_60B3BA34;
      if ( !v9 )
        v71 = (char *)(v69 + v68 + 1);
      if ( v68 < -1 )
        v71 = &byte_60B3BA34;
      if ( *v71 == 10 )
        break;
    }
    ++v11;
  }
  result = v83;
  if ( !v83 )
  {
    v72 = *v78;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v73 = a2[1];
    v74 = 0;
    while ( *(_BYTE *)(v73 + v74) )
    {
      if ( !*(_BYTE *)(v73 + v74 + 1) )
      {
        ++v74;
        break;
      }
      if ( !*(_BYTE *)(v73 + v74 + 2) )
      {
        v74 += 2;
        break;
      }
      v9 = v74 + 2 <= 0x7FFFF;
      v74 += 3;
      if ( !v9 )
      {
        v74 = 0;
        break;
      }
    }
    v9 = v74 < v72;
    v75 = &byte_60B3BA34;
    if ( !v9 )
      v75 = (char *)(v73 + v72);
    if ( v72 < 0 )
      v75 = &byte_60B3BA34;
    result = (unsigned __int8)*v75;
    if ( result == 44 )
    {
LABEL_141:
      result = *v78 + 1;
      *v78 = result;
    }
  }
  return result;
}
