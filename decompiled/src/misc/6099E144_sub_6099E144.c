/* sub_6099E144
 * address: 0x6099E144   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6099E144(int a1, float *a2, __n64 result)
{
  int v3; // r2
  signed int v4; // r2
  float *v5; // r0
  signed int v6; // r1
  float v7; // s4
  float v8; // s2
  float v9; // s4

  v3 = 1;
  if ( *a2 >= result.n64_f32[0] )
    goto LABEL_9;
  v4 = FIELD_U8(a1, 3) / 3u;
  if ( a2[3 * v4 - 3] <= result.n64_f32[0] )
  {
    v3 = 3 * v4 - 2;
LABEL_9:
    result.n64_f32[1] = a2[v3];
    return result;
  }
  result.n64_u32[1] = 0;
  if ( FIELD_U8(a1, 3) >= 3u )
  {
    v5 = a2 + 3;
    v6 = 0;
    while ( *v5 <= result.n64_f32[0] )
    {
      ++v6;
      v5 += 3;
      if ( v6 >= v4 )
        return result;
    }
    v7 = *(v5 - 3);
    v8 = *v5 - v7;
    v9 = (float)(result.n64_f32[0] - v7) / v8;
    result.n64_f32[1] = (float)((float)((float)(*(v5 - 2)
                                              * (float)((float)((float)(v9 * (float)(v9 * (float)(v9 + v9)))
                                                              - (float)(v9 * (float)(v9 * 3.0)))
                                                      + 1.0))
                                      + (float)(v5[1]
                                              * (float)((float)(v9 * (float)(v9 * 3.0))
                                                      + (float)(v9 * (float)(v9 * (float)(v9 * -2.0))))))
                              + (float)(*(v5 - 1)
                                      * (float)(v8
                                              * (float)(v9
                                                      + (float)((float)(v9 * (float)(v9 * v9))
                                                              - (float)(v9 * (float)(v9 + v9)))))))
                      + (float)(v5[2] * (float)(v8 * (float)((float)(v9 * (float)(v9 * v9)) - (float)(v9 * v9))));
  }
  return result;
}
