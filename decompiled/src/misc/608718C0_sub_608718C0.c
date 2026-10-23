/* sub_608718C0
 * address: 0x608718C0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608718C0(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r6
  int v5; // r12
  unsigned int v6; // lr
  int v7; // r5
  int v8; // r8
  int v9; // r9
  int v10; // r8
  int v11; // r6
  int v12; // r7
  int v13; // r8
  unsigned int v14; // r0
  unsigned int v15; // r4
  unsigned int v16; // r0
  unsigned int v17; // r4
  signed int v18; // r5
  signed int v19; // r10
  int v20; // r4
  int v21; // r7
  unsigned int v22; // r0
  unsigned int v23; // r6
  bool v24; // cf
  unsigned int v25; // r5
  int v26; // r9
  int v27; // kr00_4
  int v28; // r5
  int v29; // r7
  int v30; // r6
  unsigned int v31; // r4
  unsigned int v32; // r0

  v3 = FIELD_U8(a1, 218);
  v4 = FIELD_U16(a1, 216);
  v5 = FIELD_U32(a1, 128);
  v6 = FIELD_U8(a1, 219) + v3;
  v7 = v5 + 4 * v4 * v6;
  if ( FIELD_U8(a1, 218) )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v9 = v7;
        if ( !v4 )
        {
          v8 = v5;
          goto LABEL_42;
        }
        v12 = 0;
        v13 = v4 / 2;
        v7 = v5 + 4 * v4 / 2 * v6;
        while ( 1 )
        {
          v14 = *(_DWORD *)(a3 + 4 * v12);
          v15 = *(_DWORD *)(v7 + 4 * v12);
          if ( v15 != v14 )
            break;
          if ( ++v12 >= v3 )
            goto LABEL_14;
        }
        if ( v15 < v14 )
        {
          v5 = v7 + 4 * v6;
          v7 = v9;
          v4 = v4 - 1 - v13;
          continue;
        }
        break;
      }
LABEL_14:
      v11 = 0;
      while ( 1 )
      {
        v16 = *(_DWORD *)(v7 + 4 * v11);
        v17 = *(_DWORD *)(a3 + 4 * v11);
        if ( v17 != v16 )
          break;
        if ( ++v11 >= v3 )
          goto LABEL_17;
      }
      v4 = v13;
      if ( v17 < v16 )
        continue;
      break;
    }
LABEL_17:
    v10 = v7;
  }
  else
  {
    v8 = FIELD_U32(a1, 128);
    if ( v6 > v4 * v6 )
      goto LABEL_42;
    v9 = v5 + 4 * v4 * v6;
    v10 = v5 + 4 * (FIELD_U16(a1, 216) >> 1) * (__int16)v6;
  }
  if ( v6 <= (v10 - v5) >> 2 )
  {
    v18 = ((v10 - v5) >> 2) / v6;
    if ( v3 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v19 = v18;
          v20 = 0;
          v18 /= 2;
          v21 = v5 + 4 * v18 * v6;
          while ( 1 )
          {
            v22 = *(_DWORD *)(a3 + 4 * v20);
            v23 = *(_DWORD *)(v21 + 4 * v20);
            if ( v23 != v22 )
              break;
            if ( ++v20 >= v3 )
              goto LABEL_25;
          }
          if ( v23 >= v22 )
          {
LABEL_25:
            if ( (unsigned int)(v19 + 1) >= 3 )
              continue;
            goto LABEL_30;
          }
          break;
        }
        v5 = v21 + 4 * v6;
        v18 = v19 - 1 - v18;
        if ( v18 )
          continue;
        break;
      }
    }
    else
    {
      do
      {
        v24 = (unsigned int)(v18 + 1) >= 3;
        v18 /= 2;
      }
      while ( v24 );
    }
  }
LABEL_30:
  v8 = v10 + 4 * v6;
  v25 = (v9 - v8) >> 2;
  v26 = v25 / v6;
  if ( v3 )
  {
    while ( 1 )
    {
      v28 = v26;
      if ( !v26 )
        break;
      v29 = 0;
      v26 /= 2;
      v30 = v8 + 4 * v28 / 2 * v6;
      while ( 1 )
      {
        v31 = *(_DWORD *)(v30 + 4 * v29);
        v32 = *(_DWORD *)(a3 + 4 * v29);
        if ( v32 != v31 )
          break;
        if ( ++v29 >= v3 )
          goto LABEL_35;
      }
      if ( v32 < v31 )
        continue;
LABEL_35:
      v8 = v30 + 4 * v6;
      v26 = v28 - 1 - v26;
    }
  }
  else if ( v6 <= v25 )
  {
    do
    {
      v27 = v26;
      v26 = v26 - 1 - v26 / 2;
      v8 += 4 * v27 / 2 * v6 + 4 * v6;
    }
    while ( v26 );
  }
LABEL_42:
  *a2 = v5 + 4 * v3;
  a2[1] = v8 + 4 * v3;
  return v5 != v8;
}
