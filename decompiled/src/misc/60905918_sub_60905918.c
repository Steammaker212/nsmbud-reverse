/* sub_60905918
 * address: 0x60905918   size: 1564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60905918(_DWORD *a1, int (__fastcall ***a2)(_DWORD, _BYTE *, int))
{
  char *result; // r0
  char v5; // r5
  unsigned __int8 v6; // r7
  int v7; // r9
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r0
  _BYTE *v12; // r1
  char *v13; // r2
  _BYTE *v14; // lr
  char *v15; // r2
  char *v16; // r9
  char *v17; // r2
  int v18; // r0
  char *v19; // r0
  char v20; // r5
  int v21; // r7
  int v22; // r5
  char *v23; // r8
  char *v24; // r0
  int v25; // r11
  bool v26; // cc
  bool v27; // zf
  int v28; // r0
  int v29; // r1
  int v30; // r0
  char v31; // r5
  int i; // r1
  int v33; // r2
  signed int v34; // r9
  int (__fastcall ***v35)(_DWORD, _BYTE *, int); // [sp+2Ch] [bp-5Ch]
  _DWORD *v36; // [sp+3Ch] [bp-4Ch]
  _DWORD *v37; // [sp+4Ch] [bp-3Ch]
  int v38; // [sp+54h] [bp-34h]
  int v39; // [sp+54h] [bp-34h]
  int (**v40)(); // [sp+58h] [bp-30h] BYREF
  const char *v41; // [sp+5Ch] [bp-2Ch]
  _BYTE v42[37]; // [sp+63h] [bp-25h] BYREF

  *(_BYTE *)dword_60CCF014 = 0;
  result = (char *)(**a2)(a2, v42, 1);
  if ( result )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v36 = a1;
    v35 = a2;
    v37 = a1 + 1;
    result = &byte_60B3BA34;
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_50;
      v18 = v6;
      if ( v42[0] != v6 )
      {
        if ( v6 == 47 )
          v6 = 42;
        goto LABEL_107;
      }
      v6 = 47;
      if ( v18 != 42 )
        break;
LABEL_107:
      result = (char *)(**a2)(a2, v42, 1);
      if ( !result )
        return result;
    }
    v19 = &byte_60B3BA34;
    if ( (int)a1[3] >= 1 )
      v19 = (char *)a1[2];
    result = (char *)(unsigned __int8)*v19;
    v42[0] = (_BYTE)result;
LABEL_50:
    if ( (v5 & 1) != 0 )
    {
      v20 = v42[0];
      if ( v42[0] == 34 )
      {
        if ( v7 < 2 )
          return result;
        v21 = v7 - 1;
        v22 = dword_60CCF014;
        v23 = (char *)(dword_60CCF014 + v7 - 1);
        v24 = v23;
        if ( dword_60CCF018 < v7 )
          v24 = &byte_60B3BA34;
        result = (char *)(unsigned __int8)*v24;
        if ( result != (char *)92 )
          return result;
        v40 = &sead__SafeStringBase__vtable;
        v41 = "\"";
        (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
        v25 = 0;
        v39 = v7;
        while ( *(_BYTE *)(dword_60CCF014 + v25) )
        {
          if ( !*(_BYTE *)(dword_60CCF014 + v25 + 1) )
          {
            ++v25;
            break;
          }
          if ( !*(_BYTE *)(dword_60CCF014 + v25 + 2) )
          {
            v25 += 2;
            break;
          }
          v26 = v25 + 2 <= 0x7FFFF;
          v25 += 3;
          if ( !v26 )
          {
            v25 = 0;
            break;
          }
        }
        v34 = dword_60CCF018 - v7;
        if ( dword_60CCF018 - v21 > 1 )
          v34 = 1;
        if ( v34 >= 1 )
        {
          ((void (__fastcall *)(int (***)()))v40[3])(&v40);
          qmemcpy(v23, v41, v34);
          if ( v34 + v21 > v25 )
            *(_BYTE *)(v22 + v34 + v21) = 0;
        }
        a1 = v36;
        a2 = v35;
        v7 = v39;
        v5 = 1;
        v6 = 0;
      }
      else
      {
        (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
        v28 = dword_60CCF014;
        v29 = 0;
        while ( *(_BYTE *)(dword_60CCF014 + v29) )
        {
          if ( !*(_BYTE *)(dword_60CCF014 + v29 + 1) )
          {
            ++v29;
            break;
          }
          if ( !*(_BYTE *)(dword_60CCF014 + v29 + 2) )
          {
            v29 += 2;
            break;
          }
          v26 = v29 + 2 <= 0x7FFFF;
          v29 += 3;
          if ( !v26 )
          {
            v29 = 0;
            break;
          }
        }
        ++v7;
        v6 = 0;
        v33 = dword_60CCF018 - 1;
        if ( v29 < dword_60CCF018 - 1 )
        {
          *(_BYTE *)(dword_60CCF014 + v29) = v20;
          v28 += v29;
        }
        v5 = 1;
        if ( v29 < v33 )
          FIELD_U8(v28, 1) = 0;
      }
    }
    else
    {
      v27 = v7 == 0;
      if ( !v7 )
        v27 = v42[0] == 34;
      if ( v27 )
      {
        v5 = 1;
        v7 = 0;
        v6 = 0;
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(a1[1] + 12))(v37);
        v30 = a1[2];
        v31 = v42[0];
        for ( i = 1; *(_BYTE *)(v30 + i - 1); i += 2 )
        {
          if ( *(unsigned __int8 *)(v30 + i - 1) == v42[0] )
            goto LABEL_90;
          if ( i >= 524289 || !*(_BYTE *)(v30 + i) )
            break;
          if ( *(unsigned __int8 *)(v30 + i) == v42[0] )
            goto LABEL_90;
        }
        if ( v42[0] )
        {
          (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
          v10 = dword_60CCF014;
          v8 = 0;
          while ( *(_BYTE *)(dword_60CCF014 + v8) )
          {
            if ( !*(_BYTE *)(dword_60CCF014 + v8 + 1) )
            {
              ++v8;
              break;
            }
            if ( !*(_BYTE *)(dword_60CCF014 + v8 + 2) )
            {
              v8 += 2;
              break;
            }
            v26 = v8 + 2 <= 0x7FFFF;
            v8 += 3;
            if ( !v26 )
            {
              v8 = 0;
              break;
            }
          }
          v9 = dword_60CCF018 - 1;
          if ( v8 < dword_60CCF018 - 1 )
          {
            *(_BYTE *)(dword_60CCF014 + v8) = v31;
            v10 += v8;
          }
          v5 = 0;
          if ( v8 < v9 )
            FIELD_U8(v10, 1) = 0;
          v11 = v7 + 1;
          if ( v7 < 0 )
          {
            v6 = 0;
            if ( v11 < 2 )
              goto LABEL_32;
          }
          else
          {
            v12 = (_BYTE *)dword_60CCF014;
            v13 = (char *)(dword_60CCF014 + v7);
            if ( dword_60CCF018 <= v7 )
              v13 = &byte_60B3BA34;
            v6 = 0;
            if ( *v13 == 35 )
            {
              if ( dword_60CCF018 <= v7 )
              {
                (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
              }
              else
              {
                if ( v7 > 0 )
                  v12 = (_BYTE *)(dword_60CCF014 + v7);
                *v12 = 0;
              }
              v6 = 10;
              v11 = v7;
            }
            if ( v11 < 2 )
            {
LABEL_32:
              v7 = v11;
              goto LABEL_107;
            }
          }
          v14 = (_BYTE *)dword_60CCF014;
          v15 = (char *)(dword_60CCF014 + v11 - 2);
          if ( dword_60CCF018 <= v11 - 2 )
            v15 = &byte_60B3BA34;
          if ( *v15 != 47 )
            goto LABEL_32;
          v38 = v11 - 2;
          v16 = (char *)(dword_60CCF014 + v11 - 1);
          v17 = v16;
          if ( dword_60CCF018 < v11 )
            v17 = &byte_60B3BA34;
          if ( *v17 == 47 )
          {
            v7 = v11 - 2;
            if ( dword_60CCF018 <= v38 )
            {
              (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
              v6 = 10;
            }
            else
            {
              v6 = 10;
              if ( v38 > 0 )
                v14 = (_BYTE *)(dword_60CCF014 + v11 - 2);
              *v14 = 0;
            }
          }
          else
          {
            if ( dword_60CCF018 < v11 )
              v16 = &byte_60B3BA34;
            if ( *v16 == 42 )
            {
              v7 = v11 - 2;
              if ( dword_60CCF018 <= v38 )
              {
                (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
              }
              else
              {
                if ( v38 > 0 )
                  v14 = (_BYTE *)(dword_60CCF014 + v11 - 2);
                *v14 = 0;
              }
              v6 = 42;
            }
            else
            {
              v7 = v11;
            }
          }
        }
        else
        {
LABEL_90:
          v6 = 0;
          v5 = 0;
          result = (char *)*(unsigned __int8 *)dword_60CCF014;
          if ( *(_BYTE *)dword_60CCF014 )
            return result;
        }
      }
    }
    goto LABEL_107;
  }
  return result;
}
