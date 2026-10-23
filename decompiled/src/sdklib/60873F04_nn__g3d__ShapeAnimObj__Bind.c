/* nn__g3d__ShapeAnimObj__Bind
 * address: 0x60873F04   size: 704   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__g3d__ShapeAnimObj__Bind(int a1, int a2)
{
  int v2; // r11
  int v3; // r8
  int v4; // r5
  int v5; // r9
  int v6; // r0
  int v7; // r1
  int v8; // r11
  size_t v9; // r7
  int v10; // r0
  int v11; // r1
  int *v12; // r10
  int v13; // r2
  int v14; // r3
  unsigned __int16 *v15; // r0
  size_t v16; // r4
  size_t v17; // r2
  int v18; // r0
  bool v19; // zf
  int v20; // r1
  int v21; // r1
  int v22; // r6
  int v23; // r0
  int v24; // r0
  int v25; // r2
  int v26; // r4
  int v27; // r6
  _DWORD *v29; // [sp+0h] [bp-38h]
  int v30; // [sp+4h] [bp-34h]
  int v31; // [sp+8h] [bp-30h]
  int v32; // [sp+Ch] [bp-2Ch]

  v2 = a1;
  v29 = (_DWORD *)(a1 + 56);
  sub_6086A2A4(a1 + 56, FIELD_U16(a2, 106));
  v32 = FIELD_U16(v2, 64);
  if ( FIELD_U16(v2, 64) )
  {
    v3 = 0;
    v4 = 0;
    v30 = v2;
    while ( 1 )
    {
      v5 = FIELD_U32(a2, 56);
      v6 = 0x10000;
      if ( v5 )
      {
        v7 = FIELD_U32(v2, 72) + 48 * v3;
        v8 = *(_DWORD *)v7;
        v31 = v7;
        v9 = strlen((const char *)(*(_DWORD *)v7 + 2));
        v10 = FIELD_U16(v5, 12);
        v12 = (int *)(v5 + 8 + 16 * v10);
        v11 = *v12;
        if ( FIELD_U32(v5, 8) < *v12 )
        {
          do
          {
            v13 = 0;
            if ( v9 > v11 >> 3 )
              v13 = (*(unsigned __int8 *)(v8 + v9 + ~(v11 >> 3) + 2) >> (v11 & 7)) & 1;
            v14 = *(_DWORD *)(v5 + 8 + 16 * v10);
            v10 = *(unsigned __int16 *)(v5 + 8 + 16 * v10 + 2 * v13 + 4);
            v12 = (int *)(v5 + 8 + 16 * v10);
            v11 = *v12;
          }
          while ( v14 < *v12 );
        }
        v15 = (unsigned __int16 *)v12[2];
        v16 = *v15;
        v17 = v16;
        if ( v9 < v16 )
          v17 = v9;
        if ( v17 )
        {
          v18 = memcmp(v15 + 1, (const void *)(v8 + 2), v17);
          if ( v9 < v16 )
          {
            v2 = v30;
            v6 = 0x10000;
          }
          else
          {
            v2 = v30;
            v19 = v18 == 0;
            v6 = 0x10000;
            if ( v19 )
              goto LABEL_15;
          }
        }
        else
        {
          v2 = v30;
          v6 = 0x10000;
          if ( v9 >= v16 )
          {
LABEL_15:
            v20 = 0;
            if ( v16 < v9 )
              v20 = -1;
            if ( !v20 )
            {
              v21 = (int)v12 - v5 - 24;
              if ( v21 >= -15 )
              {
                v22 = v21 >> 4;
                v6 = sub_608741C8(v2, v31, FIELD_U32(a2, 48) + 112 * (v21 >> 4));
                if ( (v6 & 1) != 0 )
                {
                  *(_DWORD *)(*v29 + 4 * v3) &= 0x3FFF8000u;
                  *(_DWORD *)(*v29 + 4 * v3) |= v22 & 0x7FFF;
                  *(_DWORD *)(*v29 + 4 * v22) &= 0xC0007FFF;
                  *(_DWORD *)(*v29 + 4 * v22) |= (v3 << 15) & 0x3FFF8000;
                }
              }
            }
          }
        }
      }
      v4 |= v6;
      if ( ++v3 == v32 )
        goto LABEL_27;
    }
  }
  v4 = 0;
LABEL_27:
  FIELD_U16(v2, 60) |= 1u;
  FIELD_U32(v2, 44) = 2139095040;
  v23 = FIELD_U32(v2, 40);
  if ( v23 >= 1 && v23 <= FIELD_U32(v2, 36) )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      ++v25;
      *(_DWORD *)(FIELD_U32(v2, 32) + v24) = 2139095040;
      v24 += 12;
    }
    while ( v25 < FIELD_U32(v2, 40) );
  }
  v26 = FIELD_U16(v2, 64);
  if ( FIELD_U16(v2, 64) )
  {
    v27 = 40;
    do
    {
      nn__g3d__ResVertexShapeAnim__Initialize_const(
        (int *)(FIELD_U32(v2, 72) + v27 - 40),
        (_DWORD *)(FIELD_U32(v2, 48) + 4 * *(_DWORD *)(FIELD_U32(v2, 72) + v27)));
      v27 += 48;
      --v26;
    }
    while ( v26 );
  }
  return v4;
}
