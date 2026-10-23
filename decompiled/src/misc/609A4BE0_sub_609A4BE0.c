/* sub_609A4BE0
 * address: 0x609A4BE0   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A4BE0(_DWORD *a1, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r7
  _BYTE *v5; // r4
  unsigned __int8 *v6; // r12
  char *v7; // r6
  unsigned int v8; // r8
  int v9; // r5
  bool v10; // zf
  unsigned int v11; // r0
  _DWORD *v13; // r10
  unsigned int v14; // r7
  unsigned int v15; // r4
  unsigned int v16; // r5
  unsigned int v17; // r11
  int v18; // r1
  int v19; // r4
  _DWORD *v20; // r6
  unsigned __int8 *v21; // r7
  int v22; // r0
  bool v23; // cc
  unsigned int v24; // r1
  unsigned int v25; // r10
  int v26; // r2
  unsigned int v27; // r0
  int v28; // r0
  char *v29; // r1
  unsigned int v30; // r7
  int v31; // r3
  int v32; // r0
  char *v33; // r1
  char *v34; // r0
  unsigned int v35; // r2
  char v36; // r3
  bool v37; // cf
  char *v38; // [sp+0h] [bp-58h]
  unsigned int v39; // [sp+4h] [bp-54h]
  char *v40; // [sp+8h] [bp-50h]
  unsigned int v41; // [sp+10h] [bp-48h]
  unsigned int v42; // [sp+14h] [bp-44h]
  _DWORD *v43; // [sp+1Ch] [bp-3Ch]
  unsigned int v44; // [sp+20h] [bp-38h]
  int v45; // [sp+24h] [bp-34h]
  _DWORD *v46; // [sp+28h] [bp-30h]
  unsigned int v47; // [sp+2Ch] [bp-2Ch]

  LOBYTE(v4) = *a2;
  v5 = (_BYTE *)a1[2];
  if ( *a2 )
  {
    v6 = a2;
    v8 = 0;
    do
    {
      *v5 = v4;
      v4 = a2[v8 + 1];
      v9 = a1[2];
      ++v8;
      v5 = (_BYTE *)(v9 + v8);
    }
    while ( v4 );
    *(_BYTE *)(v9 + v8) = 0;
    v10 = v8 == 0;
    v7 = (char *)a1[3];
    if ( v8 )
      v10 = a3 == 0;
    if ( v10 )
      goto LABEL_9;
    v13 = a1 - 34;
    v14 = v8 - 2;
    v15 = 0;
    v16 = 0;
    v42 = a3;
    v41 = a4;
    v46 = a1;
    v40 = (char *)a1[3];
    v38 = v7 + 1;
    v43 = a1 - 34;
    v39 = a3 - 1;
    while ( 1 )
    {
      v18 = v6[v16];
      if ( v16 >= a4 && v16 <= v14 && v18 == 38 )
        break;
      v7[v15++] = v18;
LABEL_59:
      v37 = ++v16 >= v8;
      if ( v16 < v8 )
        v37 = v15 >= a3;
      if ( v37 )
      {
        v11 = v39;
        goto LABEL_10;
      }
    }
    v45 = v15;
    v19 = a1[7];
    v20 = (_DWORD *)(v19 - 160);
    if ( (_DWORD *)(v19 - 160) == v13 )
    {
      v7 = v40;
      v15 = v45;
      v27 = v16 + 1;
      v17 = 0;
    }
    else
    {
      v47 = a3 - v16 - 1;
      while ( 2 )
      {
        v21 = v6;
        (*(void (__fastcall **)(_DWORD *))(*v20 + 12))(v20);
        v22 = v20[1];
        v6 = v21;
        v17 = 0;
        while ( *(_BYTE *)(v22 + v17) )
        {
          if ( !*(_BYTE *)(v22 + v17 + 1) )
          {
            ++v17;
            break;
          }
          if ( !*(_BYTE *)(v22 + v17 + 2) )
          {
            v17 += 2;
            break;
          }
          v23 = (int)(v17 + 2) <= 0x7FFFF;
          v17 += 3;
          if ( !v23 )
          {
            v24 = v39 - v16;
            v17 = 0;
            goto LABEL_28;
          }
        }
        v24 = v47;
        if ( v17 > v47 )
          return 0;
LABEL_28:
        if ( v21[v16 + 1 + v17] == 59 )
        {
          v44 = v24;
          (*(void (__fastcall **)(_DWORD *))(*v20 + 12))(v20);
          v25 = 0;
          if ( !v17 )
          {
            v17 = 0;
LABEL_38:
            v15 = v45;
            (*(void (__fastcall **)(_DWORD *))(v20[5] + 12))(v20 + 5);
            v28 = v20[6];
            while ( *(_BYTE *)(v28 + v25) )
            {
              if ( !*(_BYTE *)(v28 + v25 + 1) )
              {
                ++v25;
                break;
              }
              if ( !*(_BYTE *)(v28 + v25 + 2) )
              {
                v25 += 2;
                break;
              }
              v23 = (int)(v25 + 2) <= 0x7FFFF;
              v25 += 3;
              if ( !v23 )
              {
                v25 = 0;
                goto LABEL_49;
              }
            }
            if ( v25 > v44 )
              return 0;
LABEL_49:
            (*(void (__fastcall **)(_DWORD *))(v20[5] + 12))(v20 + 5);
            if ( v25 )
            {
              v29 = (char *)v20[6];
              v6 = v21;
              v7 = v40;
              v30 = v16 + 1;
              v31 = 0;
              v32 = v45;
              if ( (v25 & 1) != 0 )
              {
                v31 = 1;
                v40[v45] = *v29;
                v32 = v45 + 1;
              }
              if ( v25 != 1 )
              {
                v33 = &v29[v31 + 1];
                v34 = &v38[v32];
                v35 = v25 - v31;
                do
                {
                  v35 -= 2;
                  *(v34 - 1) = *(v33 - 1);
                  v36 = *v33;
                  v33 += 2;
                  *v34 = v36;
                  v34 += 2;
                }
                while ( v35 );
              }
              v15 = v25 + v45;
            }
            else
            {
              v6 = v21;
              v7 = v40;
              v30 = v16 + 1;
            }
            a3 = v42;
            a4 = v41;
            a1 = v46;
            v13 = v43;
            v16 = v30 + v17;
            goto LABEL_58;
          }
          v6 = v21;
          v26 = 0;
          while ( *(unsigned __int8 *)(v20[1] + v26) == *(unsigned __int8 *)(v46[2] + v16 + 1 + v26) )
          {
            if ( ++v26 >= v17 )
              goto LABEL_38;
          }
          v13 = v43;
          v17 = 0;
        }
        v19 = FIELD_U32(v19, 4);
        v20 = (_DWORD *)(v19 - 160);
        if ( (_DWORD *)(v19 - 160) != v13 )
          continue;
        break;
      }
      v7 = v40;
      v15 = v45;
      v27 = v16 + 1;
    }
    v16 = v27 + v17;
    a3 = v42;
    a4 = v41;
    a1 = v46;
LABEL_58:
    v14 = v8 - 2;
    goto LABEL_59;
  }
  *v5 = 0;
  v6 = a2;
  v7 = (char *)a1[3];
LABEL_9:
  v11 = a3 - 1;
  v15 = 0;
LABEL_10:
  if ( v15 < a3 )
    v11 = v15;
  v7[v11] = 0;
  qmemcpy(v6, v7, v11 + 1);
  return 1;
}
