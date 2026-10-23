/* sub_60878088
 * address: 0x60878088   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60878088(int a1, int a2)
{
  int v2; // r8
  int v3; // r4
  int v4; // r5
  int v5; // r2
  int v6; // r10
  int v7; // r8
  size_t v8; // r7
  int v9; // r0
  int v10; // r1
  int *v11; // r11
  int v12; // r2
  int v13; // r3
  unsigned __int16 *v14; // r0
  size_t v15; // r6
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r2
  _DWORD *v25; // [sp+4h] [bp-34h]
  int v26; // [sp+8h] [bp-30h]
  int v27; // [sp+Ch] [bp-2Ch]

  v2 = a1;
  v25 = (_DWORD *)(a1 + 56);
  sub_6086A2A4(a1 + 56, FIELD_U16(a2, 76));
  v27 = FIELD_U16(v2, 64);
  if ( FIELD_U16(v2, 64) )
  {
    v3 = 0;
    v4 = 0;
    v26 = v2;
    while ( 1 )
    {
      v5 = 0x10000;
      v6 = FIELD_U32(a2, 16);
      if ( v6 )
      {
        v7 = *(_DWORD *)(FIELD_U32(v2, 72) + 40 * v3);
        v8 = strlen((const char *)(v7 + 2));
        v9 = FIELD_U16(v6, 12);
        v11 = (int *)(v6 + 8 + 16 * v9);
        v10 = *v11;
        if ( FIELD_U32(v6, 8) < *v11 )
        {
          do
          {
            v12 = 0;
            if ( v8 > v10 >> 3 )
              v12 = (*(unsigned __int8 *)(v7 + v8 + ~(v10 >> 3) + 2) >> (v10 & 7)) & 1;
            v13 = *(_DWORD *)(v6 + 8 + 16 * v9);
            v9 = *(unsigned __int16 *)(v6 + 8 + 16 * v9 + 2 * v12 + 4);
            v11 = (int *)(v6 + 8 + 16 * v9);
            v10 = *v11;
          }
          while ( v13 < *v11 );
        }
        v14 = (unsigned __int16 *)v11[2];
        v15 = *v14;
        v16 = v15;
        if ( v8 < v15 )
          v16 = v8;
        if ( v16 )
        {
          v17 = memcmp(v14 + 1, (const void *)(v7 + 2), v16);
          if ( v8 < v15 )
          {
            v2 = v26;
            v5 = 0x10000;
          }
          else
          {
            v2 = v26;
            v5 = 0x10000;
            if ( !v17 )
              goto LABEL_15;
          }
        }
        else
        {
          v2 = v26;
          v5 = 0x10000;
          if ( v8 >= v15 )
          {
LABEL_15:
            v18 = 0;
            if ( v15 < v8 )
              v18 = -1;
            if ( !v18 )
            {
              v19 = (int)v11 - v6 - 24;
              if ( v19 >= -15 )
              {
                v20 = v19 >> 4;
                *(_DWORD *)(*v25 + 4 * v3) &= 0x3FFF8000u;
                *(_DWORD *)(*v25 + 4 * v3) |= v20 & 0x7FFF;
                *(_DWORD *)(*v25 + 4 * v20) &= 0xC0007FFF;
                *(_DWORD *)(*v25 + 4 * v20) |= (v3 << 15) & 0x3FFF8000;
                v5 = 1;
              }
            }
          }
        }
      }
      ++v3;
      v4 |= v5;
      if ( v3 == v27 )
        goto LABEL_26;
    }
  }
  v4 = 0;
LABEL_26:
  FIELD_U16(v2, 60) |= 1u;
  FIELD_U32(v2, 44) = 2139095040;
  v21 = FIELD_U32(v2, 40);
  if ( v21 >= 1 && v21 <= FIELD_U32(v2, 36) )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      ++v23;
      *(_DWORD *)(FIELD_U32(v2, 32) + v22) = 2139095040;
      v22 += 12;
    }
    while ( v23 < FIELD_U32(v2, 40) );
  }
  return v4;
}
