/* sub_609294E0
 * address: 0x609294E0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609294E0(float *a1)
{
  float v2; // s0
  float v3; // s16
  float v4; // s24
  float v5; // s18
  float v6; // s20
  float v7; // s0
  float v8; // s22

  v2 = sqrtf((float)((float)(a1[72] * a1[72]) + (float)(a1[71] * a1[71])) + (float)(a1[73] * a1[73]));
  if ( v2 > 0.0 )
  {
    v3 = 1.0;
    v4 = 1.0 / v2;
    v5 = (float)(1.0 / v2) * a1[73];
    v6 = (float)(1.0 / v2) * a1[71];
    v7 = sqrtf((float)(v5 * v5) + (float)(v6 * v6));
    v8 = v4 * a1[72];
    if ( v7 > 0.0 )
      a1[97] = atan2f(-(float)(v6 * (float)(1.0 / v7)), -(float)(v5 * (float)(1.0 / v7)));
    if ( v8 <= 1.0 )
    {
      if ( v8 >= -1.0 )
        v3 = -v8;
    }
    else
    {
      v3 = -1.0;
    }
    a1[98] = asinf(v3);
  }
}
