/* sub_6084A664
 * address: 0x6084A664   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084A664(int a1, float *a2)
{
  char v2; // lr
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // r3
  unsigned int v10; // r9
  float v11; // s0
  unsigned int v12; // r1
  unsigned int v13; // r11
  unsigned __int8 v14; // r7
  unsigned int v15; // r4
  int v16; // r5
  int v17; // r5
  int v18; // r5
  _DWORD *v19; // r5
  int *v20; // r5
  int v21; // r4

  v3 = 64;
  if ( FIELD_U8(a1, 134) )
    v3 = 96;
  v4 = v3 * FIELD_U32(a1, 116);
  if ( *(_DWORD *)a2 )
  {
    v5 = FIELD_U32(a1, 128);
    v6 = (FIELD_U32(v5, 16) + 2 * v4 - 1) & -FIELD_U32(v5, 16);
    if ( (*(_BYTE *)v5 & 1) != 0 )
    {
      v7 = FIELD_U32(v5, 36);
      do
        v8 = v7 | (1619306176 << v2);
      while ( v7 | ((v8 + v6) << v2) );
      goto LABEL_12;
    }
LABEL_9:
    v8 = FIELD_U32(v5, 36);
    FIELD_U32(v5, 36) = v8 + v6;
    goto LABEL_12;
  }
  v5 = FIELD_U32(a1, 128);
  v6 = (v4 + FIELD_U32(v5, 16) - 1) & -FIELD_U32(v5, 16);
  if ( (*(_BYTE *)v5 & 1) == 0 )
    goto LABEL_9;
  v9 = FIELD_U32(v5, 36);
  do
    v8 = v9 | (1619306256 << v2);
  while ( v9 | ((v8 + v6) << v2) );
LABEL_12:
  FIELD_U32(a1, 4) = v8;
  v10 = FIELD_U32(a1, 116);
  v11 = a2[3];
  if ( v10 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = 0;
      v15 = *(_DWORD *)(FIELD_U32(a1, 120) + 48 * v13 + 40) & 0xFFFFFFFE;
      if ( v12 )
      {
        v16 = 0;
        v14 = 0;
        while ( 1 )
        {
          v17 = a1 + 12 * v16;
          if ( v15 == FIELD_U32(v17, 12) )
            break;
          v16 = ++v14;
          if ( v14 >= v12 )
            goto LABEL_18;
        }
        ++FIELD_U32(v17, 16);
      }
      else
      {
LABEL_18:
        v18 = 3 * v12++;
        v19 = (_DWORD *)(a1 + 4 * v18);
        v19[3] = v15;
        v19[4] = 1;
        v19[5] = 0;
        v20 = v19 + 5;
        v21 = FIELD_U8(v15, 15);
        *v20 = v21;
        if ( (*(_BYTE *)(FIELD_U32(a1, 120) + 48 * v13 + 40) & 1) != 0 )
          *v20 = v21 | 2;
        if ( v12 > 7 )
          goto LABEL_26;
      }
      *(_BYTE *)(FIELD_U32(a1, 124) + v13++) = v14;
      if ( v13 >= v10 )
        goto LABEL_26;
    }
  }
  v12 = 0;
LABEL_26:
  FIELD_U32(a1, 108) = v12;
  return sub_6084A81C(v11);
}
