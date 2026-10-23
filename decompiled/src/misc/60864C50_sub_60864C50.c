/* sub_60864C50
 * address: 0x60864C50   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60864C50(_DWORD *a1, const char *a2)
{
  int v4; // r1
  int v5; // r0
  unsigned __int8 v6; // r2
  unsigned int v7; // r1
  unsigned __int8 *v8; // r3
  unsigned int v9; // r7
  int v10; // t1
  int v11; // r9
  int v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r1
  unsigned int v16; // r6
  bool v17; // zf
  int v18; // r6
  unsigned int v19; // r6
  unsigned int v20; // r2
  unsigned int v21; // r5
  int v22; // r0
  int v23; // r1
  int v24; // r0
  bool v25; // cc
  int v26; // r0
  int v27; // r1
  unsigned int v28; // r0

  v4 = a1[1];
  v5 = a1[6];
  v6 = *a2;
  v7 = FIELD_U32(v4, 8);
  if ( !v5 )
    v7 = bswap32(v7);
  if ( *a2 )
  {
    v8 = (unsigned __int8 *)(a2 + 1);
    v9 = 0;
    do
    {
      v9 = v9 * v7 + v6;
      v10 = *v8++;
      v6 = v10;
    }
    while ( v10 );
  }
  else
  {
    v9 = 0;
  }
  v11 = a1[4];
  v12 = a1[3];
  v13 = 0;
  v14 = v11;
  if ( v5 )
  {
    while ( 1 )
    {
      v15 = (v13 + v14) / 2;
      v16 = *(_DWORD *)(v12 + 16 * v15);
      if ( v16 == v9 )
        break;
      if ( v16 >= v9 )
      {
        v17 = v14 == v15;
        v18 = -1;
        v14 = (v13 + v14) / 2;
        if ( v17 )
          return v18;
      }
      else
      {
        v17 = v13 == v15;
        v13 = (v13 + v14) / 2;
        if ( v17 )
          return -1;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = (v13 + v14) / 2;
      v19 = bswap32(*(_DWORD *)(v12 + 16 * v15));
      if ( v19 == v9 )
        break;
      if ( v19 >= v9 )
      {
        v17 = v14 == v15;
        v18 = -1;
        v14 = (v13 + v14) / 2;
        if ( v17 )
          return v18;
      }
      else
      {
        v17 = v13 == v15;
        v13 = (v13 + v14) / 2;
        if ( v17 )
          return -1;
      }
    }
  }
  if ( v15 == -1 )
    return -1;
  v20 = *(_DWORD *)(v12 + 16 * v15 + 4);
  if ( !v5 )
    v20 = bswap32(v20);
  if ( !v20 )
    return v15;
  v18 = v15 + 1 - HIBYTE(v20);
  if ( v18 < v11 )
  {
    v21 = v15 - HIBYTE(v20);
    if ( v5 )
    {
      while ( 1 )
      {
        v22 = v12 + 16 * v21;
        if ( FIELD_U32(v22, 16) != v9 )
          break;
        v23 = a1[2];
        v24 = FIELD_U32(v22, 20) & 0xFFFFFF;
        if ( (unsigned int)(v23 + v24) > a1[5] )
          break;
        if ( !strcmp(a2, (const char *)(v23 + 4 * v24)) )
          return v21 + 1;
        ++v18;
        v25 = (int)(v21 + 2) < v11;
        ++v21;
        if ( !v25 )
          return v18;
      }
    }
    else
    {
      while ( 1 )
      {
        v26 = v12 + 16 * v21;
        if ( bswap32(FIELD_U32(v26, 16)) != v9 )
          break;
        v27 = a1[2];
        v28 = bswap32(FIELD_U32(v26, 20) & 0xFFFFFF00);
        if ( v27 + v28 > a1[5] )
          break;
        if ( !strcmp(a2, (const char *)(v27 + 4 * v28)) )
          return v21 + 1;
        ++v18;
        v25 = (int)(v21 + 2) < v11;
        ++v21;
        if ( !v25 )
          return v18;
      }
    }
    return -1;
  }
  return v18;
}
