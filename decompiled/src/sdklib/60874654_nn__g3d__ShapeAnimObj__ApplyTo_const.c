/* nn__g3d__ShapeAnimObj__ApplyTo_const
 * address: 0x60874654   size: 328   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__g3d__ShapeAnimObj__ApplyTo_const(int result, int a2)
{
  int v2; // r9
  int v3; // r7
  int v4; // r2
  _DWORD *v5; // r10
  _DWORD *v6; // r4
  _DWORD *v7; // r11
  int v8; // r3
  unsigned int v9; // r2
  int v10; // r8
  float v11; // s2
  float *v12; // r6
  unsigned int v13; // r3
  int v14; // r2
  int v15; // r5
  int v16; // r1
  int v18; // [sp+4h] [bp-28h]

  v18 = FIELD_U16(result, 64);
  if ( FIELD_U16(result, 64) )
  {
    v2 = 0;
    do
    {
      if ( *(int *)(FIELD_U32(result, 56) + 4 * v2) >= 0 )
      {
        v3 = FIELD_U32(result, 84);
        v4 = FIELD_U32(a2, 32) + 56 * (*(_DWORD *)(FIELD_U32(result, 56) + 4 * v2) & 0x7FFF);
        v5 = (_DWORD *)(v4 + 28);
        v6 = (_DWORD *)(v4 + 4);
        v7 = (_DWORD *)(v4 + 24);
        v8 = FIELD_U32(result, 72) + 48 * v2;
        v9 = FIELD_U16(v8, 34);
        v10 = FIELD_U32(v8, 40);
        if ( v9 < 2 )
        {
          v11 = 1.0;
        }
        else
        {
          v11 = 1.0;
          v12 = (float *)(FIELD_U32(result, 48) + 4 * v10 + 4);
          v13 = v9 - 1;
          v14 = v10 + 1;
          do
          {
            v15 = *(char *)(v3 + v14);
            if ( v15 != -1 )
            {
              v11 = v11 - *v12;
              *(float *)(*v7 + 4 * v15) = *v12;
              *v6 |= 2u;
              *(_DWORD *)(*v5 + 4 * (v15 >> 5)) |= 1 << (v15 & 0x1F);
              v3 = FIELD_U32(result, 84);
            }
            ++v12;
            --v13;
            ++v14;
          }
          while ( v13 );
        }
        v16 = *(char *)(v3 + v10);
        *(float *)(*v7 + 4 * v16) = v11;
        *v6 |= 2u;
        *(_DWORD *)(*v5 + 4 * (v16 >> 5)) |= 1 << (v16 & 0x1F);
      }
      ++v2;
    }
    while ( v2 != v18 );
  }
  return result;
}
