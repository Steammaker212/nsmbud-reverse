/* nn__g3d__ShapeAnimObj__Calculate
 * address: 0x60874540   size: 276   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall nn__g3d__ShapeAnimObj__Calculate(int a1)
{
  float *result; // r0
  float v3; // s16
  int v4; // r0
  int v5; // r8
  int v6; // r9
  int v7; // r5
  int v8; // r7
  int v9; // r7
  int v10; // r5

  result = *(float **)(a1 + 4);
  v3 = *result;
  if ( FIELD_F32(a1, 44) != *result )
  {
    v4 = FIELD_U32(a1, 40);
    v5 = FIELD_U32(a1, 48);
    v6 = FIELD_U16(a1, 64);
    if ( v4 >= 1 && v4 <= FIELD_U32(a1, 36) )
    {
      if ( FIELD_U16(a1, 64) )
      {
        v9 = 0;
        v10 = 0;
        do
        {
          if ( (*(_BYTE *)(FIELD_U32(a1, 56) + 4 * v10 + 3) & 0x40) == 0 )
            sub_6087248C(
              FIELD_U32(a1, 72) + v9,
              (float *)(v5 + 4 * *(_DWORD *)(FIELD_U32(a1, 72) + v9 + 40)),
              (unsigned __int8 *)(FIELD_U32(a1, 84) + *(_DWORD *)(FIELD_U32(a1, 72) + v9 + 40)),
              FIELD_U32(a1, 32) + 12 * *(_DWORD *)(FIELD_U32(a1, 72) + v9 + 36),
              v3);
          ++v10;
          v9 += 48;
        }
        while ( v6 != v10 );
      }
    }
    else if ( FIELD_U16(a1, 64) )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        if ( (*(_BYTE *)(FIELD_U32(a1, 56) + 4 * v8 + 3) & 0x40) == 0 )
          sub_608723FC(
            FIELD_U32(a1, 72) + v7,
            (float *)(v5 + 4 * *(_DWORD *)(FIELD_U32(a1, 72) + v7 + 40)),
            (unsigned __int8 *)(FIELD_U32(a1, 84) + *(_DWORD *)(FIELD_U32(a1, 72) + v7 + 40)),
            v3);
        ++v8;
        v7 += 48;
      }
      while ( v6 != v8 );
    }
    result = **(float ***)(a1 + 4);
    FIELD_U32(a1, 44) = result;
  }
  return result;
}
