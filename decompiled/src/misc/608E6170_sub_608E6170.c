/* sub_608E6170
 * address: 0x608E6170   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_608E6170(_BYTE *a1, int a2)
{
  char *v4; // r7
  char *v5; // r11
  unsigned int v6; // r6
  unsigned int v7; // r0
  int v8; // r8
  unsigned int v9; // r10
  int v10; // r9
  signed int v11; // r8
  char *v12; // r6
  unsigned int v13; // r1
  int v14; // r4
  bool v15; // zf
  int v17; // r1
  int CurrentHeap_const; // r0
  int v19; // r2
  int v20; // r1
  int v21; // r7
  unsigned int v22; // [sp+4h] [bp-64h]
  int v23; // [sp+8h] [bp-60h]
  int v24; // [sp+Ch] [bp-5Ch] BYREF
  _DWORD v25[11]; // [sp+10h] [bp-58h] BYREF
  signed int v26; // [sp+3Ch] [bp-2Ch]
  _DWORD v27[10]; // [sp+40h] [bp-28h] BYREF

  if ( FIELD_U32(a2, 8) && !FIELD_U32(a2, 12) )
    return 0;
  v4 = 0;
  if ( (FIELD_U8(a2, 24) & 0x1F) == 0 )
  {
    memset(&v25[1], 0, 40);
    v4 = 0;
    v25[0] = &off_60BF9CF0;
    v26 = 0;
    if ( !a1[76] )
      goto LABEL_36;
    v4 = 0;
    v26 = FIELD_U32(a2, 28);
    v25[1] = (*(int (__fastcall **)(_BYTE *, _DWORD *, int, _DWORD))(*(_DWORD *)a1 + 48))(a1, v25, a2, 0);
    if ( !v25[1] )
      goto LABEL_36;
    v25[2] = a1;
    v5 = *(char **)(a2 + 8);
    v6 = FIELD_U32(a2, 12);
    if ( v5 && !FIELD_U8(a2, 33) )
    {
      v8 = 0;
    }
    else
    {
      v4 = 0;
      v27[0] = 0;
      if ( !a1[76]
        || (*(int (__fastcall **)(_BYTE *, _DWORD *, _DWORD *))(*(_DWORD *)a1 + 84))(a1, v27, v25) != 1
        || !v27[0] )
      {
        goto LABEL_36;
      }
      if ( v6 )
      {
        if ( v6 < v27[0] )
          goto LABEL_36;
        v7 = FIELD_U32(a2, 24);
        if ( v7 )
        {
          if ( v6 % v7 )
            goto LABEL_36;
        }
      }
      else
      {
        v13 = FIELD_U32(a2, 24);
        if ( v13 )
          v6 = (v27[0] + v13 - 1) / v13 * v13;
        else
          v6 = (v27[0] + 31) & 0xFFFFFFE0;
      }
      v5 = *(char **)(a2 + 8);
      v8 = 0;
      if ( !v5 )
      {
        v17 = FIELD_U32(a2, 20);
        v8 = 1;
        CurrentHeap_const = FIELD_U32(a2, 16);
        v19 = (v17 >> 31) | 1;
        v20 = abs32(v17);
        if ( v20 <= 32 )
          v20 = 32;
        v21 = v20 * v19;
        if ( !CurrentHeap_const )
          CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
        v5 = (char *)(*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)CurrentHeap_const + 24))(
                       CurrentHeap_const,
                       v6,
                       v21);
        if ( !v5 )
        {
          v4 = 0;
          goto LABEL_36;
        }
      }
    }
    v4 = 0;
    v24 = 0;
    if ( a1[76] && (*(int (__fastcall **)(_BYTE *, _DWORD *))(*(_DWORD *)a1 + 32))(a1, v25) == 1 )
    {
      v9 = v26;
      if ( v26 )
      {
        v10 = 0;
        v23 = v8;
        v22 = v6;
        v27[0] = 0;
        if ( (int)v6 < v26 )
          v9 = v6;
        if ( (*(int (__fastcall **)(_BYTE *, _DWORD *, _DWORD *, char *, unsigned int))(*(_DWORD *)a1 + 64))(
               a1,
               v27,
               v25,
               v5,
               v9) == 1 )
        {
          v11 = v6;
          v12 = v5;
          v10 = 0;
          while ( 1 )
          {
            v10 += v27[0];
            if ( v27[0] < v9 )
              break;
            v11 -= v9;
            if ( !v11 )
              break;
            v9 = v26;
            v12 += v27[0];
            v27[0] = 0;
            if ( v11 < v26 )
              v9 = v11;
            if ( !(*(int (__fastcall **)(_BYTE *, _DWORD *, _DWORD *, char *, unsigned int))(*(_DWORD *)a1 + 64))(
                    a1,
                    v27,
                    v25,
                    v12,
                    v9) )
              goto LABEL_30;
          }
          v24 = v10;
          v6 = v22;
          v8 = v23;
          goto LABEL_52;
        }
LABEL_30:
        v8 = v23;
        v24 = v10;
      }
      else if ( (*(int (__fastcall **)(_BYTE *, int *, _DWORD *, char *, unsigned int))(*(_DWORD *)a1 + 64))(
                  a1,
                  &v24,
                  v25,
                  v5,
                  v6) )
      {
LABEL_52:
        if ( a1[76]
          && (*(int (__fastcall **)(_BYTE *, _DWORD *))(*(_DWORD *)a1 + 32))(a1, v25) == 1
          && (*(int (__fastcall **)(_BYTE *, _DWORD *))(*(_DWORD *)a1 + 52))(a1, v25) )
        {
          v4 = v5;
          v25[1] = 0;
          v25[2] = 0;
          FIELD_U32(a2, 36) = v24;
          FIELD_U32(a2, 40) = v6;
          FIELD_U8(a2, 44) = v8;
          goto LABEL_36;
        }
        v4 = 0;
        if ( v8 != 1 )
          goto LABEL_36;
        goto LABEL_35;
      }
    }
    if ( v8 != 1 )
    {
LABEL_36:
      v25[0] = &off_60BF9CF0;
      v14 = v25[2];
      v15 = v25[2] == 0;
      if ( v25[2] )
        v15 = *(_BYTE *)(v25[2] + 76) == 0;
      if ( !v15
        && (*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)v25[2] + 32))(v25[2], v25) == 1
        && (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v14 + 52))(v14, v25) == 1 )
      {
        v25[1] = 0;
        v25[2] = 0;
      }
      return v4;
    }
LABEL_35:
    operator_delete_8DE3FC(v5);
    goto LABEL_36;
  }
  return v4;
}
