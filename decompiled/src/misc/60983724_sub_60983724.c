/* sub_60983724
 * address: 0x60983724   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60983724(int a1, int a2, int *a3, const char *a4)
{
  int v4; // r5
  int *v5; // lr
  int v7; // r8
  int v8; // r4
  int v9; // r9
  size_t v10; // r7
  int v11; // r0
  int v12; // r1
  int *v13; // r8
  int v14; // r2
  int v15; // r3
  unsigned __int16 *v16; // r0
  size_t v17; // r10
  size_t v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r2
  int v23; // r7
  int v24; // r3
  int v25; // r6
  int v26; // r3
  int v27; // r2
  int v29; // r0
  int v30; // [sp+0h] [bp-30h]
  int v32; // [sp+8h] [bp-28h]

  v4 = FIELD_U32(a1, 24);
  v5 = a3;
  v7 = 0;
  v32 = a1 + 20;
  if ( v4 != a1 + 20 )
  {
    if ( a4 )
    {
      v30 = a2;
      while ( 1 )
      {
        v8 = FIELD_U32(v4, 36);
        if ( !v8 )
          goto LABEL_22;
        v9 = FIELD_U32(v8, 56);
        v10 = strlen(a4);
        v11 = FIELD_U16(v9, 12);
        v13 = (int *)(v9 + 8 + 16 * v11);
        v12 = *v13;
        if ( FIELD_U32(v9, 8) < *v13 )
        {
          do
          {
            v14 = 0;
            if ( v10 > v12 >> 3 )
              v14 = ((unsigned __int8)a4[v10 + ~(v12 >> 3)] >> (v12 & 7)) & 1;
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
        if ( !v18 )
          break;
        v19 = memcmp(v16 + 1, a4, v18);
        v20 = 1;
        if ( v19 )
          v20 = v19;
        if ( v10 >= v17 && !v19 )
          goto LABEL_18;
LABEL_20:
        if ( !v20 )
        {
          v21 = (int)v13 - v9 - 24;
          if ( v21 >> 4 != -1 )
          {
            a2 = v30;
            v5 = a3;
            v29 = v21 >> 4;
            goto LABEL_34;
          }
        }
LABEL_22:
        v4 = FIELD_U32(v4, 4);
        a1 = v32;
        if ( v4 == v32 )
        {
          v7 = 0;
          return v7 & a1;
        }
      }
      if ( v10 < v17 )
        goto LABEL_22;
LABEL_18:
      v20 = 0;
      if ( v17 < v10 )
        v20 = -1;
      goto LABEL_20;
    }
    while ( 1 )
    {
      v8 = FIELD_U32(v4, 36);
      if ( v8 )
      {
        v22 = FIELD_U32(v8, 56);
        v23 = FIELD_U16(v22, 12);
        v24 = v22 + 8;
        v25 = FIELD_U32(v22, 8);
        while ( 1 )
        {
          v26 = v24 + 16 * v23;
          if ( v25 >= *(_DWORD *)v26 )
            break;
          v24 = v22 + 8;
          v25 = *(_DWORD *)(v22 + 8 + 16 * v23);
          v23 = *(unsigned __int16 *)(v22 + 8 + 16 * v23 + 4);
        }
        if ( !**(_WORD **)(v26 + 8) )
        {
          v27 = v26 - (v22 + 24);
          if ( v27 >> 4 != -1 )
            break;
        }
      }
      v4 = FIELD_U32(v4, 4);
      a1 = v32;
      if ( v4 == v32 )
        return v7 & a1;
    }
    v29 = v27 >> 4;
LABEL_34:
    a1 = sub_6085F098(a2, v5, *(_DWORD *)(FIELD_U32(v8, 40) + 8 * v29));
    v7 = 1;
  }
  return v7 & a1;
}
