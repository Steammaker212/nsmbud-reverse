/* sub_604D3944
 * address: 0x604D3944   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604D3944(_DWORD *a1)
{
  _DWORD *v1; // r7
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  unsigned int result; // r0
  int v11; // r8
  char *v12; // r4
  char *v13; // r1
  unsigned __int32 v14; // r6
  char *v15; // r4
  int v16; // r0
  bool v17; // zf
  int v18; // r1
  char *v19; // r1
  char *v20; // r1
  unsigned int v21; // r0
  int v22; // r0
  char v23; // r1
  unsigned int v24; // r0
  char *v25; // r2
  char *v26; // r2
  _DWORD *v27; // [sp+4h] [bp-34h]
  unsigned int v28; // [sp+8h] [bp-30h]
  char v29; // [sp+Ch] [bp-2Ch] BYREF
  char v30; // [sp+Dh] [bp-2Bh]
  unsigned __int32 v31; // [sp+10h] [bp-28h]

  v29 = 0;
  v30 = 0;
  v3 = a1[153927];
  if ( v3 == 2 )
  {
    v6 = a1[153924] + 1;
    if ( v6 <= 9 )
    {
      while ( 1 )
      {
        v7 = v6;
        if ( (unsigned int)v6 >= 0xA )
          v7 = 0;
        if ( LOBYTE(a1[13161 * v7 + 22323]) )
          break;
        if ( ++v6 >= 10 )
          goto LABEL_27;
      }
      if ( v6 >= 0 )
        v30 = 1;
    }
LABEL_27:
    v29 = 1;
  }
  else
  {
    if ( v3 == 1 )
    {
      v4 = a1[153922];
      if ( v4 >= 1 )
      {
        while ( v4 >= 1 )
        {
          v5 = --v4;
          if ( (unsigned int)v4 >= 0xA )
            v5 = 0;
          if ( LOBYTE(a1[13161 * v5 + 22323]) )
          {
            v29 = 1;
            goto LABEL_24;
          }
        }
      }
      goto LABEL_24;
    }
    v8 = a1[153922];
    if ( v8 >= 0 )
    {
      if ( (unsigned int)v8 >= 0xA )
        v8 = 0;
      if ( a1[13161 * v8 + 35466] )
        v29 = 1;
    }
    v9 = a1[153924];
    if ( v9 >= 0 )
    {
      if ( (unsigned int)v9 >= 0xA )
        v9 = 0;
      if ( a1[13161 * v9 + 35466] )
LABEL_24:
        v30 = 1;
    }
  }
  v27 = a1 + 950;
  result = 0;
  do
  {
    v11 = result;
    v12 = (char *)a1;
    v28 = result;
    if ( result >= 2 )
      result = 0;
    v13 = (char *)a1;
    v31 = dword_60CA4D00[result + 28];
    v14 = v31;
    if ( v31 < 0x100 )
      v12 = (char *)a1 + v31;
    if ( v28 < 2 )
      v13 = (char *)a1 + v28;
    v12[4300] = v13[615732];
    v15 = v12 + 4300;
    v16 = sub_608DE61C(a1 + 963, v14);
    v17 = v16 == 0;
    if ( v16 )
    {
      v18 = a1[966];
      v1 = (_DWORD *)(v16 - v18);
      v17 = v16 == v18;
    }
    if ( !v17 )
    {
      v19 = (char *)a1;
      if ( v28 < 2 )
        v19 = (char *)a1 + v28;
      (*(void (__fastcall **)(_DWORD *, _DWORD))(*v1 + 40))(v1, (unsigned __int8)v19[615734]);
      v20 = &v29;
      if ( v28 < 2 )
        v20 = &v29 + v28;
      if ( *v20 )
      {
        sub_60502D0C(v27, v14);
        v21 = v28;
        if ( v28 >= 2 )
          v21 = 0;
        v22 = a1[v21 + 5010];
        v23 = FIELD_U8(v22, 64) | 1;
      }
      else
      {
        sub_60502B90(v27, v14);
        v24 = v28;
        if ( v28 >= 2 )
          v24 = 0;
        v22 = a1[v24 + 5010];
        v23 = FIELD_U8(v22, 64) & 0xFE;
      }
      FIELD_U8(v22, 64) = v23;
      v25 = (char *)a1;
      if ( v28 < 2 )
        v25 = (char *)a1 + v28;
      v25[615732] = *v15;
      v26 = (char *)a1;
      if ( v28 < 2 )
        v26 = (char *)a1 + v28;
      v26[615734] = (v1[2] & 0x10) != 0;
    }
    result = v11 + 1;
    if ( v11 > 1 )
      result = 2;
  }
  while ( result != 2 );
  return result;
}
