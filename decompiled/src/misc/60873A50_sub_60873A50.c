/* sub_60873A50
 * address: 0x60873A50   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60873A50(int result, int a2)
{
  int v2; // r2
  int v3; // r2
  int v4; // r7
  int v5; // r2
  int v6; // r9
  int v7; // r11
  int v8; // r8
  size_t v9; // r5
  int v10; // r0
  int v11; // r1
  int *v12; // r4
  int v13; // r2
  int v14; // r3
  unsigned __int16 *v15; // r0
  size_t v16; // r6
  size_t v17; // r2
  int v18; // r0
  int v19; // r1
  bool v20; // zf
  int v21; // r1
  int v22; // r1
  int v23; // [sp+0h] [bp-38h]
  int v24; // [sp+4h] [bp-34h]
  int v25; // [sp+8h] [bp-30h]
  int *v26; // [sp+Ch] [bp-2Ch]
  int v27; // [sp+10h] [bp-28h]

  v2 = FIELD_S8(a2, 223);
  if ( v2 == -1 )
  {
    FIELD_U16(result, 176) = 0;
  }
  else
  {
    v24 = FIELD_S8(a2, 223);
    v3 = FIELD_U32(a2, 72) + 32 * v2;
    v23 = FIELD_U32(a2, 72);
    FIELD_U16(result, 176) = FIELD_U16(v3, 26);
    v27 = FIELD_U16(result, 170);
    if ( FIELD_U16(result, 170) )
    {
      v4 = 0;
      v25 = result;
      v26 = (int *)(v3 + 8);
      do
      {
        v5 = -1;
        v6 = FIELD_U32(result, 88) + 32 * v4;
        v7 = *v26;
        if ( *v26 )
        {
          v8 = FIELD_U32(v6, 8);
          v9 = strlen((const char *)(v8 + 2));
          v10 = FIELD_U16(v7, 12);
          v12 = (int *)(v7 + 8 + 16 * v10);
          v11 = *v12;
          if ( FIELD_U32(v7, 8) < *v12 )
          {
            do
            {
              v13 = 0;
              if ( v9 > v11 >> 3 )
                v13 = (*(unsigned __int8 *)(v8 + v9 + ~(v11 >> 3) + 2) >> (v11 & 7)) & 1;
              v14 = *(_DWORD *)(v7 + 8 + 16 * v10);
              v10 = *(unsigned __int16 *)(v7 + 8 + 16 * v10 + 2 * v13 + 4);
              v12 = (int *)(v7 + 8 + 16 * v10);
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
            v19 = 1;
            if ( v18 )
              v19 = v18;
            if ( v9 < v16 )
            {
              result = v25;
              v5 = -1;
            }
            else
            {
              v20 = v18 == 0;
              result = v25;
              v5 = -1;
              if ( v20 )
              {
LABEL_18:
                v19 = 0;
                if ( v16 < v9 )
                  v19 = -1;
              }
            }
            if ( !v19 )
            {
              v5 = -1;
              v21 = (int)v12 - v7 - 24;
              if ( v21 >> 4 != -1 )
              {
                v22 = *(_DWORD *)(v23 + 32 * v24) + 16 * (v21 >> 4);
                if ( v22 )
                  v5 = FIELD_U16(v22, 12) - 1;
              }
            }
            goto LABEL_26;
          }
          result = v25;
          v5 = -1;
          if ( v9 >= v16 )
            goto LABEL_18;
        }
LABEL_26:
        FIELD_U32(v6, 20) = v5;
        ++v4;
      }
      while ( v4 != v27 );
    }
  }
  return result;
}
