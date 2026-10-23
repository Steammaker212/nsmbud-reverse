/* sub_608E7618
 * address: 0x608E7618   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608E7618(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r5
  int v6; // r6
  int v7; // r0
  bool v8; // cc
  unsigned __int8 *v9; // r6
  int v10; // t1
  int v11; // r0
  int i; // r1
  int v13; // r6
  int v14; // t1
  int v15; // r6
  int v16; // r4
  int v17; // r2
  int v18; // r0
  int v19; // r1
  signed int v20; // r5
  char *v21; // r6
  char *v22; // r1
  signed int v23; // r0
  int v25; // [sp+0h] [bp-38h]
  int v26; // [sp+Ch] [bp-2Ch]

  v4 = *a1;
  v5 = a1[1];
  v25 = *a1;
  v26 = a1[3];
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a1 + 12))(*a1);
  v6 = FIELD_U32(v4, 4);
  v7 = 0;
  while ( *(_BYTE *)(v6 + v7) )
  {
    if ( !*(_BYTE *)(v6 + v7 + 1) )
    {
      ++v7;
      if ( v5 < 0 )
        goto LABEL_24;
      goto LABEL_12;
    }
    if ( !*(_BYTE *)(v6 + v7 + 2) )
    {
      v7 += 2;
      break;
    }
    v8 = v7 + 2 <= 0x7FFFF;
    v7 += 3;
    if ( !v8 )
    {
      v7 = 0;
      if ( v5 < 0 )
        goto LABEL_24;
      goto LABEL_12;
    }
  }
  if ( v5 < 0 )
    goto LABEL_24;
LABEL_12:
  if ( v5 <= v7 )
  {
    v10 = *(unsigned __int8 *)(v6 + v5);
    v9 = (unsigned __int8 *)(v6 + v5);
    if ( v10 )
    {
      do
      {
        off_60BC0244();
        v11 = *v9;
        for ( i = 1; *(_BYTE *)(v26 + i - 1); i += 2 )
        {
          if ( *(unsigned __int8 *)(v26 + i - 1) == v11 )
            goto LABEL_23;
          if ( i >= 524289 || !*(_BYTE *)(v26 + i) )
            break;
          if ( *(unsigned __int8 *)(v26 + i) == v11 )
            goto LABEL_23;
        }
        ++v5;
        v13 = FIELD_U32(v25, 4);
        v14 = *(unsigned __int8 *)(v13 + v5);
        v9 = (unsigned __int8 *)(v13 + v5);
      }
      while ( v14 );
    }
LABEL_23:
    ++v5;
  }
LABEL_24:
  v15 = *a1;
  v16 = a1[1];
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a1 + 12))(*a1);
  v17 = FIELD_U32(v15, 4);
  v18 = v5 - v16;
  v19 = 0;
  v20 = v5 - v16 - 1;
  while ( *(_BYTE *)(v17 + v19) )
  {
    if ( !*(_BYTE *)(v17 + v19 + 1) )
    {
      ++v19;
      break;
    }
    if ( !*(_BYTE *)(v17 + v19 + 2) )
    {
      v19 += 2;
      break;
    }
    v8 = v19 + 2 <= 0x7FFFF;
    v19 += 3;
    if ( !v8 )
    {
      v19 = 0;
      break;
    }
  }
  v21 = *(char **)(a2 + 4);
  v8 = v19 < v16;
  v22 = off_60C5CB34;
  if ( !v8 )
    v22 = (char *)(v17 + v16);
  if ( v16 < 0 )
    v22 = off_60C5CB34;
  if ( v21 == v22 )
    return 0;
  if ( v18 <= 0 )
  {
    v20 = 0;
    while ( v22[v20] )
    {
      if ( !v22[v20 + 1] )
      {
        ++v20;
        break;
      }
      if ( !v22[v20 + 2] )
      {
        v20 += 2;
        break;
      }
      v8 = v20 + 2 <= 0x7FFFF;
      v20 += 3;
      if ( !v8 )
      {
        v20 = 0;
        break;
      }
    }
  }
  v23 = FIELD_U32(a2, 8);
  if ( v20 >= v23 )
    v20 = v23 - 1;
  qmemcpy(*(void **)(a2 + 4), v22, v20);
  v21[v20] = 0;
  return v20;
}
