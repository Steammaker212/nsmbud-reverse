/* sub_605288D4
 * address: 0x605288D4   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605288D4(int result)
{
  int *v1; // lr
  unsigned int v2; // r1
  unsigned int v3; // r3
  int v4; // r5
  int v5; // r3
  int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r5
  unsigned int v9; // r6
  int v10; // r5
  int v11; // r6
  unsigned int v12; // r7
  unsigned int v13; // r4
  unsigned int v14; // r1
  unsigned int v15; // r1
  unsigned int v16; // r7
  int v17; // r1
  _DWORD *v18; // r1
  int v19; // t1
  int v20; // r1
  int v21; // t1
  int v22; // r2
  unsigned int v23; // r1
  unsigned int i; // r1
  unsigned int v25; // r5
  unsigned int v26; // r5
  unsigned int v27; // r6
  int v28; // r5
  int v29; // r6
  unsigned int j; // r6
  unsigned int v31; // r7
  _DWORD v32[12]; // [sp+0h] [bp-30h]

  if ( FIELD_U8(result, 4673) )
    return result;
  v1 = (int *)(result + 4620);
  if ( FIELD_S32(result, 4620) < 1 )
    return result;
  v2 = 0;
  do
  {
    v3 = 0;
    if ( v2 < 4 )
      v3 = v2;
    ++v2;
    v4 = *(_DWORD *)(result + 4 * v3 + 4152);
    v32[v3] = FIELD_U32(v4, 3132);
    FIELD_U32(v4, 3044) = 2;
    v5 = *v1;
  }
  while ( (int)v2 < *v1 );
  if ( v5 < 1 )
    return result;
  if ( (v5 & 1) == 0 )
  {
    v6 = -1;
    v7 = 0;
    if ( v5 == 1 )
      goto LABEL_23;
    goto LABEL_14;
  }
  v6 = v32[0];
  v7 = 1;
  if ( v32[0] < 0 )
    v6 = -1;
  if ( v5 != 1 )
  {
    do
    {
LABEL_14:
      v8 = v7 + 1;
      v9 = 0;
      if ( v7 + 1 >= 4 )
        v8 = 0;
      if ( v7 < 4 )
        v9 = v7;
      v10 = v32[v8];
      v7 += 2;
      v11 = v32[v9];
      if ( v6 < v11 )
        v6 = v11;
      if ( v6 < v10 )
        v6 = v10;
    }
    while ( (int)v7 < v5 );
  }
LABEL_23:
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = 0;
    if ( v12 < 4 )
      v14 = v12;
    if ( v6 == v32[v14] )
    {
      ++v13;
      *(_DWORD *)(*(_DWORD *)(result + 4 * v14 + 4152) + 3044) = 0;
      v32[v14] = -1;
      v5 = *v1;
    }
    ++v12;
  }
  while ( (int)v12 < v5 );
  if ( v13 > 1 )
  {
    if ( v13 == v5 )
    {
      if ( v5 >= 1 )
      {
        v15 = 0;
        do
        {
          v16 = 0;
          if ( v15 < 4 )
            v16 = v15;
          ++v15;
          *(_DWORD *)(*(_DWORD *)(result + 4 * v16 + 4152) + 3044) = 2;
        }
        while ( (int)v15 < *v1 );
      }
    }
    else if ( v5 >= 1 )
    {
      for ( i = 0; (int)i < v5; ++i )
      {
        v25 = 0;
        if ( i < 4 )
          v25 = i;
        if ( (int)v32[v25] >= 0 )
        {
          *(_DWORD *)(*(_DWORD *)(result + 4 * v25 + 4152) + 3044) = 2;
          v5 = *v1;
        }
      }
    }
    return result;
  }
  if ( v5 == 2 )
  {
    v17 = FIELD_U32(result, 4152);
    v19 = FIELD_U32(v17, 3044);
    v18 = (_DWORD *)(v17 + 3044);
    if ( v19 || (v20 = FIELD_U32(result, 4156), v21 = FIELD_U32(v20, 3044), v18 = (_DWORD *)(v20 + 3044), v21) )
    {
      *v18 = 2;
      return 2;
    }
  }
  if ( v5 >= 1 )
  {
    if ( (v5 & 1) != 0 )
    {
      v22 = v32[0];
      v23 = 1;
      if ( v32[0] < 0 )
        v22 = -1;
      if ( v5 == 1 )
        goto LABEL_65;
    }
    else
    {
      v22 = -1;
      v23 = 0;
      if ( v5 == 1 )
      {
LABEL_65:
        for ( j = 0; (int)j < v5; ++j )
        {
          v31 = 0;
          if ( j < 4 )
            v31 = j;
          if ( v22 == v32[v31] )
          {
            *(_DWORD *)(*(_DWORD *)(result + 4 * v31 + 4152) + 3044) = 1;
            v32[v31] = 0;
            v5 = *v1;
          }
        }
        return result;
      }
    }
    do
    {
      v26 = v23 + 1;
      v27 = 0;
      if ( v23 + 1 >= 4 )
        v26 = 0;
      if ( v23 < 4 )
        v27 = v23;
      v28 = v32[v26];
      v23 += 2;
      v29 = v32[v27];
      if ( v22 < v29 )
        v22 = v29;
      if ( v22 < v28 )
        v22 = v28;
    }
    while ( (int)v23 < v5 );
    goto LABEL_65;
  }
  return result;
}
