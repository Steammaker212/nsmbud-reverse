/* sub_6086B894
 * address: 0x6086B894   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6086B894(int a1)
{
  float *result; // r0
  float v3; // s16
  int v4; // r0
  int v5; // r9
  int v6; // r6
  int v7; // r10
  int v8; // r7
  unsigned __int16 *v9; // r5
  int v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r7
  int v14; // r10
  int v15; // r6
  unsigned __int16 *v16; // r5
  int v17; // r0
  int v18; // r10
  int v19; // r0

  result = *(float **)(a1 + 4);
  v3 = *result;
  if ( FIELD_F32(a1, 44) != *result )
  {
    v4 = FIELD_U32(a1, 40);
    v5 = FIELD_U16(a1, 64);
    if ( v4 >= 1 && v4 <= FIELD_U32(a1, 36) )
    {
      if ( FIELD_U16(a1, 64) )
      {
        v13 = 0;
        v14 = 0;
        v15 = 0;
        do
        {
          if ( (*(_BYTE *)(FIELD_U32(a1, 56) + 4 * v15 + 3) & 0x40) == 0 )
          {
            v16 = (unsigned __int16 *)(FIELD_U32(a1, 72) + v13);
            v17 = v16[20];
            if ( v17 != 0xFFFF )
              sub_60870234(
                FIELD_U32(a1, 72) + v13,
                FIELD_U32(a1, 48) + 4 * v17,
                FIELD_U32(a1, 92) + 2 * v14,
                FIELD_U32(a1, 32) + 12 * v17,
                v3);
            v18 = v16[25] + v14;
            v19 = v16[21];
            if ( v19 != 0xFFFF )
              sub_608704CC(
                v16,
                FIELD_U32(a1, 48) + 4 * v19,
                FIELD_U32(a1, 92) + 2 * v18,
                FIELD_U32(a1, 32) + 12 * v19,
                v3);
            v14 = v16[26] + v18;
            if ( v16[23] != 0xFFFF )
              sub_608705FC(v16, FIELD_U32(a1, 48) + 4 * v16[22], FIELD_U32(a1, 32) + 12 * v16[22], v3);
          }
          ++v15;
          v13 += 64;
        }
        while ( v5 != v15 );
      }
    }
    else if ( FIELD_U16(a1, 64) )
    {
      v6 = 0;
      v7 = 0;
      v8 = 0;
      do
      {
        if ( (*(_BYTE *)(FIELD_U32(a1, 56) + 4 * v8 + 3) & 0x40) == 0 )
        {
          v9 = (unsigned __int16 *)(FIELD_U32(a1, 72) + v6);
          v10 = v9[20];
          if ( v10 != 0xFFFF )
            sub_60870390(
              FIELD_U32(a1, 72) + v6,
              FIELD_U32(a1, 48) + 4 * v10,
              FIELD_U32(a1, 92) + 2 * v7,
              0,
              v3);
          v11 = v9[25] + v7;
          v12 = v9[21];
          if ( v12 != 0xFFFF )
            sub_6087055C(v9, FIELD_U32(a1, 48) + 4 * v12, FIELD_U32(a1, 92) + 2 * v11, 0, v3);
          v7 = v9[26] + v11;
          if ( v9[23] != 0xFFFF )
            sub_60870630(v9, FIELD_U32(a1, 48) + 4 * v9[22], 0, v3);
        }
        ++v8;
        v6 += 64;
      }
      while ( v5 != v8 );
    }
    result = **(float ***)(a1 + 4);
    FIELD_U32(a1, 44) = result;
  }
  return result;
}
