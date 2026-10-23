/* sub_6086B35C
 * address: 0x6086B35C   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086B35C(int a1, int a2, int a3, int a4)
{
  int v4; // r3
  int v5; // r4
  int v6; // r2
  int v7; // r5
  int v8; // r11
  int v9; // r8
  size_t v10; // r7
  int v11; // r0
  int v12; // r1
  int *v13; // r9
  int v14; // r2
  int v15; // r3
  unsigned __int16 *v16; // r0
  size_t v17; // r6
  size_t v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r0
  int v23; // r9
  int v24; // r5
  int v25; // r4
  int v26; // r8
  size_t v27; // r7
  int v28; // r0
  int v29; // r1
  int *v30; // r10
  int v31; // r2
  int v32; // r3
  unsigned __int16 *v33; // r0
  size_t v34; // r6
  size_t v35; // r2
  int v36; // r0
  int v37; // r1
  int v38; // r0
  int v41; // [sp+8h] [bp-38h]
  int v42; // [sp+8h] [bp-38h]
  int v44; // [sp+Ch] [bp-34h]
  int v47; // [sp+18h] [bp-28h]
  int v48; // [sp+18h] [bp-28h]

  v4 = a2;
  v41 = FIELD_U16(a2, 50);
  if ( FIELD_U16(a2, 50) )
  {
    v5 = 0;
    v6 = 0;
    v7 = FIELD_U32(a2, 8);
    while ( 1 )
    {
      v8 = -1;
      v9 = FIELD_U32(a3, 96);
      if ( v9 )
      {
        v47 = v6;
        v10 = strlen((const char *)(*(_DWORD *)v7 + 2));
        v11 = FIELD_U16(v9, 12);
        v13 = (int *)(v9 + 8 + 16 * v11);
        v12 = *v13;
        if ( FIELD_U32(v9, 8) < *v13 )
        {
          do
          {
            v14 = 0;
            if ( v10 > v12 >> 3 )
              v14 = (*(unsigned __int8 *)(*(_DWORD *)v7 + v10 + ~(v12 >> 3) + 2) >> (v12 & 7)) & 1;
            v15 = *(_DWORD *)(v9 + 8 + 16 * v11);
            v11 = *(unsigned __int16 *)(v9 + 8 + 16 * v11 + 2 * v14 + 4);
            v13 = (int *)(v9 + 8 + 16 * v11);
            v12 = *v13;
          }
          while ( v15 < *v13 );
        }
        v16 = (unsigned __int16 *)v13[2];
        v17 = *v16;
        v18 = v17;
        if ( v10 < v17 )
          v18 = v10;
        if ( v18 )
        {
          v19 = memcmp(v16 + 1, (const void *)(*(_DWORD *)v7 + 2), v18);
          v20 = 1;
          if ( v19 )
            v20 = v19;
          if ( v10 < v17 )
          {
            v6 = v47;
          }
          else
          {
            v6 = v47;
            if ( !v19 )
            {
LABEL_17:
              v20 = 0;
              if ( v17 < v10 )
                v20 = -1;
            }
          }
          if ( !v20 )
            v8 = ((int)v13 - v9 - 24) >> 4;
          goto LABEL_23;
        }
        v6 = v47;
        if ( v10 >= v17 )
          goto LABEL_17;
      }
LABEL_23:
      v7 += 24;
      v21 = v5 + a4;
      ++v5;
      *(_WORD *)(FIELD_U32(a1, 92) + 2 * v21) = v8;
      v6 |= (unsigned __int16)(v8 >> 31) + 1;
      if ( v5 == v41 )
      {
        v4 = a2;
        v22 = FIELD_U16(a2, 50);
        goto LABEL_26;
      }
    }
  }
  v22 = 0;
  v6 = 0;
LABEL_26:
  v42 = FIELD_U16(v4, 52);
  if ( FIELD_U16(v4, 52) )
  {
    v23 = 0;
    v44 = v22 + a4;
    v24 = FIELD_U32(v4, 16);
    do
    {
      v25 = -1;
      v26 = FIELD_U32(a3, 80);
      if ( v26 )
      {
        v48 = v6;
        v27 = strlen((const char *)(*(_DWORD *)v24 + 2));
        v28 = FIELD_U16(v26, 12);
        v30 = (int *)(v26 + 8 + 16 * v28);
        v29 = *v30;
        if ( FIELD_U32(v26, 8) < *v30 )
        {
          do
          {
            v31 = 0;
            if ( v27 > v29 >> 3 )
              v31 = (*(unsigned __int8 *)(*(_DWORD *)v24 + v27 + ~(v29 >> 3) + 2) >> (v29 & 7)) & 1;
            v32 = *(_DWORD *)(v26 + 8 + 16 * v28);
            v28 = *(unsigned __int16 *)(v26 + 8 + 16 * v28 + 2 * v31 + 4);
            v30 = (int *)(v26 + 8 + 16 * v28);
            v29 = *v30;
          }
          while ( v32 < *v30 );
        }
        v33 = (unsigned __int16 *)v30[2];
        v34 = *v33;
        v35 = v34;
        if ( v27 < v34 )
          v35 = v27;
        if ( v35 )
        {
          v36 = memcmp(v33 + 1, (const void *)(*(_DWORD *)v24 + 2), v35);
          v37 = 1;
          if ( v36 )
            v37 = v36;
          if ( v27 < v34 )
          {
            v6 = v48;
          }
          else
          {
            v6 = v48;
            if ( !v36 )
            {
LABEL_42:
              v37 = 0;
              if ( v34 < v27 )
                v37 = -1;
            }
          }
          if ( !v37 )
            v25 = ((int)v30 - v26 - 24) >> 4;
          goto LABEL_48;
        }
        v6 = v48;
        if ( v27 >= v34 )
          goto LABEL_42;
      }
LABEL_48:
      v24 += 16;
      v38 = v44 + v23++;
      *(_WORD *)(FIELD_U32(a1, 92) + 2 * v38) = v25;
      v6 |= (unsigned __int16)(v25 >> 31) + 1;
    }
    while ( v23 != v42 );
  }
  return v6;
}
