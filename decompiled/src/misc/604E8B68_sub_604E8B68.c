/* sub_604E8B68
 * address: 0x604E8B68   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604E8B68(_DWORD *result)
{
  int v1; // r1
  int v2; // r12
  int v3; // r3
  unsigned int v4; // lr
  float v5; // s8
  float v6; // s10
  float v7; // s12
  float v8; // s14
  int v9; // r2
  float v10; // s7
  float v11; // s5
  float v12; // s3
  float v13; // s1
  float *v14; // r2

  if ( (int)result[142] >= 1 )
  {
    v1 = 0;
    v2 = 12;
    do
    {
      v3 = *(_DWORD *)(result[2] + 4 * (v1 + result[143]));
      v4 = FIELD_U8(v3, 67);
      v5 = FIELD_F32(v3, 92);
      v6 = FIELD_F32(v3, 108);
      v7 = FIELD_F32(v3, 56) * 0.5;
      if ( (v4 & 3) == 2 )
      {
        v5 = v5 - v7;
      }
      else if ( (v4 & 3) == 1 )
      {
        v5 = v5 + v7;
        v6 = v6 + 0.0;
      }
      v8 = FIELD_F32(v3, 60) * 0.5;
      v9 = (v4 >> 2) & 3;
      if ( v9 == 2 )
      {
        v6 = v8 + v6;
        v5 = v5 + 0.0;
      }
      else if ( v9 == 1 )
      {
        v6 = v6 - v8;
      }
      v10 = 3.4028e38;
      v11 = 3.4028e38;
      v12 = -3.4028e38;
      v13 = -3.4028e38;
      if ( (FIELD_U8(v3, 64) & 1) != 0 )
      {
        v13 = v8 + v6;
        v12 = v7 + v5;
        v11 = v6 - v8;
        v10 = v5 - v7;
      }
      v14 = (float *)(result[145] + v2);
      ++v1;
      v2 += 24;
      *(v14 - 1) = v10;
      *v14 = v11;
      v14[1] = v12;
      v14[2] = v13;
    }
    while ( v1 < result[142] );
  }
  return result;
}
