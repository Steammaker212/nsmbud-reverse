/* sub_6099DDC8
 * address: 0x6099DDC8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6099DDC8(int a1, float *a2, __n64 result)
{
  int v3; // r2
  int v4; // r0
  float *v5; // r1
  int v6; // r2

  v3 = 1;
  if ( *a2 >= result.n64_f32[0] )
    goto LABEL_9;
  v4 = FIELD_U8(a1, 3) >> 1;
  if ( a2[2 * v4 - 2] <= result.n64_f32[0] )
  {
    v3 = 2 * v4 - 1;
LABEL_9:
    result.n64_f32[1] = a2[v3];
    return result;
  }
  result.n64_u32[1] = 0;
  if ( v4 )
  {
    v5 = a2 + 2;
    v6 = 0;
    while ( *v5 <= result.n64_f32[0] )
    {
      ++v6;
      v5 += 2;
      if ( v6 >= v4 )
        return result;
    }
    result.n64_f32[1] = *(v5 - 1)
                      + (float)((float)((float)(result.n64_f32[0] - *(v5 - 2)) / (float)(*v5 - *(v5 - 2)))
                              * (float)(v5[1] - *(v5 - 1)));
  }
  return result;
}
