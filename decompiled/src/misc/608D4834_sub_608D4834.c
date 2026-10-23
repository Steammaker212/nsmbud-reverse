/* sub_608D4834
 * address: 0x608D4834   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D4834(int a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r1
  int i; // r2
  int v9; // r7
  _BYTE *v10; // r3
  int v11; // r5
  bool v12; // zf
  _BYTE *v13; // r1
  _BYTE *v14; // r0
  _BYTE *v15; // r0
  int v17; // r7
  int j; // r2
  int v19; // r0
  _BYTE *v20; // r4
  int v21; // r1
  int v22; // r0
  int v23; // r1
  _BYTE *v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  char v28; // r0
  _BYTE *v30; // r1
  int v32; // r0
  char v33; // r2
  _WORD *v34; // r1
  _WORD *v35; // r2
  int v36; // r3
  __int16 v37; // r7
  _DWORD v38[2]; // [sp+4h] [bp-174h] BYREF
  _BYTE v39[248]; // [sp+Ch] [bp-16Ch] BYREF
  int v40; // [sp+104h] [bp-74h] BYREF
  _BYTE v41[64]; // [sp+108h] [bp-70h] BYREF
  char v42; // [sp+148h] [bp-30h]
  int v43; // [sp+14Ch] [bp-2Ch]
  int v44; // [sp+150h] [bp-28h]

  v40 = a2;
  v43 = a4[43];
  v44 = a3;
  v7 = FIELD_U32(a1, 16);
  if ( v7 )
  {
    for ( i = -62; ; i += 2 )
    {
      v9 = v7 + i;
      v10 = &v41[i - 4];
      LOBYTE(v11) = *(_BYTE *)(v7 + i + 62);
      if ( !(_BYTE)v11 )
        break;
      v10[66] = v11;
      v12 = i == 0;
      if ( i )
      {
        v11 = FIELD_U8(v9, 63);
        v12 = v11 == 0;
      }
      if ( v12 )
      {
        v13 = v10 + 67;
        v14 = (_BYTE *)(v9 + 63);
        goto LABEL_11;
      }
      v10[67] = v11;
    }
    v13 = v10 + 66;
    v14 = (_BYTE *)(v9 + 62);
LABEL_11:
    *v13 = 0;
    if ( *v14 )
    {
      v15 = v14 + 1;
      while ( *v15++ )
        ;
    }
  }
  else
  {
    memset(v41, 0, sizeof(v41));
  }
  v42 = FIELD_U8(a1, 3);
  if ( !(*(int (__fastcall **)(int *, _DWORD))(a1 + 4))(&v40, FIELD_U32(a1, 8)) )
    return 0;
  if ( !v42 || (int)a4[43] < 1 )
    goto LABEL_34;
  v17 = 0;
  while ( 1 )
  {
    (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)a3 + 8))(a3, v38, v17);
    for ( j = 0; j != 64; j += 2 )
    {
      v20 = &v39[j + 184];
      v19 = (unsigned __int8)v39[j + 184];
      v21 = (unsigned __int8)v41[j];
      if ( !v39[j + 184] )
        break;
      if ( v19 != v21 )
        break;
      v19 = (unsigned __int8)v20[1];
      v21 = (unsigned __int8)v41[j + 1];
      if ( !v20[1] )
        break;
      if ( v19 != v21 )
        break;
      v21 = (unsigned __int8)v20[1];
    }
    if ( v19 == v21 )
      break;
    if ( ++v17 >= a4[43] )
    {
      v17 = -1;
      break;
    }
  }
  if ( v17 == -1 )
  {
LABEL_34:
    v28 = 0;
    FIELD_U32(a1, 12) = v40;
    FIELD_U32(a1, 16) = 0;
  }
  else
  {
    v22 = a1 + 1088;
    v23 = -62;
    FIELD_U32(a1, 12) = v17;
    while ( 1 )
    {
      v24 = &v41[v23 - 4];
      if ( !v41[v23 + 62] )
      {
        v26 = a1 + v23;
        v27 = 1150;
        goto LABEL_37;
      }
      *(_BYTE *)(v22 + v23 + 62) = v41[v23 + 62];
      v25 = (unsigned __int8)v24[67];
      if ( !v23 )
        break;
      if ( !v24[67] )
      {
        v26 = a1 + v23;
        v27 = 1151;
LABEL_37:
        *(_BYTE *)(v26 + v27) = 0;
        goto LABEL_41;
      }
      *(_BYTE *)(v22 + v23 + 63) = v25;
      v23 += 2;
    }
    FIELD_U8(a1, 1151) = 0;
    if ( v25 )
    {
      v30 = v24 + 68;
      while ( *v30++ )
        ;
    }
LABEL_41:
    FIELD_U32(a1, 16) = v22;
    v28 = v42;
  }
  FIELD_U8(a1, 3) = v28;
  if ( (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)a3 + 8))(a3, v38) == 1 )
  {
    v32 = v38[0];
    FIELD_U32(a1, 24) = v38[0];
    FIELD_U32(a1, 28) = v38[1];
    v33 = v39[96];
    if ( !FIELD_U8(a1, 1) )
      v33 = 1;
    FIELD_U8(a1, 32) = v33;
    if ( *a4 == 2 )
    {
      if ( (int)a4[13] >= 1 )
      {
        v34 = v39;
        v35 = (_WORD *)(a1 + 64);
        v36 = 0;
        do
        {
          ++v36;
          *v35 = *v34;
          v35[1] = v34[1];
          v37 = v34[2];
          v34 += 3;
          v35[2] = v37;
          v35 += 32;
        }
        while ( v36 < a4[13] );
      }
      FIELD_U32(a1, 36) = v32;
    }
  }
  else
  {
    FIELD_U32(a1, 24) = 0;
    FIELD_U32(a1, 28) = a4[4];
    FIELD_U8(a1, 32) = 1;
  }
  return 1;
}
