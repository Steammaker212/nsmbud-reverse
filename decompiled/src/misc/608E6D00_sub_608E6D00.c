/* sub_608E6D00
 * address: 0x608E6D00   size: 2276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6D00(_BYTE *a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r10
  int v6; // r7
  int v8; // r9
  int v9; // r4
  int v10; // r0
  bool v11; // cc
  _DWORD *v12; // r7
  int v13; // r6
  bool v14; // zf
  int v15; // r1
  int v16; // r0
  int i; // r7
  unsigned __int8 *v18; // r7
  int v19; // t1
  int v20; // r0
  int j; // r1
  bool v22; // zf
  int v23; // r6
  int v24; // r5
  _DWORD *v25; // r4
  char *v26; // r4
  char *v27; // r4
  int k; // r1
  int v29; // r6
  int v30; // r5
  signed int v31; // r9
  char *v32; // r9
  int v33; // r5
  int v34; // r6
  signed int v35; // r4
  int v36; // r1
  int v37; // r0
  int m; // r4
  unsigned __int8 *v39; // r4
  int v40; // t1
  int v41; // r0
  int n; // r1
  bool v43; // zf
  int v44; // [sp+20h] [bp-300h]
  _BYTE *v45; // [sp+24h] [bp-2FCh]
  int v46; // [sp+2Ch] [bp-2F4h]
  int v47; // [sp+30h] [bp-2F0h]
  _DWORD *v48; // [sp+34h] [bp-2ECh]
  int (**v49)(); // [sp+38h] [bp-2E8h] BYREF
  char *v50; // [sp+3Ch] [bp-2E4h]
  int (**v51)(); // [sp+40h] [bp-2E0h] BYREF
  int *v52; // [sp+44h] [bp-2DCh]
  int v53; // [sp+48h] [bp-2D8h]
  int v54; // [sp+4Ch] [bp-2D4h] BYREF
  _DWORD *v55; // [sp+CCh] [bp-254h] BYREF
  int v56; // [sp+D0h] [bp-250h]
  int (**v57)(); // [sp+D4h] [bp-24Ch] BYREF
  const char *v58; // [sp+D8h] [bp-248h]
  _DWORD *v59; // [sp+DCh] [bp-244h]
  int v60; // [sp+E0h] [bp-240h]
  int (**v61)(); // [sp+E4h] [bp-23Ch] BYREF
  const char *v62; // [sp+E8h] [bp-238h]
  int (**v63)(); // [sp+ECh] [bp-234h] BYREF
  char *v64; // [sp+F0h] [bp-230h]
  int v65; // [sp+F4h] [bp-22Ch]
  int v66; // [sp+F8h] [bp-228h] BYREF
  _BYTE v67[37]; // [sp+2FBh] [bp-25h] BYREF

  v5 = a2;
  v6 = 0;
  if ( a1[76] )
  {
    v67[0] = 0;
    if ( (*(int (__fastcall **)(_BYTE *, _BYTE *, _DWORD *))(*(_DWORD *)a1 + 92))(a1, v67, a2) == 1 )
    {
      v6 = 1;
      if ( !v67[0] )
      {
        v64 = (char *)&v66;
        v63 = &BufferedSafeStringBase_char_vtable_probably;
        v65 = 512;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v63);
        *v64 = 0;
        v63 = &off_60BF9F58;
        v8 = 1;
        if ( sub_608E9B50(&v63, v5) == 1 )
        {
          v8 = 1;
          v6 = 0;
          while ( 1 )
          {
            v67[0] = 0;
            if ( !a1[76]
              || (*(int (__fastcall **)(_BYTE *, _BYTE *, int (***)()))(*(_DWORD *)a1 + 92))(a1, v67, &v63) != 1 )
            {
              break;
            }
            if ( v67[0] )
              goto LABEL_14;
            ++v8;
            if ( !sub_608E9B50(&v63, &v63) )
              goto LABEL_11;
          }
        }
        else
        {
LABEL_11:
          if ( v65 <= 0 )
            ((void (__fastcall *)(int (***)()))v63[3])(&v63);
          else
            *v64 = 0;
LABEL_14:
          v9 = 0;
          v59 = v5;
          v60 = 0;
          v61 = &sead__SafeStringBase__vtable;
          v62 = "/";
          (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
          v10 = v5[1];
          v44 = a3;
          while ( *(_BYTE *)(v10 + v9) )
          {
            if ( !*(_BYTE *)(v10 + v9 + 1) )
            {
              ++v9;
              break;
            }
            if ( !*(_BYTE *)(v10 + v9 + 2) )
            {
              v9 += 2;
              break;
            }
            v11 = v9 + 2 <= 0x7FFFF;
            v9 += 3;
            if ( !v11 )
            {
              v9 = 0;
              break;
            }
          }
          v12 = v59;
          v13 = v60;
          v48 = v5;
          v47 = v9 + 1;
          v14 = v59 == v5;
          if ( v59 == v5 )
          {
            v9 = 0;
            v14 = v60 == v47;
          }
          if ( !v14 )
          {
            v9 = 0;
            do
            {
              (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
              v15 = v12[1];
              ++v9;
              v16 = 0;
              do
              {
                if ( !*(_BYTE *)(v15 + v16) )
                  goto LABEL_36;
                if ( !*(_BYTE *)(v15 + v16 + 1) )
                {
                  ++v16;
                  if ( v13 < 0 )
                    goto LABEL_39;
                  goto LABEL_37;
                }
                if ( !*(_BYTE *)(v15 + v16 + 2) )
                {
                  v16 += 2;
LABEL_36:
                  if ( v13 >= 0 )
                    goto LABEL_37;
LABEL_39:
                  v13 = v60;
                  goto LABEL_50;
                }
                v11 = v16 + 2 <= 0x7FFFF;
                v16 += 3;
              }
              while ( v11 );
              v16 = 0;
              if ( v13 < 0 )
                goto LABEL_39;
LABEL_37:
              if ( v13 > v16 )
                goto LABEL_39;
              for ( i = v59[1]; ; i = v59[1] )
              {
                v19 = *(unsigned __int8 *)(i + v13);
                v18 = (unsigned __int8 *)(i + v13);
                if ( !v19 )
                  break;
                ((void (__fastcall *)(int (***)()))v61[3])(&v61);
                v20 = *v18;
                for ( j = 1; v62[j - 1]; j += 2 )
                {
                  if ( (unsigned __int8)v62[j - 1] == v20 )
                    goto LABEL_49;
                  if ( j >= 524289 || !v62[j] )
                    break;
                  if ( (unsigned __int8)v62[j] == v20 )
                    goto LABEL_49;
                }
                ++v13;
              }
LABEL_49:
              v60 = ++v13;
LABEL_50:
              v12 = v59;
              v22 = v59 == v5;
              if ( v59 == v5 )
                v22 = v13 == v47;
            }
            while ( !v22 );
          }
          v23 = 0;
          v6 = 1;
          v45 = a1;
          v55 = v5;
          v56 = 0;
          v57 = &sead__SafeStringBase__vtable;
          v58 = "/";
          if ( v47 )
          {
            v24 = v9 - v8;
            v25 = v5;
            do
            {
              if ( v24 < 1 )
              {
                v52 = &v54;
                v51 = &BufferedSafeStringBase_char_vtable_probably;
                v53 = 128;
                sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v51);
                *(_BYTE *)v52 = 0;
                v51 = &off_60BD95A8;
                sub_608E7618(&v55, &v51);
                v49 = &sead__SafeStringBase__vtable;
                v50 = &byte_60ABC94D;
                ((void (__fastcall *)(int (***)()))v63[3])(&v63);
                ((void (__fastcall *)(int (***)()))v63[3])(&v63);
                v26 = v64;
                ((void (__fastcall *)(int (***)()))v49[3])(&v49);
                v46 = v24;
                if ( v26 != v50 )
                {
                  v27 = v64;
                  for ( k = 1; v64[k - 1] == v50[k - 1]; k += 2 )
                  {
                    if ( !v64[k - 1] )
                      goto LABEL_89;
                    if ( k >= 524289 || v64[k] != v50[k] )
                      break;
                    if ( !v64[k] )
                      goto LABEL_89;
                  }
                  v49 = &sead__SafeStringBase__vtable;
                  v50 = "/";
                  ((void (__fastcall *)(int (***)()))v63[3])(&v63);
                  v29 = 0;
                  while ( v64[v29] )
                  {
                    if ( !v64[v29 + 1] )
                    {
                      ++v29;
                      break;
                    }
                    if ( !v64[v29 + 2] )
                    {
                      v29 += 2;
                      break;
                    }
                    v11 = v29 + 2 <= 0x7FFFF;
                    v29 += 3;
                    if ( !v11 )
                    {
                      v29 = 0;
                      break;
                    }
                  }
                  ((void (__fastcall *)(int (***)()))v49[3])(&v49);
                  v30 = 0;
                  v31 = 0;
                  if ( v29 > 0 )
                    v30 = v29;
                  while ( v50[v31] )
                  {
                    if ( !v50[v31 + 1] )
                    {
                      ++v31;
                      break;
                    }
                    if ( !v50[v31 + 2] )
                    {
                      v31 += 2;
                      break;
                    }
                    v11 = v31 + 2 <= 0x7FFFF;
                    v31 += 3;
                    if ( !v11 )
                    {
                      v31 = 0;
                      break;
                    }
                  }
                  if ( v31 >= v65 - v30 )
                    v31 = v65 - v30 - 1;
                  if ( v31 >= 1 )
                  {
                    ((void (__fastcall *)(int (***)()))v49[3])(&v49);
                    qmemcpy(&v27[v30], v50, v31);
                    if ( v31 + v30 > v29 )
                      v27[v31 + v30] = 0;
                  }
                }
LABEL_89:
                v32 = v64;
                ((void (__fastcall *)(int (***)()))v63[3])(&v63);
                v33 = 0;
                while ( v64[v33] )
                {
                  if ( !v64[v33 + 1] )
                  {
                    ++v33;
                    break;
                  }
                  if ( !v64[v33 + 2] )
                  {
                    v33 += 2;
                    break;
                  }
                  v11 = v33 + 2 <= 0x7FFFF;
                  v33 += 3;
                  if ( !v11 )
                  {
                    v33 = 0;
                    break;
                  }
                }
                ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                v34 = 0;
                v35 = 0;
                if ( v33 > 0 )
                  v34 = v33;
                while ( *((_BYTE *)v52 + v35) )
                {
                  if ( !*((_BYTE *)v52 + v35 + 1) )
                  {
                    ++v35;
                    break;
                  }
                  if ( !*((_BYTE *)v52 + v35 + 2) )
                  {
                    v35 += 2;
                    break;
                  }
                  v11 = v35 + 2 <= 0x7FFFF;
                  v35 += 3;
                  if ( !v11 )
                  {
                    v35 = 0;
                    break;
                  }
                }
                if ( v35 >= v65 - v34 )
                  v35 = v65 - v34 - 1;
                if ( v35 >= 1 )
                {
                  ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                  qmemcpy(&v32[v34], v52, v35);
                  if ( v35 + v34 > v33 )
                    v32[v35 + v34] = 0;
                }
                if ( !v45[76]
                  || !(*(int (__fastcall **)(_BYTE *, int (***)(), int))(*(_DWORD *)v45 + 108))(v45, &v63, v44) )
                {
                  return 0;
                }
                v25 = v55;
                v23 = v56;
                v5 = v48;
                v24 = v46;
              }
              else
              {
                --v24;
              }
              (*(void (__fastcall **)(_DWORD *))(*v25 + 12))(v25);
              v36 = v25[1];
              v37 = 0;
              do
              {
                if ( !*(_BYTE *)(v36 + v37) )
                  goto LABEL_124;
                if ( !*(_BYTE *)(v36 + v37 + 1) )
                {
                  ++v37;
                  if ( v23 < 0 )
                    goto LABEL_127;
                  goto LABEL_125;
                }
                if ( !*(_BYTE *)(v36 + v37 + 2) )
                {
                  v37 += 2;
LABEL_124:
                  if ( v23 >= 0 )
                    goto LABEL_125;
LABEL_127:
                  v23 = v56;
                  goto LABEL_138;
                }
                v11 = v37 + 2 <= 0x7FFFF;
                v37 += 3;
              }
              while ( v11 );
              v37 = 0;
              if ( v23 < 0 )
                goto LABEL_127;
LABEL_125:
              if ( v23 > v37 )
                goto LABEL_127;
              for ( m = v55[1]; ; m = v55[1] )
              {
                v40 = *(unsigned __int8 *)(m + v23);
                v39 = (unsigned __int8 *)(m + v23);
                if ( !v40 )
                  break;
                ((void (__fastcall *)(int (***)()))v57[3])(&v57);
                v41 = *v39;
                for ( n = 1; v58[n - 1]; n += 2 )
                {
                  if ( (unsigned __int8)v58[n - 1] == v41 )
                    goto LABEL_137;
                  if ( n >= 524289 || !v58[n] )
                    break;
                  if ( (unsigned __int8)v58[n] == v41 )
                    goto LABEL_137;
                }
                ++v23;
              }
LABEL_137:
              v56 = ++v23;
LABEL_138:
              v25 = v55;
              v43 = v55 == v5;
              if ( v55 == v5 )
                v43 = v23 == v47;
            }
            while ( !v43 );
          }
        }
      }
    }
  }
  return v6;
}
