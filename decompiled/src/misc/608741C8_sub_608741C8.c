/* sub_608741C8
 * address: 0x608741C8   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608741C8(int a1, int a2, int a3)
{
  int v3; // r8
  int v4; // r10
  int v5; // r5
  int v6; // r2
  int v7; // r11
  size_t v8; // r7
  int v9; // r0
  int v10; // r1
  int *v11; // r9
  int v12; // r2
  int v13; // r3
  unsigned __int16 *v14; // r0
  size_t v15; // r4
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v21; // [sp+4h] [bp-34h]
  int v22; // [sp+8h] [bp-30h]

  v22 = FIELD_U16(a2, 34);
  if ( FIELD_U16(a2, 34) )
  {
    v3 = 0;
    v4 = 0;
    v21 = FIELD_U32(a2, 40);
    v5 = FIELD_U32(a2, 24);
    while ( 1 )
    {
      v6 = -1;
      v7 = FIELD_U32(a3, 56);
      if ( v7 )
      {
        v8 = strlen((const char *)(*(_DWORD *)v5 + 2));
        v9 = FIELD_U16(v7, 12);
        v11 = (int *)(v7 + 8 + 16 * v9);
        v10 = *v11;
        if ( FIELD_U32(v7, 8) < *v11 )
        {
          do
          {
            v12 = 0;
            if ( v8 > v10 >> 3 )
              v12 = (*(unsigned __int8 *)(*(_DWORD *)v5 + v8 + ~(v10 >> 3) + 2) >> (v10 & 7)) & 1;
            v13 = *(_DWORD *)(v7 + 8 + 16 * v9);
            v9 = *(unsigned __int16 *)(v7 + 8 + 16 * v9 + 2 * v12 + 4);
            v11 = (int *)(v7 + 8 + 16 * v9);
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
          v17 = memcmp(v14 + 1, (const void *)(*(_DWORD *)v5 + 2), v16);
          v18 = 1;
          if ( v17 )
            v18 = v17;
          if ( v8 < v15 )
          {
            v6 = -1;
          }
          else
          {
            v6 = -1;
            if ( !v17 )
            {
LABEL_17:
              v18 = 0;
              if ( v15 < v8 )
                v18 = -1;
            }
          }
          if ( !v18 )
            v6 = ((int)v11 - v7 - 24) >> 4;
          goto LABEL_23;
        }
        v6 = -1;
        if ( v8 >= v15 )
          goto LABEL_17;
      }
LABEL_23:
      v5 += 16;
      v19 = v3 + v21;
      ++v3;
      *(_BYTE *)(FIELD_U32(a1, 84) + v19) = v6;
      v4 |= (unsigned __int16)(v6 >> 31) + 1;
      if ( v3 == v22 )
        return v4;
    }
  }
  return 0;
}
