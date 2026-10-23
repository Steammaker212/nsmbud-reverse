/* sub_60852D0C
 * address: 0x60852D0C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60852D0C(int a1)
{
  int v1; // r1
  int v2; // r2
  float v3; // s8
  int v4; // r3
  float v5; // s10
  unsigned int v6; // r1
  __int64 v7; // d3
  __int64 v8; // d1
  float v9; // s12
  float v10; // s8
  float v11; // s10
  int v12; // r1
  float result; // s0

  v1 = FIELD_U32(a1, 64);
  if ( v1 )
  {
    v2 = v1 + 80;
    v3 = FIELD_F32(v1, 56);
    v4 = v1 + 96;
    v5 = FIELD_F32(v1, 60);
    v6 = FIELD_U8(v1, 67);
    v7 = FIELD_U64(v2, 8);
    v8 = FIELD_U64(v4, 8);
    v9 = fabsf(FIELD_F32(v4, 4) * v5);
    v10 = fabsf(*(float *)v2 * v3) * 0.5;
    if ( (v6 & 3) == 2 )
    {
      *((float *)&v7 + 1) = *((float *)&v7 + 1) - v10;
    }
    else if ( (v6 & 3) == 1 )
    {
      *((float *)&v7 + 1) = *((float *)&v7 + 1) + v10;
    }
    v11 = v9 * 0.5;
    v12 = (v6 >> 2) & 3;
    if ( v12 == 2 )
    {
      *((float *)&v8 + 1) = *((float *)&v8 + 1) + v11;
    }
    else if ( v12 == 1 )
    {
      *((float *)&v8 + 1) = *((float *)&v8 + 1) - v11;
    }
    FIELD_F32(a1, 68) = *((float *)&v7 + 1) - v10;
    FIELD_F32(a1, 72) = *((float *)&v8 + 1) - v11;
    FIELD_F32(a1, 76) = v10 + *((float *)&v7 + 1);
    FIELD_F32(a1, 80) = v11 + *((float *)&v8 + 1);
    return v11 + *((float *)&v8 + 1);
  }
  return result;
}
