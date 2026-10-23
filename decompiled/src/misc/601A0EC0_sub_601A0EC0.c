/* sub_601A0EC0
 * address: 0x601A0EC0   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A0EC0(int a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v3; // r5
  int v4; // r7
  unsigned int v7; // r0
  int v9; // r6
  _DWORD *v10; // r0
  int v11; // r1
  bool v12; // zf
  int v13; // r2
  _DWORD *v14; // r4
  int result; // r0
  _DWORD *v16; // r1
  int v17; // r7
  int v18; // r0
  bool v19; // cc
  char *v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r1
  char *v24; // r0
  int v25; // r0
  int v26; // r1
  char *v27; // r0
  int v28; // r1
  int v29; // r6
  _DWORD *v30; // r0
  int v31; // r1
  bool v32; // zf
  int v33; // r2
  _DWORD *v34; // r4
  _DWORD *v35; // r1

  v7 = 0;
  v9 = 0;
  if ( a2 < 9 )
    v7 = a2;
  v10 = (_DWORD *)(a1 + 16 * v7);
  if ( (int)v10[6] < 1 )
    goto LABEL_12;
  v11 = v10[5];
  v12 = v11 == 0;
  if ( v11 )
  {
    v3 = v10 + 7;
    v13 = v10[7];
    v4 = v11 - v13;
    v12 = v11 == v13;
  }
  if ( v12 )
  {
LABEL_12:
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v17 = 0;
    v18 = a3[1];
    while ( *(_BYTE *)(v18 + v9) )
    {
      if ( !*(_BYTE *)(v18 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*(_BYTE *)(v18 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v19 = v9 + 2 <= 0x7FFFF;
      v9 += 3;
      if ( !v19 )
        goto LABEL_54;
    }
    if ( (unsigned int)(v9 - 9) > 1 )
      goto LABEL_54;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v20 = (char *)a3[1];
    v21 = 0;
    while ( v20[v21] )
    {
      if ( !v20[v21 + 1] )
      {
        ++v21;
        break;
      }
      if ( !v20[v21 + 2] )
      {
        v21 += 2;
        break;
      }
      v19 = v21 + 2 <= 0x7FFFF;
      v21 += 3;
      if ( !v19 )
      {
        v21 = 0;
        break;
      }
    }
    if ( v21 < 0 )
      v20 = &byte_60B3BA34;
    if ( *v20 != 82 )
      goto LABEL_54;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v22 = a3[1];
    v23 = 0;
    while ( *(_BYTE *)(v22 + v23) )
    {
      if ( !*(_BYTE *)(v22 + v23 + 1) )
      {
        ++v23;
        break;
      }
      if ( !*(_BYTE *)(v22 + v23 + 2) )
      {
        v23 += 2;
        break;
      }
      v19 = v23 + 2 <= 0x7FFFF;
      v23 += 3;
      if ( !v19 )
      {
        v23 = 0;
        break;
      }
    }
    v24 = (char *)(v22 + 1);
    if ( v23 < 1 )
      v24 = &byte_60B3BA34;
    if ( *v24 != 70 )
      goto LABEL_54;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v25 = a3[1];
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
      v19 = v26 + 2 <= 0x7FFFF;
      v26 += 3;
      if ( !v19 )
      {
        v26 = 0;
        break;
      }
    }
    v27 = (char *)(v25 + 5);
    if ( v26 < 5 )
      v27 = &byte_60B3BA34;
    v28 = (unsigned __int8)*v27;
    result = 0;
    if ( v28 != 70 )
    {
LABEL_54:
      v29 = 0;
      while ( 1 )
      {
        if ( v29 != a2 )
        {
          v30 = (_DWORD *)(a1 + 16 * v29);
          if ( (int)v30[6] >= 1 )
          {
            v31 = v30[5];
            v32 = v31 == 0;
            if ( v31 )
            {
              v3 = v30 + 7;
              v33 = v30[7];
              v17 = v31 - v33;
              v32 = v31 == v33;
            }
            if ( !v32 )
              break;
          }
        }
LABEL_65:
        if ( ++v29 >= 9 )
          return 0;
      }
      v34 = v30 + 4;
      while ( 1 )
      {
        result = sub_60224FD4(v17, a3);
        if ( result )
          break;
        v35 = *(_DWORD **)(*v3 + v17 + 4);
        v17 = (int)v35 - *v3;
        if ( v35 == v34 )
          v17 = 0;
        if ( !v17 )
          goto LABEL_65;
      }
    }
  }
  else
  {
    v14 = v10 + 4;
    while ( 1 )
    {
      result = sub_60224FD4(v4, a3);
      if ( result )
        break;
      v16 = *(_DWORD **)(*v3 + v4 + 4);
      v4 = (int)v16 - *v3;
      if ( v16 == v14 )
        v4 = 0;
      if ( !v4 )
        goto LABEL_12;
    }
  }
  return result;
}
