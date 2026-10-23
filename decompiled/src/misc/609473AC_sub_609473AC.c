/* sub_609473AC
 * address: 0x609473AC   size: 1324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609473AC(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, float a5)
{
  int result; // r0
  unsigned int v11; // r0
  bool v12; // zf
  unsigned int v13; // r10
  int v14; // r11
  unsigned int v15; // r9
  int v16; // r0
  _DWORD *v17; // r6
  bool v18; // zf
  _DWORD *v19; // r7
  unsigned int v20; // r0
  _DWORD *v21; // r3
  unsigned int v22; // r7
  unsigned int v23; // r0
  _DWORD *v24; // r10
  unsigned int v25; // r7
  int v26; // r11
  char *v27; // r6
  bool v28; // zf
  unsigned int v29; // r0
  _DWORD *v30; // r9
  bool v31; // zf
  unsigned int v32; // r11
  int v33; // r10
  char *v34; // r6
  int v35; // r0
  _DWORD *v36; // r7
  _DWORD *v37; // r5
  unsigned int v38; // r0
  unsigned int v39; // r7
  int v40; // r11
  int v41; // r9
  unsigned int v42; // r0
  char *v43; // r10
  unsigned int v44; // r7
  char *v45; // r5
  _DWORD *v46; // r6
  int v47; // r6
  _DWORD *v48; // r5
  int v49; // [sp+8h] [bp-48h]
  unsigned int v50; // [sp+Ch] [bp-44h]
  _DWORD *v51; // [sp+10h] [bp-40h]
  int v52; // [sp+14h] [bp-3Ch]
  unsigned int v53; // [sp+14h] [bp-3Ch]
  _DWORD *v54; // [sp+18h] [bp-38h]
  _DWORD *v55; // [sp+1Ch] [bp-34h]

  result = (*(int (__fastcall **)(_DWORD *, float))(*a1 + 16))(a1, a5);
  if ( result == 1 )
  {
    v55 = a2;
    v54 = a4;
    if ( a3 )
    {
      v11 = FIELD_U32(a3, 8);
      v12 = HIWORD(v11) == 0;
      if ( !HIWORD(v11) )
        goto LABEL_68;
      v13 = HIWORD(v11);
      v49 = a3;
      v14 = 0;
      v15 = HIWORD(v11);
      v50 = HIWORD(v11);
      v16 = (4 * v11) & 0x3FFFC;
      if ( !v12 )
        v15 = a3 + v16;
      v17 = 0;
      do
      {
        v18 = v15 == 0;
        v19 = v17;
        if ( v15 )
        {
          a2 = (_DWORD *)a1[1];
          v18 = a2 == 0;
        }
        if ( v18 )
          goto LABEL_26;
        if ( v17 )
          a2 = v17;
        v17 = a2;
        while ( !(*(int (__fastcall **)(_DWORD *, unsigned int))(*v17 + 32))(v17, v15) )
        {
          v17 = (_DWORD *)v17[5];
          if ( !v17 )
            v17 = (_DWORD *)a1[1];
          if ( v17 == a2 )
            goto LABEL_26;
        }
        if ( !v17 )
        {
LABEL_26:
          if ( a4 && (v23 = a4[2], HIWORD(v23)) )
          {
            v24 = 0;
            v51 = v19;
            v25 = HIWORD(v23);
            v52 = v14;
            v26 = 0;
            v27 = (char *)a4 + ((4 * v23) & 0x3FFFC);
            do
            {
              v28 = v27 == 0;
              if ( v27 )
              {
                a4 = (_DWORD *)a1[1];
                v28 = a4 == 0;
              }
              if ( !v28 )
              {
                if ( v24 )
                  a4 = v24;
                a2 = a4;
                while ( !(*(int (__fastcall **)(_DWORD *, char *))(*a2 + 32))(a2, v27) )
                {
                  a2 = (_DWORD *)a2[5];
                  if ( !a2 )
                    a2 = (_DWORD *)a1[1];
                  if ( a2 == a4 )
                    goto LABEL_42;
                }
                if ( a2 )
                {
                  sub_60947DB0(a2, v55, 0, v27, a5, a1);
                  v24 = a2;
                }
              }
LABEL_42:
              ++v26;
              v27 += 8;
            }
            while ( v26 != v25 );
            v17 = v51;
            a4 = v54;
            v13 = v50;
            v14 = v52;
          }
          else
          {
            v17 = v19;
          }
        }
        else
        {
          if ( a4 )
          {
            v20 = a4[2];
            v21 = 0;
            if ( HIWORD(v20) )
            {
              v22 = HIWORD(v20);
              a2 = (_DWORD *)((char *)a4 + ((4 * v20) & 0x3FFFC));
              while ( !(*(int (__fastcall **)(_DWORD *, _DWORD *))(*v17 + 32))(v17, a2) )
              {
                --v22;
                a2 += 2;
                if ( !v22 )
                {
                  a4 = v54;
                  goto LABEL_25;
                }
              }
              a4 = v54;
              v21 = a2;
            }
          }
          else
          {
LABEL_25:
            v21 = 0;
          }
          sub_60947DB0(v17, v55, v15, v21, a5, a1);
        }
        ++v14;
        v15 += 8;
      }
      while ( v14 != v13 );
    }
    else
    {
      if ( !a4 )
        goto LABEL_88;
      v29 = a4[2];
      v30 = 0;
      v31 = HIWORD(v29) == 0;
      if ( !HIWORD(v29) )
        goto LABEL_88;
      v32 = HIWORD(v29);
      v49 = 0;
      v33 = 0;
      v34 = (char *)HIWORD(v29);
      v35 = (4 * v29) & 0x3FFFC;
      if ( !v31 )
        v34 = (char *)a4 + v35;
      do
      {
        if ( v34 )
        {
          v36 = (_DWORD *)a1[1];
          if ( v36 )
          {
            if ( v30 )
              v36 = v30;
            v37 = v36;
            while ( !(*(int (__fastcall **)(_DWORD *, char *))(*v37 + 32))(v37, v34) )
            {
              v37 = (_DWORD *)v37[5];
              if ( !v37 )
                v37 = (_DWORD *)a1[1];
              if ( v37 == v36 )
                goto LABEL_63;
            }
            a4 = v54;
            if ( v37 )
            {
              sub_60947DB0(v37, v55, 0, v34, a5, a1);
              v30 = v37;
            }
          }
          else
          {
LABEL_63:
            a4 = v54;
          }
        }
        ++v33;
        v34 += 8;
      }
      while ( v33 != v32 );
    }
    a3 = v49;
    if ( v49 )
    {
LABEL_68:
      v38 = FIELD_U32(a3, 4);
      v39 = HIWORD(v38);
      if ( HIWORD(v38) )
      {
        v40 = a3 + ((4 * v38) & 0x3FFFC);
        if ( a4 )
        {
          v41 = 0;
          v53 = HIWORD(v38);
          do
          {
            if ( v40 && (v46 = (_DWORD *)a1[3]) != 0 )
            {
              while ( !(*(int (__fastcall **)(_DWORD *, int))(*v46 + 24))(v46, v40) )
              {
                v46 = (_DWORD *)v46[6];
                if ( !v46 )
                  goto LABEL_85;
              }
              v42 = a4[1];
              v43 = 0;
              if ( HIWORD(v42) )
              {
                v44 = HIWORD(v42);
                v45 = (char *)a4 + ((4 * v42) & 0x3FFFC);
                while ( !(*(int (__fastcall **)(_DWORD *, char *))(*v46 + 24))(v46, v45) )
                {
                  --v44;
                  v45 += 12;
                  if ( !v44 )
                    goto LABEL_79;
                }
                v43 = v45;
LABEL_79:
                a4 = v54;
                v39 = v53;
              }
              sub_609473AC(v46, v55, v40, v43, a5);
            }
            else
            {
LABEL_85:
              sub_6094793C(a1, v55, a4, a5);
            }
            ++v41;
            v40 += 12;
          }
          while ( v41 != v39 );
        }
        else
        {
          v47 = 0;
          do
          {
            if ( v40 && (v48 = (_DWORD *)a1[3]) != 0 )
            {
              while ( !(*(int (__fastcall **)(_DWORD *, int))(*v48 + 24))(v48, v40) )
              {
                v48 = (_DWORD *)v48[6];
                if ( !v48 )
                  goto LABEL_94;
              }
              sub_609473AC(v48, v55, v40, 0, a5);
            }
            else
            {
LABEL_94:
              sub_6094793C(a1, v55, 0, a5);
            }
            ++v47;
            v40 += 12;
          }
          while ( v47 != v39 );
        }
      }
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1);
    }
LABEL_88:
    sub_6094793C(a1, v55, a4, a5);
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1);
  }
  return result;
}
