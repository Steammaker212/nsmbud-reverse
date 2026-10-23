/* sub_6099DE6C
 * address: 0x6099DE6C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6099DE6C(int a1, float *a2, __n64 result)
{
  int v3; // r2
  signed int v4; // r2
  float *v5; // r0
  signed int v6; // r1
  float v7; // s2

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
    v7 = (float)(result.n64_f32[0] - *(v5 - 3)) / (float)(*v5 - *(v5 - 3));
    result.n64_f32[1] = (float)((float)((float)(*(v5 - 2)
                                              * (float)((float)((float)(v7 * (float)(v7 * (float)(v7 + v7)))
                                                              - (float)(v7 * (float)(v7 * 3.0)))
                                                      + 1.0))
                                      + (float)(v5[1]
                                              * (float)((float)(v7 * (float)(v7 * 3.0))
                                                      + (float)(v7 * (float)(v7 * (float)(v7 * -2.0))))))
                              + (float)(*(v5 - 1)
                                      * (float)(v7
                                              + (float)((float)(v7 * (float)(v7 * v7)) - (float)(v7 * (float)(v7 + v7))))))
                      + (float)(v5[2] * (float)((float)(v7 * (float)(v7 * v7)) - (float)(v7 * v7)));
  }
  return result;
}
