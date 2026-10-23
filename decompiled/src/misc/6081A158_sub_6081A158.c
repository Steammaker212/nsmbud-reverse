/* sub_6081A158
 * address: 0x6081A158   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081A158(int a1, int a2, _DWORD *a3)
{
  int v5; // r5
  int v6; // r9
  int v7; // r11
  int v8; // r1
  int v9; // r0
  bool v10; // cc
  int v11; // r1
  int v12; // r0
  int v13; // r5
  unsigned __int8 *v14; // r0
  unsigned __int8 v15; // r2
  char *v16; // r1
  int v17; // t1
  int v18; // r5
  unsigned __int8 *v19; // r0
  unsigned __int8 v20; // r2
  char *v21; // r1
  int v22; // t1
  int v23; // r6
  int v24; // r0
  int v25; // r1
  char *v26; // r3
  const char *v27; // r1
  int v28; // r0

  v5 = 0;
  v6 = a1 + 92;
  while ( asc_60AE4148[v5] )
  {
    if ( v5 > 0x7FFFF )
      goto LABEL_23;
    if ( !asc_60AE4148[v5 + 1] )
    {
      ++v5;
      break;
    }
    v5 += 2;
  }
  if ( !v5 )
  {
LABEL_23:
    v13 = 1;
    v14 = (unsigned __int8 *)a3[1];
    v15 = 47;
    v16 = "";
    while ( *v14 == v15 )
    {
      v17 = (unsigned __int8)*v16++;
      v15 = v17;
      ++v14;
      if ( !v17 )
        goto LABEL_32;
    }
    v13 = 0;
LABEL_32:
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 92) + 12))(v6);
    v23 = FIELD_U32(a1, 96);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v24 = a3[1];
    v25 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        if ( !*(_BYTE *)(v24 + v25) )
          goto LABEL_46;
        if ( !*(_BYTE *)(v24 + v25 + 1) )
        {
          if ( v25 + 1 > 0 )
            goto LABEL_47;
          goto LABEL_48;
        }
        if ( !*(_BYTE *)(v24 + v25 + 2) )
          break;
        v10 = v25 + 2 <= 0x7FFFF;
        v25 += 3;
        if ( !v10 )
          goto LABEL_48;
      }
      v25 += 2;
LABEL_46:
      if ( v25 > 0 )
      {
LABEL_47:
        v26 = (char *)(v24 + 1);
        goto LABEL_49;
      }
LABEL_48:
      v26 = off_60C5CB34;
LABEL_49:
      v27 = "%s%s";
      v28 = a2;
    }
    else
    {
      while ( 1 )
      {
        if ( !*(_BYTE *)(v24 + v25) )
          goto LABEL_53;
        if ( !*(_BYTE *)(v24 + v25 + 1) )
        {
          if ( v25 + 1 > 0 )
            goto LABEL_54;
          goto LABEL_55;
        }
        if ( !*(_BYTE *)(v24 + v25 + 2) )
          break;
        v10 = v25 + 2 <= 0x7FFFF;
        v25 += 3;
        if ( !v10 )
          goto LABEL_55;
      }
      v25 += 2;
LABEL_53:
      if ( v25 > 0 )
      {
LABEL_54:
        v26 = (char *)(v24 + 1);
        goto LABEL_56;
      }
LABEL_55:
      v26 = off_60C5CB34;
LABEL_56:
      v27 = "%s%s";
      v28 = a2;
    }
    goto LABEL_62;
  }
  v7 = FIELD_U32(a1, 96);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 92) + 12))(v6);
  v8 = FIELD_U32(a1, 96);
  v9 = 0;
  while ( *(_BYTE *)(v8 + v9) )
  {
    if ( !*(_BYTE *)(v8 + v9 + 1) )
    {
      if ( ++v9 < v5 )
        goto LABEL_27;
      goto LABEL_19;
    }
    if ( !*(_BYTE *)(v8 + v9 + 2) )
    {
      v9 += 2;
      break;
    }
    v10 = v9 + 2 <= 0x7FFFF;
    v9 += 3;
    if ( !v10 )
    {
      v9 = 0;
      if ( v5 > 0 )
        goto LABEL_27;
      goto LABEL_19;
    }
  }
  if ( v9 < v5 )
    goto LABEL_27;
LABEL_19:
  if ( v5 < 1 )
    goto LABEL_23;
  v11 = 0;
  v12 = v7 + v9 - v5;
  while ( *(unsigned __int8 *)(v12 + v11) == (unsigned __int8)asc_60AE4148[v11] )
  {
    if ( ++v11 >= v5 )
      goto LABEL_23;
  }
LABEL_27:
  v18 = 1;
  v19 = (unsigned __int8 *)a3[1];
  v20 = 47;
  v21 = "";
  while ( *v19 == v20 )
  {
    v22 = (unsigned __int8)*v21++;
    v20 = v22;
    ++v19;
    if ( !v22 )
      goto LABEL_58;
  }
  v18 = 0;
LABEL_58:
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 92) + 12))(v6);
  v23 = FIELD_U32(a1, 96);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v26 = (char *)a3[1];
  if ( v18 == 1 )
    v27 = "%s%s";
  else
    v27 = "%s/%s";
  v28 = a2;
LABEL_62:
  sub_608FDDF4(v28, v27, v23, v26, a2);
  return 1;
}
