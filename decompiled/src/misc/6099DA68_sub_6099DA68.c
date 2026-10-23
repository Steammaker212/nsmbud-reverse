/* sub_6099DA68
 * address: 0x6099DA68   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6099DA68(int a1, float *a2, float a3)
{
  int v3; // r2
  signed int v4; // r2
  float v5; // s2
  float *v6; // r0
  signed int v7; // r1
  float v9; // s2
  float v10; // s4
  float v11; // s0

  v3 = 1;
  if ( *a2 >= a3 )
    return a2[v3];
  v4 = FIELD_U8(a1, 3) / 3u;
  if ( a2[3 * v4 - 3] <= a3 )
  {
    v3 = 3 * v4 - 2;
    return a2[v3];
  }
  v5 = 0.0;
  if ( FIELD_U8(a1, 3) >= 3u )
  {
    v6 = a2 + 3;
    v7 = 0;
    while ( *v6 <= a3 )
    {
      ++v7;
      v6 += 3;
      if ( v7 >= v4 )
        return v5;
    }
    v9 = *(v6 - 3);
    v10 = *v6 - v9;
    v11 = (float)(a3 - v9) / v10;
    return (float)((float)((float)(*(v6 - 2)
                                 * (float)((float)((float)(v11 * (float)(v11 * (float)(v11 + v11)))
                                                 - (float)(v11 * (float)(v11 * 3.0)))
                                         + 1.0))
                         + (float)(v6[1]
                                 * (float)((float)(v11 * (float)(v11 * 3.0))
                                         + (float)(v11 * (float)(v11 * (float)(v11 * -2.0))))))
                 + (float)(*(v6 - 1)
                         * (float)(v10
                                 * (float)(v11
                                         + (float)((float)(v11 * (float)(v11 * v11)) - (float)(v11 * (float)(v11 + v11)))))))
         + (float)(v6[2] * (float)(v10 * (float)((float)(v11 * (float)(v11 * v11)) - (float)(v11 * v11))));
  }
  return v5;
}
