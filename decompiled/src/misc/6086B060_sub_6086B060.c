/* sub_6086B060
 * address: 0x6086B060   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086B060(int a1, int a2)
{
  int v2; // r10
  int v3; // r8
  int v4; // r4
  int v5; // r11
  int v6; // r10
  size_t v7; // r6
  int v8; // r0
  int v9; // r1
  int *v10; // r5
  int v11; // r2
  int v12; // r3
  unsigned __int16 *v13; // r0
  size_t v14; // r7
  size_t v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r6
  unsigned __int16 *v20; // r5
  int v21; // r0
  int v22; // r2
  int v23; // r12
  int v24; // r0
  int v25; // r0
  int v26; // r2
  _DWORD *v28; // [sp+0h] [bp-40h]
  int v29; // [sp+4h] [bp-3Ch]
  int v30; // [sp+8h] [bp-38h]
  int v31; // [sp+Ch] [bp-34h]
  int v32; // [sp+10h] [bp-30h]
  int v34; // [sp+18h] [bp-28h]

  v2 = a1;
  v28 = (_DWORD *)(a1 + 56);
  sub_6086A2A4(a1 + 56, FIELD_U16(a2, 108));
  v32 = FIELD_U16(v2, 64);
  if ( FIELD_U16(v2, 64) )
  {
    v3 = 0;
    v4 = 0;
    v30 = v2;
    v29 = 0;
    while ( 1 )
    {
      v5 = FIELD_U32(a2, 72);
      if ( v5 )
      {
        v34 = v4;
        v31 = FIELD_U32(v2, 72);
        v6 = *(_DWORD *)(v31 + (v3 << 6));
        v7 = strlen((const char *)(v6 + 2));
        v8 = FIELD_U16(v5, 12);
        v10 = (int *)(v5 + 8 + 16 * v8);
        v9 = *v10;
        if ( FIELD_U32(v5, 8) < *v10 )
        {
          do
          {
            v11 = 0;
            if ( v7 > v9 >> 3 )
              v11 = (*(unsigned __int8 *)(v6 + v7 + ~(v9 >> 3) + 2) >> (v9 & 7)) & 1;
            v12 = *(_DWORD *)(v5 + 8 + 16 * v8);
            v8 = *(unsigned __int16 *)(v5 + 8 + 16 * v8 + 2 * v11 + 4);
            v10 = (int *)(v5 + 8 + 16 * v8);
            v9 = *v10;
          }
          while ( v12 < *v10 );
        }
        v13 = (unsigned __int16 *)v10[2];
        v14 = *v13;
        v15 = v14;
        if ( v7 < v14 )
          v15 = v7;
        if ( v15 )
        {
          v16 = memcmp(v13 + 1, (const void *)(v6 + 2), v15);
          if ( v7 < v14 )
          {
            v2 = v30;
            goto LABEL_29;
          }
          v2 = v30;
          if ( v16 )
            goto LABEL_29;
        }
        else
        {
          v2 = v30;
          if ( v7 < v14 )
            goto LABEL_29;
        }
        v17 = 0;
        if ( v14 < v7 )
          v17 = -1;
        if ( !v17 )
        {
          v18 = (int)v10 - v5 - 24;
          if ( v18 >= -15 )
          {
            v19 = v18 >> 4;
            v20 = (unsigned __int16 *)(v31 + (v3 << 6));
            if ( v20[23] != 0xFFFF || v20[24] != 0xFFFF )
              v34 = v4 | 1;
            v21 = sub_6086B35C(v2, v31 + (v3 << 6), FIELD_U32(a2, 64) + 184 * v19, v29);
            v22 = v20[26];
            v23 = v20[25] + v29;
            if ( (v21 & 1) != 0 || v20[23] != 0xFFFF || v20[24] != 0xFFFF )
            {
              *(_DWORD *)(*v28 + 4 * v3) &= 0x3FFF8000u;
              *(_DWORD *)(*v28 + 4 * v3) |= v19 & 0x7FFF;
              *(_DWORD *)(*v28 + 4 * v19) &= 0xC0007FFF;
              *(_DWORD *)(*v28 + 4 * v19) |= (v3 << 15) & 0x3FFF8000;
            }
            v29 = v23 + v22;
            v4 = v21 | v34;
            goto LABEL_30;
          }
        }
      }
LABEL_29:
      v4 |= 0x10000u;
LABEL_30:
      if ( ++v3 == v32 )
        goto LABEL_33;
    }
  }
  v4 = 0;
LABEL_33:
  FIELD_U16(v2, 60) |= 1u;
  FIELD_U32(v2, 44) = 2139095040;
  v24 = FIELD_U32(v2, 40);
  if ( v24 >= 1 && v24 <= FIELD_U32(v2, 36) )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      ++v26;
      *(_DWORD *)(FIELD_U32(v2, 32) + v25) = 2139095040;
      v25 += 12;
    }
    while ( v26 < FIELD_U32(v2, 40) );
  }
  return v4;
}
