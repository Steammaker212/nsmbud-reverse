/* sub_6099DBE0
 * address: 0x6099DBE0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6099DBE0(int a1, unsigned __int32 *a2, __n64 result)
{
  unsigned int v3; // r0
  int v4; // r2
  float v5; // s4
  int v6; // r0
  float *v7; // r3
  float v8; // s4
  int v9; // r0

  v3 = FIELD_U8(a1, 3);
  if ( (v3 & 1) != 0 )
  {
    result.n64_u32[1] = 0;
  }
  else if ( result.n64_f32[0] >= 0.0 )
  {
    v4 = (v3 >> 1) - 1;
    v5 = (float)v4 * result.n64_f32[0];
    v6 = (int)v5;
    v7 = (float *)&a2[2 * (int)v5];
    if ( (int)v5 < v4 )
    {
      v8 = v5 - (float)(int)v5;
      v9 = 2 * v6;
      result.n64_f32[1] = (float)((float)((float)((float)((float)(v8 * (float)(v8 * 3.0))
                                                        + (float)(v8 * (float)(v8 * (float)(v8 * -2.0))))
                                                * *(float *)&a2[v9 + 2])
                                        + (float)((float)((float)((float)(v8 * (float)(v8 * (float)(v8 + v8)))
                                                                - (float)(v8 * (float)(v8 * 3.0)))
                                                        + 1.0)
                                                * *v7))
                                + (float)((float)(v8
                                                + (float)((float)(v8 * (float)(v8 * v8)) - (float)(v8 * (float)(v8 + v8))))
                                        * *(float *)&a2[v9 | 1]))
                        + (float)((float)((float)(v8 * (float)(v8 * v8)) - (float)(v8 * v8)) * *(float *)&a2[v9 + 3]);
    }
    else
    {
      result.n64_f32[1] = *v7;
    }
  }
  else
  {
    result.n64_u32[1] = *a2;
  }
  return result;
}
