/* nn__g3d__ShapeAnimObj__BindFast
 * address: 0x608743A8   size: 404   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall nn__g3d__ShapeAnimObj__BindFast(int a1, int a2)
{
  _DWORD *v3; // r11
  int v4; // r10
  int v5; // r1
  int v6; // r6
  int v7; // r0
  int v8; // r7
  int v9; // r3
  int v10; // r2
  _BYTE *v11; // r0
  int v12; // t1
  int v13; // r5
  int *result; // r0
  int v15; // r2
  int v16; // r5
  int v17; // r6

  v3 = (_DWORD *)(a1 + 56);
  sub_6086A2A4(a1 + 56, FIELD_U16(a2, 106));
  sub_6086A340((int)v3, *(unsigned __int16 **)(FIELD_U32(a1, 68) + 40));
  v4 = FIELD_U16(a1, 64);
  if ( FIELD_U16(a1, 64) )
  {
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(*v3 + 4 * v5) & 0x7FFF;
      if ( v6 != 0x7FFF )
      {
        v7 = FIELD_U32(a1, 72) + 48 * v5;
        v8 = FIELD_U16(v7, 34);
        if ( FIELD_U16(v7, 34) )
        {
          v9 = FIELD_U32(v7, 40);
          v10 = 0;
          v11 = (_BYTE *)(FIELD_U32(v7, 24) + 9);
          do
          {
            *(_BYTE *)(FIELD_U32(a1, 84) + v9++) = *v11;
            v12 = (char)*v11;
            v11 += 16;
            v13 = 0x10000;
            if ( v12 >= 0 )
              v13 = 1;
            --v8;
            v10 |= v13;
          }
          while ( v8 );
          if ( (v10 & 0x10001) == 0x10000 )
          {
            *(_DWORD *)(*v3 + 4 * v5) |= 0xC0007FFF;
            *(_DWORD *)(*v3 + 4 * v6) |= 0x3FFF8000u;
          }
        }
      }
      ++v5;
    }
    while ( v5 != v4 );
  }
  FIELD_U16(a1, 60) |= 1u;
  FIELD_U32(a1, 44) = 2139095040;
  result = *(int **)(a1 + 40);
  if ( (int)result >= 1 && (int)result <= FIELD_U32(a1, 36) )
  {
    result = 0;
    v15 = 0;
    do
    {
      ++v15;
      *(int *)((char *)result + FIELD_U32(a1, 32)) = 2139095040;
      result += 3;
    }
    while ( v15 < FIELD_U32(a1, 40) );
  }
  v16 = FIELD_U16(a1, 64);
  if ( FIELD_U16(a1, 64) )
  {
    v17 = 40;
    do
    {
      result = nn__g3d__ResVertexShapeAnim__Initialize_const(
                 (int *)(FIELD_U32(a1, 72) + v17 - 40),
                 (_DWORD *)(FIELD_U32(a1, 48) + 4 * *(_DWORD *)(FIELD_U32(a1, 72) + v17)));
      v17 += 48;
      --v16;
    }
    while ( v16 );
  }
  return result;
}
