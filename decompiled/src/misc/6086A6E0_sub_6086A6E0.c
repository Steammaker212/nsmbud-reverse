/* sub_6086A6E0
 * address: 0x6086A6E0   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A6E0(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // r8
  int v6; // r11
  int v7; // r9
  size_t v8; // r7
  int v9; // r0
  int v10; // r1
  int *v11; // r10
  int v12; // r2
  int v13; // r3
  unsigned __int16 *v14; // r0
  size_t v15; // r5
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r0
  int v23; // r2
  int v25; // [sp+0h] [bp-38h]
  _DWORD *v26; // [sp+4h] [bp-34h]
  int v27; // [sp+8h] [bp-30h]
  int v28; // [sp+Ch] [bp-2Ch]
  int v29; // [sp+10h] [bp-28h]

  v3 = FIELD_U32(a2, 32);
  v4 = FIELD_U32(v3, 16);
  v26 = (_DWORD *)(a1 + 56);
  sub_6086A2A4(a1 + 56, FIELD_U16(v3, 76));
  v25 = a1;
  v29 = FIELD_U16(a1, 64);
  if ( FIELD_U16(a1, 64) )
  {
    v5 = 0;
    v6 = 0;
    v28 = *(_DWORD *)(FIELD_U32(a1, 68) + 64);
    v27 = v4 + 24;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v28 + 8 * v5);
      v8 = strlen((const char *)(v7 + 2));
      v9 = FIELD_U16(v4, 12);
      v11 = (int *)(v4 + 8 + 16 * v9);
      v10 = *v11;
      if ( FIELD_U32(v4, 8) < *v11 )
      {
        do
        {
          v12 = 0;
          if ( v8 > v10 >> 3 )
            v12 = (*(unsigned __int8 *)(v7 + v8 + ~(v10 >> 3) + 2) >> (v10 & 7)) & 1;
          v13 = *(_DWORD *)(v4 + 8 + 16 * v9);
          v9 = *(unsigned __int16 *)(v4 + 8 + 16 * v9 + 2 * v12 + 4);
          v11 = (int *)(v4 + 8 + 16 * v9);
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
        break;
      v19 = 0x10000;
      if ( v8 >= v15 )
        goto LABEL_16;
LABEL_21:
      v6 |= v19;
      if ( ++v5 == v29 )
        goto LABEL_24;
    }
    v17 = memcmp(v14 + 1, (const void *)(v7 + 2), v16);
    v18 = 1;
    if ( v17 )
      v18 = v17;
    if ( v8 >= v15 && !v17 )
    {
LABEL_16:
      v18 = 0;
      if ( v15 < v8 )
        v18 = -1;
    }
    v19 = 0x10000;
    if ( !v18 )
    {
      v20 = (int)v11 - v27;
      if ( (int)v11 - v27 >= -15 )
      {
        *(_DWORD *)(*v26 + 4 * v5) &= 0x3FFF8000u;
        *(_DWORD *)(*v26 + 4 * v5) |= (v20 >> 4) & 0x7FFF;
        *(_DWORD *)(*v26 + 4 * (v20 >> 4)) &= 0xC0007FFF;
        *(_DWORD *)(*v26 + 4 * (v20 >> 4)) |= (v5 << 15) & 0x3FFF8000;
        v19 = 1;
      }
    }
    goto LABEL_21;
  }
  v6 = 0;
LABEL_24:
  FIELD_U16(v25, 60) |= 1u;
  FIELD_U32(v25, 44) = 2139095040;
  v21 = FIELD_U32(v25, 40);
  if ( v21 >= 1 && v21 <= FIELD_U32(v25, 36) )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      ++v23;
      *(_DWORD *)(FIELD_U32(v25, 32) + v22) = 2139095040;
      v22 += 12;
    }
    while ( v23 < FIELD_U32(v25, 40) );
  }
  qmemcpy(
    *(void **)(v25 + 48),
    *(const void **)(FIELD_U32(v25, 68) + 56),
    (((unsigned int)FIELD_U16(v25, 64) + 31) >> 3) & 0x3FFC);
  return v6;
}
