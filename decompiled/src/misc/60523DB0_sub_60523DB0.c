/* sub_60523DB0
 * address: 0x60523DB0   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60523DB0(int result, int a2, int a3)
{
  int v3; // r1
  int v4; // r2
  unsigned int v5; // r1
  unsigned int v6; // r4
  int v7; // r5
  int v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r4
  int v11; // r5
  int v12; // r0
  int v13; // r1
  int v14; // lr
  int *v15; // r12
  int v16; // r3
  bool v17; // cc
  unsigned int v18; // r1
  unsigned int v19; // r5
  int v20; // r3
  bool v21; // cc
  unsigned int v22; // r1
  unsigned int v23; // r5
  int v24; // r2
  int v25; // r1
  unsigned int v26; // r3
  unsigned int v27; // r5
  unsigned int i; // r1
  unsigned int v29; // r6
  _DWORD v30[4]; // [sp+8h] [bp-30h]
  _DWORD v31[8]; // [sp+18h] [bp-20h] BYREF

  v3 = FIELD_U32(result, 4664);
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
    {
      if ( v3 != 4 )
        return result;
      v4 = FIELD_U32(result, 4620);
      if ( v4 >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = 0;
          if ( v5 < 4 )
            v6 = v5;
          ++v5;
          v7 = *(_DWORD *)(result + 4 * v6 + 4152);
          v31[v6] = *(_DWORD *)(FIELD_U32(v7, 3140) + 64);
          v30[v6] = *(_DWORD *)(FIELD_U32(v7, 8) + 24);
        }
        while ( (int)v5 < v4 );
      }
      goto LABEL_15;
    }
    v14 = dword_60C99DEC;
    memset(v31, 0, 16);
    v15 = (int *)(result + 4620);
    v16 = FIELD_S8(dword_60C99DEC, 477);
    v17 = v16 < 0;
    if ( v16 >= 0 )
    {
      a3 = *v15;
      v17 = *v15 < 1;
    }
    if ( !v17 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = 0;
        if ( v18 < 4 )
          v19 = v18;
        if ( **(_DWORD **)(result + 4 * v19 + 4152) == v16 )
          break;
        if ( (int)++v18 >= a3 )
          goto LABEL_26;
      }
      a3 = v31[v19] + 1;
      v31[v19] = a3;
    }
LABEL_26:
    v20 = FIELD_S8(v14, 478);
    v21 = v20 < 0;
    if ( v20 >= 0 )
    {
      a3 = *v15;
      v21 = *v15 < 1;
    }
    if ( !v21 )
    {
      v22 = 0;
      while ( 1 )
      {
        v23 = 0;
        if ( v22 < 4 )
          v23 = v22;
        if ( **(_DWORD **)(result + 4 * v23 + 4152) == v20 )
          break;
        if ( (int)++v22 >= a3 )
          goto LABEL_36;
      }
      ++v31[v23];
    }
LABEL_36:
    v24 = *v15;
    v25 = FIELD_S8(v14, 479);
    if ( v25 >= 0 )
    {
      if ( v24 < 1 )
      {
LABEL_50:
        v13 = 1;
        v12 = dword_60CAA450;
        return sub_6052BC7C(v12, v13);
      }
      v26 = 0;
      while ( 1 )
      {
        v27 = 0;
        if ( v26 < 4 )
          v27 = v26;
        if ( **(_DWORD **)(result + 4 * v27 + 4152) == v25 )
          break;
        if ( (int)++v26 >= v24 )
          goto LABEL_45;
      }
      ++v31[v27];
    }
LABEL_45:
    if ( v24 >= 1 )
    {
      for ( i = 0; (int)i < v24; ++i )
      {
        v29 = 0;
        if ( i < 4 )
          v29 = i;
        v30[v29] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(result + 4 * v29 + 4152) + 8) + 24);
      }
    }
    goto LABEL_50;
  }
  v8 = FIELD_U32(result, 4620);
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = 0;
      if ( v9 < 4 )
        v10 = v9;
      ++v9;
      v11 = *(_DWORD *)(result + 4 * v10 + 4152);
      v31[v10] = *(_DWORD *)(FIELD_U32(v11, 3140) + 52);
      v30[v10] = *(_DWORD *)(FIELD_U32(v11, 8) + 24);
    }
    while ( (int)v9 < v8 );
  }
LABEL_15:
  v12 = dword_60CAA450;
  v13 = 0;
  return sub_6052BC7C(v12, v13);
}
